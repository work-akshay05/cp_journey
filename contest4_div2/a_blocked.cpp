#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        sort(nums.begin(),nums.end());
        bool check=false;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                check=true;
                cout<<-1<<endl;
                break;
            }
        }
        if(!check){
            sort(nums.rbegin(),nums.rend());
            for(int i=0;i<n;i++){
                cout<<nums[i]<<" ";
            }cout<<endl;
        }
    }

    return 0;
}