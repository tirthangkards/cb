#include<bits/stdc++.h>
using namespace std;



int main()
{
    
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


    string str;
    cin>>str;

    int count=0;
    char c=str[0];
    map<char,int> m;

    for(int i=0; i<str.length()+1; i++) {
        if(str[i]==c) {
            count++;
        } else {
            m.insert(pair(c,count));
            c=str[i];
            count=1;
        }
    }
    for(auto itr=m.begin(); itr!=m.end(); itr++) {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}