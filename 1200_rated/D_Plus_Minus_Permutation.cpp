#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,x,y;
        cin>>n>>x>>y;

        long long count1=n/x;
        long long count2=n/y;
        long long lcm=(x*y)/__gcd(x,y);
        long long count3=n/lcm;

        long long sum=(n*(n+1))/2;
        long long temp=n-(count1-count3);
        long long sum1=(temp*(temp+1))/2;
        long long temp2=(count2-count3);
        long long sum2=(temp2*(temp2+1))/2;

        long long ans=sum-sum1-sum2;
        cout<<ans<<endl;
    }
}