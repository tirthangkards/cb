#include<bits/stdc++.h>
using namespace std;

void solve(string output, vector<string> &ans, int index, int n, string str) {
    if(index>=n) {
        ans.push_back(output);
        return;
    }
    solve(output,ans,index+1,n,str);
    output.push_back(str[index]);
    solve(output,ans,index+1,n,str);
    output.pop_back();
}
int main() {
    string str;
    cin>>str;
    vector<string> ans;
    solve("",ans,0,str.length(),str);
    // sort(ans.begin(),ans.end());
    for(string str: ans) {
        cout<<str<<endl;
    }
    cout<<ans.size();
    return 0;
}