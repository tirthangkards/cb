#include<bits/stdc++.h>
using namespace std;

void GenerateString(int n,vector<string>&ans,string output){
	if(n==0){
		ans.push_back(output);
		return ;
	}
	int t=n%10;
	char a='a'+t-1;
	GenerateString(n/10,ans,a+output);

	if(n>9){
		int t=n%100;
		if(t>=0 && t<27){
			char ab='a'+t-1;
			GenerateString(n/100,ans,ab+output);
		}
	}
}

int main(){
	int n;
	cin>>n;
	vector<string>ans;
	GenerateString(n,ans,"");
	sort(ans.begin(),ans.end());
	cout<<"[";int i;
	for( i=0;i<ans.size()-1;i++){
		cout<<ans[i]<<", ";
	}cout<<ans[i]<<"]";
}
