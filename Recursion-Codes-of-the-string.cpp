#include<bits/stdc++.h>
using namespace std;

void solve(string nums, char letters[], vector<string> &ans, string &output, int index) {
    int number=nums[index];
    char letter=letters[number];
    if(index>=nums.length()) {
        cout<<output;
        ans.push_back(output);
        return;
    }
    output.push_back(letter);
    solve(nums,letters,ans,output,index+1);
    output.pop_back();
}

int main() {
    string nums="1125";
    char letters[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<string> ans;
    string output;

    for(string str: ans) {
        cout<<str<<endl;
    }
    return 0;
}