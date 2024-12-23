#include "../includes/dfs.h"

string pathToString(queue<string> &path) {
    string str;
    
    while (!path.empty()) {
        str += path.front();
        path.pop();
    }

    return str;
}

string dfs(map<string, vector<string>> &graph, string currentNode, set<string> seen, string path) {    
    path += currentNode;
    seen.insert(currentNode);

    string longestPath = path;

    for (string edge : graph[currentNode]) {
        // cout << currentNode << " " << edge << endl;
        if (seen.find(edge) == seen.end()) {
            string res = dfs(graph, edge, seen, path);

            if (longestPath.size() < res.size())
                longestPath = res;
        }
    }

    return longestPath;
}