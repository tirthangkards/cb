#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int cows, int mid) {
    int cow_count=1;
    int pos_cow=arr[0];

    for(int i=0; i<arr.size(); i++) {
        if(arr[i]-pos_cow>=mid) {
            cow_count++;
            pos_cow=arr[i];
            if(cow_count==cows) {
                return true;
            }
        }
    }
    return false;
}

int main() {

    int min_dist;
    cin>>min_dist;
    int cows;
    cin>>cows;

    vector<int> stalls;

    for(int i=0; i<min_dist; i++) {
        int n;
        cin>>n;
        stalls.push_back(n);
    }   
    sort(stalls.begin(), stalls.end());
    int start=stalls[0];
    int end=*max_element(stalls.begin(), stalls.end())-start;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end)
    {
        if(isPossible(stalls,cows,mid)) {
            ans=mid;
            start=mid+1;
        } else {
            end=mid-1;
        }
        mid=(start+end)/2; 
    }
    cout<<ans<<endl;
    return 0;
}