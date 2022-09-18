#include<bits/stdc++.h>
using namespace std;

void tower(int n, string source, string helper, string destination) {
    if(n<=0) {
        return;
    }
    tower(n-1,source,destination,helper);
    cout<<"Move "<<n<<" th disk from "<<source<<" to "<<destination<<endl;
    tower(n-1,helper,source,destination); 
}

int main() {

    int n;
    cin>>n;
    tower(n,"T1","T3","T2");
    cout<<pow(2,n)-1;
    return 0;
}