#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(PattitionShould1, ChangeSquence){
  Solution solution;
  int input[] = {9,7,5,6,12,2,14,3,10,11};
  int size = sizeof(input) / sizeof(input[0]);
  solution.Partition(input, 3, size);
  vector<int> expected = {5,2,3,6,12,7,14,9,10,11};
  vector<int> actual;
  for(int i = 0; i < size; i++){
    actual.push_back(input[i]);
  }
  EXPECT_EQ(expected, actual);
}

TEST(PattitionShould2, ChangeSquence){
  Solution solution;
  int input[] = {9,7,5,6,12,2,14,3,10,11};
  int size = sizeof(input) / sizeof(input[0]);
  solution.Partition(input, 2, size);
  vector<int> expected = {2,3,5,6,12,9,14,7,10,11};
  vector<int> actual;
  for(int i = 0; i < size; i++){
    actual.push_back(input[i]);
  }
  EXPECT_EQ(expected, actual);
}