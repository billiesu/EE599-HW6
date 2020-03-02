#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H


#include <vector>
#include <utility>
#include <iostream>


using std::vector;
using std::pair;
using std::cout;
using std::endl;

class Graph {
public:
  Graph(vector<vector<int>> &vertices);
  bool exist_path(const pair<int,int> &a, const pair<int,int> &b);
  bool helper(int s_row, int s_col, int e_row, int e_col, vector<vector<int>> &visited);
  vector<vector<int>> v_;
};

#endif