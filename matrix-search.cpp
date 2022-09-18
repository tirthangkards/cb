#include <iostream>
#include<bits/stdc++.h>
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
    
    int target;
    cin>>target;
    bool flag=false;
    
    for(int row=0; row<rows; row++) {
        for(int col=0; col<cols; col++) {
            if(matrix[row][col]==target) {
                cout<<"1";
                flag=true;
            }
        }
    }
    if(flag==false) {
        cout<<"0";
    }
    
	return 0;
}
