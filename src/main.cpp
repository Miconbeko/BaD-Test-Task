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
    string maxPath = "";
    int count = 1, nodeListSize = cr.getNodeList().size();

    for (string node : cr.getNodeList()) {
        cout << "Processing node: " << count << "/" << nodeListSize << endl;

        string path = dfs(graph, node);
        
        count++;
        if (maxPath.length() < path.length())
            maxPath = path;
    }

    cout << "The longest sequence of puzzle pieces: " << endl << maxPath << endl << "char length: " << maxPath.length() << endl;;

    return 0;
}