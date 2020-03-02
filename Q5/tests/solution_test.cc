#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Exist_pathShould1, ReturnFalse){
  vector<vector<int>> input{
      {1,1,0,0,0},
      {1,1,1,1,1},
      {0,1,0,0,1},
      {1,0,0,0,0},
      {1,1,1,1,1}
  }; 
  Graph maze(input);
  pair<int, int> a(0,0);
  pair<int, int> b(4,0);
  bool actual = maze.exist_path(a, b);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(Exist_pathShould2, ReturnFalse){
  vector<vector<int>> input{
  }; 
  Graph maze(input);
  pair<int, int> a(0,0);
  pair<int, int> b(4,0);
  bool actual = maze.exist_path(a, b);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(Exist_pathShould3, ReturnTrue){
  vector<vector<int>> input{
      {1,1,0,0,0},
      {1,1,1,1,1},
      {0,1,0,0,1},
      {1,1,0,0,0},
      {1,1,1,1,1}
  }; 
  Graph maze(input);
  pair<int, int> a(0,0);
  pair<int, int> b(4,4);
  bool actual = maze.exist_path(a, b);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}
