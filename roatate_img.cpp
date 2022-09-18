#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int matrix[n][n];
    int matrix2[n][n];

    for(int row=0; row<n; row++) {
        for(int col=0; col<n; col++) {
            cin>>matrix[row][col];
        }
    }
    int r1=0;
    int c1=0;
    for(int row=n-1; row>=0; row--) {
        for(int col=0; col<n; col++) {
            matrix2[row][col]=matrix[r1][c1];
            r1++;
        }
        r1=0;
        c1++;
    }
    c1=0;

    cout<<endl;
    for(int row=0; row<n; row++) {
        for(int col=0; col<n; col++) {
            cout<<matrix2[row][col]<<" ";
        }
        cout<<endl;
    }
}