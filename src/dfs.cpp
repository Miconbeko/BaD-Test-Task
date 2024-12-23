#include "../includes/dfs.h"

string pathToString(queue<string> &path) {
    string str;
    
    while (!path.empty()) {
        str += path.front();
        path.pop();
    }

    return str;
}

string dfs(map<string, vector<string>> &graph, string currentNode, set<string> seen, queue<string> path) {    
    path.push(currentNode);
    seen.insert(currentNode);

    for (string edge : graph[currentNode]) {
        if (seen.find(edge) == seen.end())
            return dfs(graph, edge, seen, path);
    }

    return pathToString(path);
}