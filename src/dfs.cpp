#include "../includes/dfs.h"
#include "../includes/puzzleHelper.h"

string pathToString(queue<string> &path) {
    string str;
    
    while (!path.empty()) {
        str += path.front();
        path.pop();
    }

    return str;
}

string dfs(map<string, list<string>> &graph, string startNode) {
    set<string> seen;
    
    return dfs(graph, startNode, seen, PuzzleHelper::getPrefix(startNode));
}

string dfs(map<string, list<string>> &graph, string currentNode, set<string> &seen, string path) {    
    path += PuzzleHelper::getNotPrefix(currentNode);
    seen.insert(currentNode);

    string longestPath = path;

    for (string edge : graph[PuzzleHelper::getPostfix(currentNode)]) {
        if (seen.find(edge) != seen.end()) continue;

        string newPath = dfs(graph, edge, seen, path);

        if (longestPath.size() < newPath.size())longestPath = newPath;
    }
    seen.erase(currentNode);

    return longestPath;
}