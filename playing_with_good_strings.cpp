#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin>>str;
	int max_count=0;
	int count=0;

	for(int i=0; i<str.length(); i++) {
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
			count++;
			max_count=max(count,max_count);
		} else {
			count=0;
		}
	}
	cout<<max_count;
}