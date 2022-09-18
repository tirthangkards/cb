#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<vector<int>> &ans) {
    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[i].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void create_visited(vector<vector<int>> &visited) {
    
    vector<int> row(3,0);
    for(int i=0; i<3; i++) {
        visited.push_back(row);
    }
}

void create_maze(vector<vector<int>> &maze) {
    
    vector<int> row(3,0);
    for(int i=0; i<3; i++) {
        maze.push_back(row);
    }
}

void solve(int y_axis, int x_axis, int n, vector<string> &ans, string move, vector<vector<int>> &visited) { 
    if(x_axis==n-1 and y_axis==n-1) {
        ans.push_back(move);
        return;
    }

    // For Down
    if(y_axis+1<n and visited[y_axis+1][x_axis]==0) {
        visited[y_axis][x_axis]=1;
        solve(y_axis+1,x_axis,n,ans,move+'D',visited);
        visited[y_axis][x_axis]=0;
    }

    // For Right
    if(x_axis+1<n and visited[y_axis][x_axis+1]==0) {
        visited[y_axis][x_axis]=1;
        solve(y_axis,x_axis+1,n,ans,move+'R',visited);
        visited[y_axis][x_axis]=0;
    }

    // Diognal (south-east)
    if(x_axis+1<n and y_axis+1<n and visited[y_axis+1][x_axis+1]==0) {
        visited[y_axis][x_axis]=1;
        solve(y_axis+1,x_axis+1,n,ans,move+'S',visited);
        visited[y_axis][x_axis]=0;
    }

    // For Left
    if(x_axis-1>0 and visited[y_axis][x_axis-1]==0) {
        visited[y_axis][x_axis]=1;
        solve(y_axis,x_axis-1,n,ans,move+'L',visited);
        visited[y_axis][x_axis]=0;
    }

    // For Up
    if(y_axis-1>0 and visited[y_axis-1][x_axis]==0) {
        visited[y_axis][x_axis]=1;
        solve(y_axis-1,x_axis,n,ans,move+'U',visited);
        visited[y_axis][x_axis]=0;
    }
}

int main() {

    vector<vector<int>> maze;
    vector<vector<int>> visited;
    vector<string> ans;

    create_maze(maze);
    create_visited(visited);

    solve(0,0,3,ans,"",visited); 
    print_vector(visited);
    cout<<endl; 
    for(string str: ans) {
        cout<<str<<endl;
    }

    return 0;
}