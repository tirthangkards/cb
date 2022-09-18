#include <bits/stdc++.h>
using namespace std;

int main() {

    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    int target;
    cin>>target;

    sort(arr, arr+size);

    for(int i=0; i<size; i++) {
        int itr1=i+1;
        int itr2=size-1;
        int first=arr[i];
        
        while(itr1<itr2) {

            int second=arr[itr1];
            int third=arr[itr2];
            
            if(first+second+third==target) {
                cout<<first<<", "<<second<<" and "<<third<<endl;
                itr1++;
            } else if(first+second+third<target) {
                itr1++;
            } else if(first+second+third>target) {
                itr2--;
            }
        }
    }

    return 0;
}