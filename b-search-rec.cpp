#include <bits/stdc++.h>
using namespace std;

int main() {
	int size;
	cin>>size;

	int arr[size];
	for(int i=0; i<size; i++) {
		cin>>arr[i];
	}
	int src;
	cin>>src;	

	int start=0;
	int end=size-1;
	int mid=(start+end)/2;
	bool flag=false;

	while(start<=end)
	{
		if(src==arr[mid]) {
			cout<<mid;
			flag=true;
			break;
		}
		if(src<arr[mid]) {
			end=mid-1;
		} else if(src>arr[mid]) {
			start=mid+1;
		}
		mid=(start+end)/2;
	}
	if(!flag) {
		cout<<-1;
	}
}