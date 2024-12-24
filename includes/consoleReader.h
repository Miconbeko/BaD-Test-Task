#ifndef _CSL_READER_
#define _CSL_READER_

#include "abstractReader.h"
#include <sstream>

using namespace std;

class ConsoleReader : public AbstractReader {
    protected:
        void read();
    public:
        ConsoleReader(string input) : AbstractReader(input) {};
};

#endif