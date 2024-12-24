#include <string>

using namespace std;

const short PREFIX_LENGTH = 2;

class PuzzleHelper {
    public:
        static string getPrefix(string &str) { return str.substr(0, PREFIX_LENGTH); };
        static string getPostfix(string &str) { return str.substr(str.length() - PREFIX_LENGTH); };
        static string getNotPrefix(string &str) { return str.substr(PREFIX_LENGTH); }
};