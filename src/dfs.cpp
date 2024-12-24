#include "../includes/dfs.h"
#include "../includes/puzzleHelper.h"

string dfs(map<string, list<string>> &graph, string startNode) {
    set<string> seen;
    
    return PuzzleHelper::getPrefix(startNode) + dfs(graph, startNode, seen);
}

string dfs(map<string, list<string>> &graph, string currentNode, set<string> &seen) {    
    seen.insert(currentNode);

    string longestPath = "";

    for (string edge : graph[PuzzleHelper::getPostfix(currentNode)]) {
        if (seen.find(edge) != seen.end()) continue;

        string newPath = dfs(graph, edge, seen);

        if (longestPath.size() < newPath.size()) longestPath = newPath;
    }
    seen.erase(currentNode);

    return PuzzleHelper::getNotPrefix(currentNode) + longestPath;
}