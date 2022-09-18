#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> temp) {
    for(int i=0; i<temp.size(); i++) {
        for(int j=0; j<temp[i].size(); j++) {
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}

void print_ans(vector<string> temp) {
    for(string str: temp) {
        cout<<str<<endl;
    }
}

void solve(int x_axis, int y_axis, int n1, int n2, string move, vector<string> &ans, vector<vector<int>> visited) {

    if(x_axis==n2 and y_axis==n1) {
        ans.push_back(move);
        return;
    }
    // Vertical Move
    if(x_axis+1<n2 and visited[x_axis+1][y_axis]==0) {
        solve(x_axis+1,y_axis,n1,n2,move+"V",ans,visited);
        visited[x_axis][y_axis]==1;
    }
    //  Horizontal Move
    if(y_axis+1<n1 and visited[x_axis][y_axis+1]==0) {
        solve(x_axis,y_axis+1,n1,n2,move+"H",ans,visited);
        visited[x_axis][y_axis]==1;
    }
    // Diagonal Move
    if(x_axis+1<n2 and y_axis<n1 and visited[x_axis+1][y_axis+1]==0) {
        solve(x_axis+1,y_axis+1,n1,n2,move+"D",ans,visited);
        visited[x_axis][y_axis]==1;
    }    
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n1;
    cin>>n1;
    int n2;
    cin>>n2;

    vector<int> row(n2,0);
    vector<vector<int>> visited;
    for(int i=0; i<n1; i++) {
        visited.push_back(row);
    }
    vector<string> ans;
    print(visited);
    solve(0,0,n1,n2,"",ans,visited);
    print_ans(ans);
    cout<<ans.size()<<endl;

    return 0;
}