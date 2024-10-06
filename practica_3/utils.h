#ifndef UTILS_H
#define UTILS_H
#include "string"

using namespace std;

string readFile(const string &fileName);
string convertToBinary(const string &content);
void writeBinaryFile(const string &exitFileName, const string &encodedBinary, bool clean);

#endif // UTILS_H
