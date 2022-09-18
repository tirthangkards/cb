#include<bits/stdc++.h>
using namespace std;

void print_ans(vector<string> &ans) {
    for(string str: ans) {
        cout<<str<<endl;
    }
}

void solve(int n, int open, int close, vector<string> &ans, string output) {
    if(open==close and open==n) {
        ans.push_back(output);
        return;
    }
    if(open<n) {
        output.push_back('(');
        solve(n,open+1,close,ans,output);
        output.pop_back();
    }
    if(close<open) {
        output.push_back(')');
        solve(n,open,close+1,ans,output);
        output.pop_back();
    }
}

int main() {

    int n;
    cin>>n;
    vector<string> ans;
    solve(n,0,0,ans,"");
    print_ans(ans);
    return 0;
}