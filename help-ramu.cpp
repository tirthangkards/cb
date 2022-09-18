#include <bits/stdc++.h>
using namespace std;

int main() {

    int tc;
    cin>>tc;

    while(tc--)
    {
        int size=4;
        int arr[4];
        for(int i=0; i<size; i++) {
            cin>>arr[i];
        }
        int no_ricks;
        cin>>no_ricks;
        int no_cabs;
        cin>>no_cabs;

        int ricks[no_ricks];
        for(int i=0; i<no_ricks; i++) {
            cin>>ricks[i];
        }

        int cabs[no_cabs];
        for(int i=0; i<no_cabs; i++) {
            cin>>cabs[i];
        }

        int total_ricks=0;
        for(int i=0; i<no_ricks; i++) {
            total_ricks+=min((ricks[i]*arr[0]),arr[1]);
        }
        
        total_ricks=min(total_ricks,arr[2]);

        int total_cabs=0;
        for(int i=0; i<no_cabs; i++) {
            total_cabs+=min(cabs[i]*arr[0], arr[1]);
        }
        total_cabs=min(total_cabs,arr[2]);

        int total_cost=min(total_cabs+total_ricks,arr[3]);
        cout<<total_cost<<endl;
    }
    return 0;
}