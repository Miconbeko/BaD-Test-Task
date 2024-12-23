#include <iostream>
#include <string.h>
#include <iterator>
#include "../includes/consoleReader.h"
#include "../includes/dfs.h"

using namespace std;

string foo(string &a) {
    a = "world";

    return a;
}

int main() {
    string input;

    getline(cin, input, '-');

    ConsoleReader cr(input);

    map<string, vector<string>> graph = cr.toMap();

    for (map<string, vector<string>>::iterator it = graph.begin(); it != graph.end(); it++) {
        string res = dfs(graph, it->first);
        cout << res << endl << endl;
    }

    return 0;
}