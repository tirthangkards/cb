#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void odd(int n, int temp_n){
	if(n<=0){
		for(int i=n+1; i<=temp_n; i++) {
			if(i%2==0){
				cout<<i<<endl;
			}
		}
		return;
	} else {
		if(n%2!=0){
			cout<<n<<endl;
		}
		odd(n-1,temp_n);
	}
}

int main() {

	int n;
	cin>>n;
	odd(n,n);
	return 0;
}