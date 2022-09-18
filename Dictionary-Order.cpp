#include<bits/stdc++.h>
using namespace std;
bool my_compare(string a, string b)
{
    if (a.compare(0,b.size(),b)==0 || b.compare(0,a.size(),a)==0) {
        return a.size() > b.size();
    } else {
        return a < b;
    }
}

void solve(vector<string> &ans, string str, int index) {
    if(index>=str.length()) {
        ans.push_back(str);
    }
    for(int i=index; i<str.length(); i++) {
        swap(str[index], str[i]);
        solve(ans,str,index+1);
        swap(str[index], str[i]);
    }
}

int main() {
    vector<string> ans;
    string str="cab";
    solve(ans,str,0);
    sort(ans.begin(), ans.end());
    cout<<ans[0];
    return 0;
}