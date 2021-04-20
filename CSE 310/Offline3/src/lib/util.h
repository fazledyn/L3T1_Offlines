#include "bits/stdc++.h"
using namespace std;


void printLog(FILE* file, string rule, string token, int lineCount)
{
    fprintf(file, "At line no: %d %s", lineCount, rule.c_str());
    fprintf(file, "\n\n%s\n\n", token.c_str());
}


void printError(FILE* file, string errorText, int lineCount) {
    fprintf(file, "Error at line %d: %s\n\n", lineCount, errorText.c_str());
}

vector<string> splitString(string line) {

    stringstream ss(line);
    vector<string> tokens;
    string intermediate;

    while(getline(ss, intermediate, ',')) {
        tokens.push_back(intermediate);
    }
    return tokens;
}

bool isArray(string line) {
    if ((line.find("[") != string::npos) || (line.find("]") != string::npos)) {
        return true;
    }
    return false;
}

string extractArrayName(string line) {
    
    stringstream ss(line);
    string arrayName;

    getline(ss, arrayName, '[');
    return arrayName;
}

int extractArraySize(string line) {

    stringstream ss(line);
    string token;

    while (getline(ss, token, '[')) {
        // 
    }

    stringstream ss2(token);
    getline(ss2, token, ']');

    return stoi(token);
}