#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H


#include <vector>
#include <iostream>
#include <stack>
#include <map>
#include <set>

using namespace std;

class Graph {
public:
  Graph(map<int, set<int>> &vertices);
  vector<int> dfs(int root);
  vector<int> dfs_all();
  void print_vec(const vector<int> &res);
private:
  void dfs_helper(int root, vector<bool>& visited, vector<int> &res);
  void dfs_all_helper(int root, vector<bool>& visited, vector<int> &res);
  map<int, set<int>> v_;
};

#endif