#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int rows;
    int cols;
    cin>>rows;
    cin>>cols;
    
    vector<int> v;
    int matrix[rows][cols];
    
    for(int row=0; row<rows; row++) {
        for(int col=0; col<cols; col++) {
            cin>>matrix[row][col];
        }
    }
    
    for(int row=0; row<rows; row++) {
        if(row%2==0) {
            for(int col=0; col<cols; col++) {
                v.push_back(matrix[row][col]);  
            }
        } else {
            for(int col=cols-1; col>=0; col--) {
                v.push_back(matrix[row][col]);
            }
        }
    }
    
    for(int num: v) {
        cout<<num<<", ";
    }
    cout<<"END";
    return 0;
}