#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        sort(nums.begin(),nums.end());

        for(int i=1;i<n;i++)nums[i]+=nums[i-1];

        long long maxi=LLONG_MIN;
        for(int x=0;x<=k;x++){
            int y=k-x;
            int i=2*x;
            int j=(n-y)-1;
            if(i==0){
                maxi=max(nums[j],maxi);
            }
            else maxi=max(nums[j]-nums[i-1],maxi);
        }

        cout<<maxi<<endl;
    }
}