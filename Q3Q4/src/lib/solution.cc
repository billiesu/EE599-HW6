#include "solution.h"
Graph::Graph(map<int, set<int>> &vertices): v_(vertices){

}
vector<int> Graph::dfs(int root) {
    vector<int> res;
    int v_num = v_.size();
    vector<bool> visited(v_num, false);
    dfs_helper(root, visited, res);
    for(auto i: v_){
        if(!visited[i.first]){
          dfs_helper(i.first, visited, res);
        }
    }
    return res;
}
void Graph::dfs_helper(int root, vector<bool>& visited, vector<int> &res){
    stack<int> s;
    // Initialize stack
    s.push(root);
    // Do dfs
    while (!s.empty()) {
        int top = s.top();
        // cout<< top << endl;
        if(visited[top]){
            s.pop();
            continue;
        }
        s.pop();
        res.push_back(top);
        visited[top] = true;
        for(auto it: v_.at(top)){
            if(!visited[it]){
                s.push(it);
            }
        } 
    }    
}

void Graph::print_vec(const vector<int> &res){
    cout << "res:{";
    for(int i = 0; i < res.size(); i++){
        cout << res[i];
        if(i < res.size() - 1){
            cout << ',';
        }
    }
    cout << "}" << endl;
}
vector<int> Graph::dfs_all(){
    vector<int> res;
    int v_num = v_.size();
    vector<bool> visited(v_num, false);
    for(auto it: v_){
        if(!visited[it.first]){
            visited[it.first] = true;
            res.push_back(it.first);
            dfs_all_helper(it.first, visited, res);
            // cout<< "begin:" << it.first << endl;
        }
    }
    return res;
}

void Graph::dfs_all_helper(int root, vector<bool>& visited, vector<int> &res) {
    for(auto it: v_.at(root)){
        if(!visited[it]){
            visited[it] = true;
            res.push_back(it);
            dfs_all_helper(it, visited, res);
        }
    }                    
}



