#include "../includes/fileReader.h"

void FileReader::read() {
    ifstream f(this->input);

    if (!f.is_open()) {
        cerr << "File opening error." << endl;
        return;
    }

    string line;
    char d = '\n';
    
    while(getline(f, line, d))
        this->nodeList.push_back(line);

    if (getline(f, line))
        this->nodeList.push_back(line);
}