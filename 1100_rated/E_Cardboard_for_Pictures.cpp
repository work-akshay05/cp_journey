#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        long long c;
        cin>>n>>c;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        long long a=n;
        long long b=0;
        for(int i=0;i<n;i++){
            b+=2*nums[i];
            c-=1LL*(nums[i]*nums[i]);
        }
        // cout<<"a: "<<a<<"b: "<<b<<"c: "<<c<<endl;
        long long one=(b/(2*a));
        long long two=(c/a);
        long long ans=sqrt(one*one+two)-one;
        cout<<(ans/2)<<endl;
    }
}