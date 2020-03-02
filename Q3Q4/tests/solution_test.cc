#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(Non_recursive_dfsShould1, ReturnDfsVec){
  map<int, set<int>> vertices{
      {0,{1,2,5}},
      {1,{0,2,3}},
      {2,{0,1,3}},
      {3,{2,4,6}},
      {4,{3,6}},
      {5,{0}},
      {6,{3,4}}
  };  
  Graph g(vertices);
  vector<int> actual = g.dfs(0);
  vector<int> expected = {0,5,2,3,6,4,1};
  EXPECT_EQ(expected, actual);
}

TEST(Non_recursive_dfsShould2, ReturnDfsVec){
  map<int, set<int>> vertices{
      {0,{1,2,5}},
      {1,{0,2,3}},
      {2,{0,1,3}},
      {3,{2,4,6}},
      {4,{3,6}},
      {5,{0}},
      {6,{3,4}}
  };  
  Graph g(vertices);
  vector<int> actual = g.dfs(3);
  vector<int> expected = {3,6,4,2,1,0,5};
  EXPECT_EQ(expected, actual);
}

TEST(DFS_AllShould, ReturnDfsVec){
  map<int, set<int>> vertices{
      {0,{1}},
      {1,{3,2}},
      {2,{0}},
      {3,{2,4,6}},
      {4,{}},
      {5,{6}},
      {6,{}}
  };  
  Graph directed_g(vertices);
  vector<int> actual = directed_g.dfs_all();
  vector<int> expected = {0,1,2,3,4,6,5};
  EXPECT_EQ(expected, actual);
}

