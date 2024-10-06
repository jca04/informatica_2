#include "encrypt.h"
#include "utils.h"
#include <string>
#include <iostream>

using namespace std;

string invertBits(const string &bits) {
    string result;
    for (char c : bits) {
        result += (c == '1' ? '0' : '1');
    }

    return result;
}

string invertEveryTwotBits(const string &bits) {
    string result = bits;
    for(size_t i = 0; i < bits.length(); i += 2) {
        if (i + 1 < bits.length()) {
            result[i + 1] = (bits[i + 1] == '1' ? '0' : '1');
        }
    }

    return result;
}

string invertEveryThreeBits(const string &bits) {
    string result = bits;

    for (size_t i = 0; i < bits.length(); i += 3) {
        if (i + 2 < bits.length()) {
            result[i + 2] = (bits[i + 2] == '1' ? '0' : '1');
        }
    }

    return result;
}

string firstMethod(const string &binary, int n) {

    unsigned int totalSubStr = (binary.length() + n - 1) / n;
    string* subStrArr = new string[totalSubStr];

    // Separar en bloques de n bits
    for (unsigned int i = 0; i < binary.length(); i += n) {
        string subStr = binary.substr(i, n);
        subStrArr[i / n] = subStr;
    }

    // Codificar el primer bloque
    string firstBlock = subStrArr[0];
    string firstBlockEncoded;

    for (char c : firstBlock) {
        firstBlockEncoded += (c == '1' ? '0' : '1');
    }

    string encoded = firstBlockEncoded;

    // Procesar los siguientes bloques
    for (unsigned int i = 1; i < totalSubStr; ++i) {
        string prevBlock = subStrArr[i - 1];
        int count1 = 0;
        int count0 = 0;

        // Contar 1s y 0s en el bloque anterior
        for (char c : prevBlock) {
            if (c == '1') {
                count1++;
            } else {
                count0++;
            }
        }

        string currentBlock = subStrArr[i];
        string currentBlockEncoded;

        // Aplicar las reglas de codificación
        if (count1 == count0) {
            currentBlockEncoded = invertBits(currentBlock);
        } else if (count0 > count1) {
            currentBlockEncoded = invertEveryTwotBits(currentBlock);
        } else if (count1 > count0) {
            currentBlockEncoded = invertEveryThreeBits(currentBlock);
        }

        // Agregar el bloque codificado al resultado
        encoded += currentBlockEncoded;

    }

    delete[] subStrArr; // Liberar memoria
    return encoded; // Retornar la cadena codificada completa
}

string secondMethod(const string &binary, int n) {
    string encoded = "";

    for (size_t i = 0; i < binary.length(); i += n) {
        string block = binary.substr(i, n); // extraer el bloque de n bits
        string encodedBlock = block;

        // Desplazar los bits dentro del bloque
        if (block.length() == n) {
            for (int j = 0; j < n; ++j) {
                unsigned int index = (j == 0) ? n - 1 : j - 1;
                encodedBlock[j] = block[index];
            }
        } else {
            encodedBlock = block;
        }

        encoded += encodedBlock;
    }

    return encoded;
}

void encrypt() {

    string entryFile, exitFile;
    unsigned short n, method;

    cout << "Ingrese el nombre del archivo de entrada: " << endl;
    cin >> entryFile;

    cout << "Ingrese el nombre del archivo de salida: " << endl;
    cin >> exitFile;

    cout << "Ingrese la semilla (n): " << endl;
    cin >> n;

    cout << "Seleccione el metodo de codificacion (1 o 2): " << endl;
    cin >> method;

    // Leer el archivo de entrada y convertirlo a binario
    string content = readFile(entryFile);
    string binary = convertToBinary(content);

    string encodedBinary;

    if (method == 1) {
        encodedBinary = firstMethod(binary, n);
    } else if (method == 2) {
        encodedBinary = secondMethod(binary, n);
    }

    cout << encodedBinary << endl;

    // Guardar el archivo codificado en binario
    writeBinaryFile(exitFile, encodedBinary, false);

}


