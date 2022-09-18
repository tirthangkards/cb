#include<bits/stdc++.h>
using namespace std;



int main()
{
    
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int n_op;
    cin>>n_op;
    vector<int> op;
    for(int i=0; i<n_op; i++) {
        int x;
        cin>>x;
        op.push_back(x);
    }

    // Driver Code

    vector<int> ans;
    for(int i=0; i<op.size(); i++) {
        for(int j=0; j<arr.size(); j++) {
            int first=arr[j];
            int sec_index;
            if(j-op[i]<0) {
                sec_index=arr.size()+(j-op[i]);
            } else {
                sec_index=j-op[i];
            }
            int second=arr[sec_index];
            ans.push_back(first+second);
        }
        arr.clear();
        arr.assign(ans.begin(), ans.end());
        ans.clear();
    }
    int ans_main=0;  
    for(int i=0; i<arr.size(); i++) {
        ans_main=ans_main+arr[i];
    }
    cout<<ans_main;
    return 0;
}