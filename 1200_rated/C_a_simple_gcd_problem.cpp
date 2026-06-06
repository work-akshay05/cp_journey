#include<bits/stdc++.h>
using namespace std;
bool fn(long long a,long long b){
    long long temp=__gcd(a,b);
    if(a==b)return false;
    if(a==temp)return false;
    
    return true;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<long long>b(n);
        for(int i=0;i<n;i++)cin>>b[i];

        int count=0;
        for(int i=1;i<n-1;i++){
            bool check=true;

            long long c=__gcd(a[i],a[i+1]);
            long long d=__gcd(a[i],a[i-1]);

            long long l=(1LL*c*d)/__gcd(c,d);
            if(l<a[i])count++;
        }
        if(__gcd(a[0],a[1])<a[0])count++;
        if(__gcd(a[n-2],a[n-1])<a[n-1])count++;
        cout<<count<<endl;
    }
}