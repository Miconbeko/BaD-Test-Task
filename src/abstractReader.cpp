#include "../includes/abstractReader.h"

bool AbstractReader::compare(int a, int b) {
    int aKey = a %= 100;
    int bKey = 0;

    for (; b / 10 != 0; b /= 10) {
        bKey = b % 100;
    }

    return aKey == bKey;
}

map<int, vector<int>> AbstractReader::toMap() {
    map<int, vector<int>> graph;

    this->read();

    nodeList.push_back(208460);
    nodeList.push_back(608017);
    nodeList.push_back(177092);

    for (int key : nodeList) {
        vector<int> values;

        for (int value : nodeList) {
            if (key == value) continue;
            if (!compare(key, value)) continue;

            values.push_back(value);
        }

        graph.insert({key, values});
    }

    return graph;
}