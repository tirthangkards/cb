#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
        
    int size;
    cin>>size;
    int arr[size];
    
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    int queries;
    cin>>queries;
    
    while(queries--)
    {
        int money;
        cin>>money;
        int units;
        cin>>units;
        
        int count=0;
        for(int i=0; i<size; i++) {
            if(money%arr[i]==0){
                count++;
            }
        }
        if(count>=units){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}