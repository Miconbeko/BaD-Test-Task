#include <stdio.h>
#include <math.h>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <iostream>

using namespace std;

string pathToString(queue<string> &path);

string dfs(map<string, list<string>> &graph, string currentNode);

string dfs(map<string, list<string>> &graph, string currentNode, set<string> &seen, string path = "");