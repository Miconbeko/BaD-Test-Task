#include <string>
#include <map>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

class AbstractReader {
    protected: 
        string input;
        list<int> nodeList;
        
        bool compare(int a, int b);
        virtual void read() = 0;

    public:
        AbstractReader(string input) { this->input = input; };
        map<int, vector<int>> toMap(); 
};