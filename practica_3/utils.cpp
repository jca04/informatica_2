#include "utils.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <bitset>

using namespace std;


string readFile(const string &fileName) {

    try {

        fstream file(fileName, ios::in | ios::binary);
        if (!file.is_open()) {
            throw runtime_error("Error: No se pudo abrir el archivo " + fileName);
        }

        stringstream buffer;
        buffer << file.rdbuf(); // Leer el contenido completo del archivo en el buffer
        file.close();

        return buffer.str();


    } catch (const fstream::failure &e) {
        cerr << "Error al leer el archivo: " << e.what() << endl;
    } catch (const runtime_error &e) {
        cerr << e.what() << endl;
        return "";
    } catch (const exception &e) {
        cerr << "Error inesperado: " << e.what() << endl;
        return "";
    }
}

string convertToBinary(const string &content) {
    string str_binary;

    for (char c : content) {
        bitset<8> binary(c);
        str_binary += binary.to_string();
    }

    return str_binary;
}

void writeBinaryFile(const string &exitFileName, const string &encodedBinary, bool clean = false) {
    fstream file;

       try {

            if (clean) {
               file.open(exitFileName, ios::out | ios::binary | ios::trunc); // sobreescribir el archivo
            } else {
               file.open(exitFileName, ios::out | ios:: binary | ios::app); // agregar el contenido al final del archivo
            }

            if (!file.is_open()) {
                throw runtime_error("Error al abrir el archivo: " + exitFileName);
            }

            for (size_t i = 0; i < encodedBinary.length(); i+=8) {
                string byteString = encodedBinary.substr(i, 8); // Tomar 8 caracteres de la cadena binaria

                char byte = static_cast<char>(stoi(byteString, nullptr, 2)); // cadena binaria a un numero base 2

                // Escribir el byte en el archivo
                file.write(&byte, sizeof(byte));
           }

        file.close();

   } catch (const runtime_error &e) {
        cerr << e.what() << endl;
   } catch (const exception &e) {
        cerr << "Error inesperado: " << e.what() << endl;
    }
}
