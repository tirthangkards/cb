#include<bits/stdc++.h>
using namespace std;

void print_matrix(vector<vector<int>> matrix) {
    for(int i=0; i<matrix.size(); i++) {
        for (int j=0; j<matrix[i].size(); j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void create_maze(vector<vector<char>> &maze, int row, int col) {
    
    for(int i=0; i<row; i++) {
        vector<char> row;
        for(int j=0; j<col; j++) {
            char x;
            cin>>x;
            row.push_back(x);
        }
        maze.push_back(row);
        row.clear();
    }
}

void create_visited(vector<vector<int>> &visited, int row, int col) {
    for(int i=0; i<row; i++) {
        vector<int> row;
        for(int j=0; j<col; j++) {
            row.push_back(0);
        }
        visited.push_back(row);
        row.clear();
    }
}

bool solve(int row_cur, int col_cur, int row, int col, vector<vector<char>> &maze, vector<vector<int>> &visited) {
    if(row_cur==row-1 and col_cur==col-1) {
		visited[row-1][col-1]=1;
        return true;
    } 
    // Downward
    if(maze[row_cur][col_cur+1]=='O' and col_cur<col-1) {
        visited[row_cur][col_cur]=1;
        if(solve(row_cur, col_cur+1,row,col,maze,visited)) {
            return true;
        } else {
            visited[row_cur][col_cur]=0;
        }

    }   
    //Rightward
    if(maze[row_cur+1][col_cur]=='O' and row_cur<row-1) {
        visited[row_cur][col_cur]=1;
        if(solve(row_cur+1,col_cur,row,col,maze,visited)) {
            return true;
        } else {
            visited[row_cur][col_cur]=0;
        }
    }
	// For Up
    if(maze[row_cur][col_cur-1]=='O' and col_cur-1>0 and col_cur<col-1) {
        visited[row_cur][col_cur]=1;
        if(solve(row_cur, col_cur-1,row,col,maze,visited)) {
            return true;
        } else {
            visited[row_cur][col_cur]=0;
        }
    }  
	//Left
	if(maze[row_cur-1][col_cur]=='O' and row_cur-1>0 and row_cur<row-1) {
        visited[row_cur][col_cur]=1;
        if(solve(row_cur-1,col_cur,row,col,maze,visited)) {
            return true;
        } else {
            visited[row_cur][col_cur]=0;
        }
    }
    return false;

}

int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int row;
    int col;
    cin>>row;
    cin>>col;
    vector<vector<char>> maze;
    vector<vector<int>> visited;
    create_maze(maze,row,col);
    create_visited(visited, row, col);
    solve(0,0,row,col,maze,visited);
	if(solve(0,0,row,col,maze,visited)==false) {
		cout<<"NO PATH FOUND";
	} else {
		print_matrix(visited); 
	} 

    return 0;

}