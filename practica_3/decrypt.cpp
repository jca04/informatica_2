#include "utils.h"
#include "decrypt.h"
#include "encrypt.h"
#include <iostream>

using namespace std;

string revertInvertBits(const string& bits) {
    string result;
    for (char c : bits) {
        result += (c == '1' ? '0' : '1');
    }

    return result;
}

string revertInvertEveryTwoBits(const string& bits) {
    std::string resultado = bits;
    for (size_t i = 0; i < bits.length(); i += 2) {
        if (i + 1 < bits.length()) {
            resultado[i + 1] = (bits[i + 1] == '1' ? '0' : '1');
        }
    }
    return resultado;
}

string revertInvertEveryThreeBits(const string& bits) {
    std::string resultado = bits;
    for (size_t i = 0; i < bits.length(); i += 3) {
        if (i + 2 < bits.length()) {
            resultado[i + 2] = (bits[i + 2] == '1' ? '0' : '1');
        }
    }
    return resultado;
}

string decryptFirstMethod(const string &binary, int n = 4) {
    unsigned int totalSubStr = (binary.length() + n - 1) / n;
    string* subStrArr = new string[totalSubStr];

    // Separar en bloques de n bits
    for (unsigned int i = 0; i < binary.length(); i += n) {
        string subStr = binary.substr(i, n);
        subStrArr[i / n] = subStr;
    }

    // Desencriptar el primer bloque
    string firstBlockDecoded = revertInvertBits(subStrArr[0]);
    string decoded = firstBlockDecoded;

    for (unsigned int i = 1; i < totalSubStr; ++i) {
        std::string prevBlock = subStrArr[i - 1];
        int count1 = 0;
        int count0 = 0;

        for (char c : prevBlock) {
            if (c == '1') {
                count1++;
            } else {
                count0++;
            }
        }

        string currentBlock = subStrArr[i];
        string currentBlockDecoded;

        if (count1 == count0) {
            currentBlockDecoded = revertInvertBits(currentBlock);
        } else if (count0 > count1) {
            currentBlockDecoded = revertInvertEveryTwoBits(currentBlock);
        } else if (count1 > count0) {
            currentBlockDecoded = revertInvertEveryThreeBits(currentBlock);
        }

        decoded += currentBlockDecoded;
    }

    delete[] subStrArr;
    return decoded;
}

string decryptSecondMethod(const string &binary, int n = 4) {
    std::string decoded = "";

    for (size_t i = 0; i < binary.length(); i += n) {
        string block = binary.substr(i, n);
        string decodedBlock = block;

        if (block.length() == n) {
            for (int j = 0; j < n; ++j) {
                unsigned int index = (j == n - 1) ? 0 : j + 1;
                decodedBlock[j] = block[index];
            }
        } else {
            decodedBlock = block;
        }

        decoded += decodedBlock;
    }

    return decoded;
}

void decrypt() {
    string entryFile, exitFile;
    unsigned short n, method;

    cout << "Ingrese el nombre del archivo de entrada (codificado): " << endl;
    cin >> entryFile;

    cout << "Ingrese el nombre del archivo de salida (desencriptado): " << endl;
    cin >> exitFile;

    cout << "Ingrese la semilla (n): " << endl;
    cin >> n;

    cout << "Seleccione el metodo de decodificacion (1 o 2): " << endl;
    cin >> method;

    // Leer el archivo codificado
    string encodedContent = readFile(entryFile);

    string decodedBinary;

    if (method == 1) {
        decodedBinary = decryptFirstMethod(encodedContent, n);
    } else if (method == 2) {
        decodedBinary = decryptSecondMethod(encodedContent, n);
    }

    writeBinaryFile(exitFile, decodedBinary, false);
}
