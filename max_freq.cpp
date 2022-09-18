#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    cin>>str;
    int max=0;
    char char_max;

    map<char,int> m;
    
    for(int i=0; i<str.length(); i++){
        m[str[i]]++;
    }
    map<char,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++) {
        if(itr->second>max){
            max=itr->second;
            char_max=itr->first;
        }
    }
    cout<<char_max;
    
	return 0;
}
