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

    map<int, vector<int>> graph = cr.toMap();

    for (map<int, vector<int>>::iterator it = graph.begin(); it != graph.end(); it++) {
        string res = dfs(graph, it->first);
        cout << res << endl;
    }

    return 0;
}