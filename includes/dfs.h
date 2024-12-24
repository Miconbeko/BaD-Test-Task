#ifndef _DFS_
#define _DFS_

#include <string>
#include <set>
#include <map>
#include <list>

using namespace std;

string dfs(map<string, list<string>> &graph, string currentNode);

string dfs(map<string, list<string>> &graph, string currentNode, set<string> &seen);

#endif