#include "../includes/abstractReader.h"

bool AbstractReader::compare(string a, string b) {
    return a.substr(0, 2) == b.substr(b.length() - 2);
}

map<string, vector<string>> AbstractReader::toMap() {
    map<string, vector<string>> graph;

    this->read();    

    for (string key : nodeList) {
        vector<string> values;

        for (string value : nodeList) {
            if (key == value) continue;
            if (!compare(key, value)) continue;

            values.push_back(value);
        }

        graph.insert({key, values});
    }

    return graph;
}