#include "abstractReader.h"
#include <sstream>
#include <iostream>

using namespace std;

class ConsoleReader : public AbstractReader {
    public:
        ConsoleReader(string input) : AbstractReader(input) {};
        void read();
        map<int, vector<int>> toMap(); 
};