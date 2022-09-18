#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    cin>>str;

    cout<<str[0];
    for(int i=1; i<str.length(); i++) {
        if(isupper(str[i])){
            cout<<endl;
        }
        cout<<str[i];
    }
	return 0;
}
