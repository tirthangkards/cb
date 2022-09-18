#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	string str;
	cin>>str;
	int len=str.length();

	for(int i=0; i<len; i++){
		if(islower(str[i])) {
			str[i]=toupper(str[i]);
		} else {
			str[i]=tolower(str[i]);
		}
	}
	cout<<str;
	return 0;
}