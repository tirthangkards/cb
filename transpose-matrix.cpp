#include<iostream>
using namespace std;
int main () {

	int n;
	cin>>n;
	int matrix[n][n];
	int transpose[n][n];

	for(int row=0; row<n; row++) {
		for(int col=0; col<n; col++) {
			cin>>matrix[row][col];
		}
	}
	for(int row=0; row<n; row++) {
		for(int col=0; col<n; col++) {
			transpose[col][row]=matrix[row][col];
		}
	}
	for(int row=0; row<n; row++) {
		for(int col=0; col<n; col++) {
			cout<<transpose[row][col]<<" ";
		}
		cout<<endl;
	}
	return 0;
}