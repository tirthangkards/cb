#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int tc;
    cin>>tc;
    
    while(tc--)
    {
        int size;
	    cin>>size;
	
	    int arr[size];
	    for(int i=0; i<size; i++) {
	        cin>>arr[i];
	    }
	    
	    for(int i=0; i<size; i++) {
			string ij="";
	    	string ji="";		
	        for(int j=i+1; j<size; j++){

	            ij=to_string(arr[i])+to_string(arr[j]);
	            ji=to_string(arr[j])+to_string(arr[i]);
	            
	            
	            long ij_num=stol(ij);
	            long ji_num=stol(ji);
	            
	            if(ji_num>ij_num){
					swap(arr[i],arr[j]);
	            }
	        }
	    }
		string ans="";
		for(int i=0; i<size; i++){
			ans+=to_string(arr[i]);
		}
		cout<<ans<<endl;
    }
	return 0;
}
