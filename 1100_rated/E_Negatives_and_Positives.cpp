#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        // total negative numbers 
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0)count++;
        }

        long long mini=LLONG_MAX;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(nums[i]);
            mini=min(mini,abs(nums[i]));
        }
        if(count%2==0){
            cout<<sum<<endl;
        }else {
            cout<<sum-2*mini<<endl;
        }
    }
}