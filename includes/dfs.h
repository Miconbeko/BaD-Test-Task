#include <stdio.h>
#include <math.h>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <iostream>

using namespace std;

string pathToString(queue<int> &path);

string dfs(map<int, vector<int>> &graph, int currentNode, set<int> seen = {}, queue<int> pat = {});