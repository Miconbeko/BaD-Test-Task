#include "../includes/consoleReader.h"

void ConsoleReader::read() {
    stringstream ss(this->input);
    string line;
    char d = '\n';
    
    while(getline(ss, line, d))
        this->nodeList.push_back(line);
}