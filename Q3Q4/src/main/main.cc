#include "src/lib/solution.h"


int main() {

    vector<int> res;
    map<int, set<int>> vertices{
        {0,{1,2,5}},
        {1,{0,2,3}},
        {2,{0,1,3}},
        {3,{2,4,6}},
        {4,{3,6}},
        {5,{0}},
        {6,{3,4}}
    };
    map<int, set<int>> directed_v{
        {0,{1}},
        {1,{3,2}},
        {2,{0}},
        {3,{2,4,6}},
        {4,{}},
        {5,{6}},
        {6,{}}
    };    
    Graph g(vertices);
    Graph directed_g(directed_v);
    vector<int> undirected_vec = g.dfs(3);
    g.print_vec(undirected_vec);
    vector<int> directed_vec = directed_g.dfs_all();
    directed_g.print_vec(directed_vec);

    return 0;
}