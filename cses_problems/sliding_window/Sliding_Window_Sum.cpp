#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    long long x,a,b,c;
    cin>>x>>a>>b>>c;

    vector<long long>nums(n,x);
    for(int i=1;i<n;i++){
        nums[i]=(a*nums[i-1]+b)%c;
    }

    long long sum=0;
    for(int i=0;i<k;i++){
        sum+=nums[i];
    }
    long long ans=sum;
    for(int i=k;i<n;i++){
        sum=sum-nums[i-k]+nums[i];
        ans^=sum;
    }
    cout<<ans<<endl;
}