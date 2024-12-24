#include "../includes/fileReader.h"
#include "../includes/consoleReader.h"
#include "../includes/dfs.h"

#include <string.h>
#include <istream>

using namespace std;

void fileOutput(string result, string filePath = "output.txt") {
    ofstream of(filePath);

    if (!of.is_open()) {
        cout << "Failed to open a file '" << filePath << "'." << endl;
        return;
    }

    of << result << endl;

    of.close();
}

int main(int argc, char* argv[]) {
    if (argc == 1 || (argc > 1 && strcmp(argv[1], "help") == 0)) {
        cout << "Usage:" << endl;
        cout << argv[0] << " [command]" << endl << endl;

        cout << "Avaliable commands:" << endl;

        cout << "\t" << argv[0] << " console" << endl;
        cout << "\t\tRead puzzle pieces from console, separated by ENTER. To stop enter '-'" << endl << endl;

        cout << "\t" << argv[0] << " file <FILE_PATH>" << endl;
        cout << "\t\tRead puzzle pieces from the file in FILE_PATH, separated by ENTER. Make sure that there is no whitespace at the end" << endl << endl;
    }

    map<string, list<string>> graph;
    AbstractReader *reader = NULL;

    if (strcmp(argv[1], "console") == 0) {
        string input;

        cout << "Enter puzzle pieces, separated by ENTER. Write '-' to stop." << endl;
        getline(cin, input, '-');
        reader = new ConsoleReader(input);
    }

    if (strcmp(argv[1], "file") == 0) {
        if (argc < 3) {
            cout << "Enter file path as next command after 'file'. See '" << argv[0] << " help'" << endl;
            return 1;
        }

        reader = new FileReader(argv[2]);
    }

    graph = reader->toMap();

    string maxPath = "";
    int count = 1, nodeListSize = reader->getNodeList().size();

    for (string node : reader->getNodeList()) {
        cout << "Processing node: " << count << "/" << nodeListSize << endl;

        string path = dfs(graph, node);
        
        count++;
        if (maxPath.length() < path.length())
            maxPath = path;
    }
    
    cout << endl << "The longest sequence of puzzle pieces: " << endl << maxPath << endl << "Length: " << maxPath.length() << endl;;

    fileOutput(maxPath);

    return 0;
}