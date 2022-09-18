    #include<bits/stdc++.h>
    using namespace std;

    bool isValid(int row, int col, int num, vector<vector<int>> &board) {
        for(int i=0; i<board.size(); i++) {
            if(board[i][col]==num) {
                return false;
            }
            if(board[row][i]==num) {
                return false;
            }
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==num) {
                return false;
            }
        }   
        return true;
    }

    bool solve(vector<vector<int>> &board) {
        for(int col=0; col<board.size(); col++) {
            for(int row=0; row<board.size(); row++) {
                if(board[row][col]==0) {
                    for(int num=1; num<=9; num++) {
                        if(isValid(row,col,num,board)) {
                            board[row][col]=num;
                            if(solve(board)==true)     {
                                return true;
                            } else {
                                board[row][col]=0;
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
        
    }

    int main()
    {
        
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif              
        
        int n;
        cin>>n;
        vector<vector<int>> board;

        for(int i=0; i<n; i++) {
            vector<int> row;
            for(int j=0; j<n; j++) {
                int x;
                cin>>x;
                row.push_back(x);
            }
            board.push_back(row);
            row.clear();
        }
        solve(board);
        for(int i=0; i<board.size(); i++) {
            for(int j=0; j<board[i].size(); j++) {
                cout<<board[i][j]<<" ";
            }   
            cout<<endl; 
        }
        
        return 0;
    }