#include "includes/dfs.h"

string pathToString(queue<int> &path) {
    string str;
    
    for (int node = path.front(); path.empty() == false; path.pop()) {
        str += node;
    }

    return str;
}

string dfs(map<int, vector<int>> &graph, int currentNode, set<int> seen, queue<int> path) {
    for (int edge : graph[currentNode]) {
        if (seen.find(edge) != seen.end()) {
            seen.insert(edge);
            path.push(edge);

            return dfs(graph, edge, seen, path);
        }
    }

    return pathToString(path);
}