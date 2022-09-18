#include<bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	 }

	// int	min = *min_element(arr, arr + n);

	// //cout<<min<<endl;
	// int idx=-1;
	// for(int i=0;i<n;i++){
	// 	if(min==arr[i]){
	// 		idx=i;
	// 	}
	// }
	
	//cout<<idx<<endl;

	/*-------------------------------------------*/

	// int size = n-(idx+1);

	// //cout<<size<<endl;
	// int new_arr[size];

	int idx=0;
	int min= 435678;

	for(int i=idx+1;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
			idx=i;
		}
		
	}

	int max=-356373;

	for(int i=idx+1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		
	}

	// for(int i=0;i<size;i++){
		
	// 	cout<<new_arr[i]<<" ";
	// }	



	//max = *max_element(idx+1, arr+n);

	//cout<<max;
	int ans=max-min;
	//for(int i=0;i<size;i++){
		
	// 	cout<<new_arr[i]<<" ";
	// }	
	cout<<ans<<endl;


	return 0;

}
