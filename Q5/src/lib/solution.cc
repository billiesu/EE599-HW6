#include "solution.h"
Graph::Graph(vector<vector<int>> &vertices): v_(vertices){

}
bool Graph::exist_path(const pair<int,int> &a, const pair<int,int> &b){
    if(v_.size() == 0){
        return false;
    }
    int s_row = a.first;
    int s_col = a.second;
    int e_row = b.first;
    int e_col = b.second;
    vector<vector<int>> visited(v_);
    return helper(s_row, s_col, e_row, e_col, visited);

}

bool Graph::helper(int s_row, int s_col, int e_row, int e_col, vector<vector<int>> &visited){
    if(s_row < 0 || s_row > visited.size() - 1 || s_col < 0 || s_col > visited[0].size() - 1){
        return false;
    }
    if(visited[s_row][s_col] == 0){
        return false;
    }
    if(s_row == e_row && s_col == e_col){
        return true;
    }
    visited[s_row][s_col] = 0;
    bool left = helper(s_row, s_col - 1, e_row, e_col, visited);
    bool right = helper(s_row, s_col + 1, e_row, e_col, visited);
    bool up = helper(s_row - 1, s_col, e_row, e_col, visited);
    bool down = helper(s_row + 1, s_col, e_row, e_col, visited);
    return left || right || up || down ? true : false;

}
