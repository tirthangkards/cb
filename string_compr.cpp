#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string str1;
    cin>>str1;
    string str2="";
    int size=str1.length();

    int count=1;
    char present=str1[0];

    for(int i=1; i<size; i++){
        if(str1[i]==present){
            count++;
        } else {
            str2.push_back(present);
			if(count>1){
				str2+=to_string(count);
			}
            present=str1[i];
            count=1;
        }
    }
    str2.push_back(present);
	if(count>1){
		str2+=to_string(count);
	}
    cout<<str2;
    return 0;
}