#include <bits/stdc++.h>
using namespace std;

int main() {

	string str;
	cin>>str;

	int count=0;
	for(int i=0; i<str.length(); i++) {
		string comp1="";
		for(int j=i; j<str.length(); j++) {
			comp1+=str[j];
			string rev=comp1;
			reverse(rev.begin(), rev.end());
			if(comp1==rev){
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}