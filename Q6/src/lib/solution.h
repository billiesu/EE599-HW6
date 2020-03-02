#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

using std::vector;

class Solution {
public:
  void Partition(int input[], int pivot, int size);
  void Swap(int& a, int& b);
  void print_array(int input[], int size);
};

#endif