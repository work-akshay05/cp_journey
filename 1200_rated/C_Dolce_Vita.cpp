#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        long long x;
        cin>>n>>x;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        sort(nums.begin(),nums.end());

        long long sum=0;
        long long ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<=x)ans+=((x-sum)/(i+1))+1;
        }
        cout<<ans<<endl;
    }
}