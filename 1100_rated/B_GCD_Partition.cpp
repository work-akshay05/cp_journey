#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(a<b)return gcd(b,a);

    while(a%b!=0){
        long long temp=b;
        b=a%b;
        a=temp;
    }
    return b;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }

        long long ans=LLONG_MIN;
        for(int i=0;i<n-1;i++){
            ans=max(ans,gcd(nums[i],nums[n-1]-nums[i]));
        }

        cout<<ans<<endl;
    }
}