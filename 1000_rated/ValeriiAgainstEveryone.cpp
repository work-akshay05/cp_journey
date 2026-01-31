#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        sort(nums.begin(),nums.end());
        bool check=false;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                check=true;
                break;
            }
        }

        if(check)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}