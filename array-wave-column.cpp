#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int rows;
	int cols;
	cin>>rows;
	cin>>cols;
	
	int matrix[rows][cols];
	vector<int> v;
	for(int row=0; row<rows; row++) {
	    for(int col=0; col<cols; col++) {
	        cin>>matrix[row][col];
	    }
	}
	
	for(int col=0; col<cols; col++) {
	    if(col%2==0) {
	        for(int row=0; row<rows; row++) {
	            v.push_back(matrix[row][col]);
	        }
	    } else {
	        for(int row=rows-1; row>=0; row--) {
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
