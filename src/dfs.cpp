#include "../includes/dfs.h"

string pathToString(queue<string> &path) {
    string str;
    
    while (!path.empty()) {
        str += path.front();
        path.pop();
    }

    return str;
}

string dfs(map<string, vector<string>> &graph, string startNode) {    
    set<string> seen = {startNode};
    deque<string> path({startNode});
    stack<deque<string>> stack({path});

    while (!stack.empty()) {
        
    }
}