#include "src/lib/solution.h"


int main() {
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
    bool res = maze.exist_path(a, b);
    cout << res << endl;
    return 0;
}