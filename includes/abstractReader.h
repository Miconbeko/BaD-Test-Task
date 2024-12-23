#include <string>
#include <map>
#include <vector>

using namespace std;

class AbstractReader {
    protected: 
        string input;
        vector<int> arr;

    public:
        AbstractReader(string input) { this->input = input; };
        virtual void read() = 0;
        virtual map<int, vector<int>> toMap() = 0; 
};