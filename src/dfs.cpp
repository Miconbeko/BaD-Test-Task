#include "../includes/dfs.h"

string pathToString(queue<int> &path) {
    string str;
    
    while (!path.empty()) {
        str += to_string(path.front());
        path.pop();
    }

    return str;
}

string dfs(map<int, vector<int>> &graph, int currentNode, set<int> seen, queue<int> path) {
    path.push(currentNode);
    for (int edge : graph[currentNode]) {
        if (seen.find(edge) == seen.end()) {
            seen.insert(edge);

            return dfs(graph, edge, seen, path);
        }
    }

    return pathToString(path);
}