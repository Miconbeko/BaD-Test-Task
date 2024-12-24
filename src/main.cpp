#include <iostream>
#include <string.h>
#include <iterator>
#include "../includes/consoleReader.h"
#include "../includes/dfs.h"

using namespace std;

int main() {
    string input;

    getline(cin, input, '-');

    ConsoleReader cr(input);
    map<string, list<string>> graph = cr.toMap();
    string maxRes = "";

    for (string node : cr.getNodeList()) {
        string res = dfs(graph, node);

        cout << res << endl;
        if (maxRes.length() < res.length())
            maxRes = res;
    }

    cout << maxRes << endl << "size: " << maxRes.length();

    return 0;
}