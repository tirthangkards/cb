#include<bits/stdc++.h>
using namespace std;

int aa(string s)
{
    int n=s.length();
    if(n==1) {
        return s[0]-'0';
    }
    return (s[0]-'0')*pow(10,n-1)+aa(s.substr(1));

}

int main() {
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    cout<<aa("123");
    
    return 0;
}