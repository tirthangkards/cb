#include<bits/stdc++.h>
using namespace std;



int main()
{
    
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int tc;
    cin>>tc;

    while(tc--) 
    {
        int size;
        cin>>size;

        vector<int> v;
        for(int i=0; i<size; i++) {
            int x;
            cin>>x;
            v.push_back(x);
        }

        int index1;
        for(int i=size-1; i>=0; i--) {
            if(v[i]>v[i-1]) {
                index1=i;
            }
        }
    }

    return 0;
}