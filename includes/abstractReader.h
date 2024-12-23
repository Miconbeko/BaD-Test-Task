#include <string>
#include <map>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

class AbstractReader {
    protected: 
        string input;
        list<string> nodeList;
        
        bool compare(string a, string b);
        virtual void read() = 0;

    public:
        AbstractReader(string input) { this->input = input; };
        map<string, vector<string>> toMap(); 
};