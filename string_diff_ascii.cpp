#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	string str;
	cin>>str;

	cout<<str[0];
	for(int i=1; i<str.length(); i++) {
		int num;
		int a=str[i];
		int b=str[i-1];
		num=a-b;
		cout<<num;
		cout<<str[i];
	}
	return 0;
}