#include <bits/stdc++.h>
using namespace std;

int main() {

    int size;
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    int tc;
    cin>>tc;

    int ans[size];
    int opp[tc];
    for(int i=0; i<tc; i++) {
        cin>>opp[i];
    }

    for(int j=0; j<tc; j++) {

        for(int i=0; i<size; i++) {
            int check=i-opp[j];
            int second;
            if(check<0) {
                second=size+check;
            } else {
                second=check;
            }
            ans[i]=arr[second]+arr[i];
        }
        for(int i=0; i<size; i++) {
            arr[i]=ans[i];
        }
    }
    int temp=0;
    int mult=pow(10,9)+7;
    for(int num:arr) {
        temp+=num;
    }
    int final=temp % mult;
    cout<<final;
    return 0;
}