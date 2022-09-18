#include <bits/stdc++.h>    
using namespace std;

int kadan(int arr[], int size) {
    int curr_sum=0;
    int max_sum=INT_MIN;
    
    for(int i=0; i<size; i++) {
        curr_sum+=arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }
        max_sum=max(curr_sum,max_sum);
    }
    return max_sum;
}

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
		
		int wrapsum;
		int non_wrapsum;
		
		non_wrapsum=kadan(arr,size);
		int total_sum=0;
		
		for(int i=0; i<size; i++) {
			total_sum+=arr[i];
			arr[i]=-arr[i];
		}

		wrapsum=total_sum+kadan(arr,size);
		cout<<max(wrapsum,non_wrapsum)<<endl;

	}
	return 0;
}