#ifndef _FL_READER_
#define _FL_READER_

#include "abstractReader.h"
#include <fstream>

using namespace std;

class FileReader : public AbstractReader {
    protected:
        void read();
    public:
        FileReader(string input) : AbstractReader(input) {}
};

#endif