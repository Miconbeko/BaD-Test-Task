#include "../includes/abstractReader.h"
#include "../includes/puzzleHelper.h"

map<string, list<string>> AbstractReader::toMap() {
    map<string, list<string>> graph;

    this->read();    

    for (string node : nodeList) {
        graph.insert({PuzzleHelper::getPrefix(node), {}});
        graph.at(PuzzleHelper::getPrefix(node)).push_back(node);
    }

    // for (map<string, list<string>>::iterator it = graph.begin(); it != graph.end(); it++) {
    //     cout << it->first << endl;
    //     for (string value : graph[it->first]) {
    //         cout << " " << value << endl;
    //     }
    // }

    return graph;
}