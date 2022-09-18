#include<bits/stdc++.h>
using namespace std;



int main() {
    
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int tc;
    cin>>tc;

    while(tc--) {
        int size;
        cin>>size;
        vector<int> structure;
        
        for(int i=0; i<size; i++) {
            int x;
            cin>>x;
            structure.push_back(x);
        }

        vector<int> str_left;
        vector<int> str_right;
        int ans=0;
        
        int ele_l=structure[0];
        int ele_r=structure[size-1];
        for(int i=0; i<structure.size(); i++) {
            str_left.push_back(max(ele_l,structure[i]));
            ele_l=max(ele_l,structure[i]);
        }
        for(int i=size-1; i>=0; i--) {
            str_right.push_back(max(ele_r,structure[i]));
            ele_r=max(ele_r,structure[i]);
        }
        reverse(str_right.begin(), str_right.end());
        for(int i=0; i<size; i++) {
            ans+=min(str_left[i],str_right[i])-structure[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}