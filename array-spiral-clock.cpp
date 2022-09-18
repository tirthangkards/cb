#include <bits/stdc++.h>
using namespace std;

int main() {

    int rows;
    int cols;
    cin>>rows;
    cin>>cols;
    int matrix[rows][cols];

    for(int row=0; row<rows; row++) {
        for(int col=0; col<cols; col++) {
            cin>>matrix[row][col];
        }
    }

    int present=0;
    int total=rows*cols;
    vector<int> v;

    int start_row=0;
    int start_col=0;
    int end_row=rows-1;
    int end_col=cols-1;

    while(present<total) 
    {
        for(int index=start_col; present<total and index<=end_col; index++) {
            v.push_back(matrix[start_row][index]);
            present++;
        }
        start_row++;

        for(int index=start_row; present<total and index<=end_row; index++) {
            v.push_back(matrix[index][end_col]);
            present++;
        }
        end_col--;

        for(int index=end_col; present<total and index>=start_col; index--) {
            v.push_back(matrix[end_row][index]);
            present++;
        }
        end_row--;

        for(int index=end_row; present<total and index>=start_row; index--) {
            v.push_back(matrix[index][start_col]);
            present++;
        }
        start_col++;
    }

    for(int num: v) {
        cout<<num<<", ";
    }
    cout<<"END";
}   