#include<bits/stdc++.h>
using namespace std;

int tNum(int n)
{
    if(n==0)
        return 0;
    return n + tNum(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<tNum(n);
}


// int main() {

//     int n=3;
// 	int ans=0;
// 	for(int i=1; i<=n; i++) {
// 		ans+=i;
// 	}
//     cout<<ans;
//     return 0;
// }