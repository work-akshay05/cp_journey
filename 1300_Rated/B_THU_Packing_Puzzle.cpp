#include<bits/stdc++.h>
using namespace std;

long long compute(long long t, long long h, long long u){
    long long ans=0;
    long long f=min(u,t);
    ans+=f*4;
    t-=f;
    u-=f;

    long long s=min(t/2,h);
    ans+=s*7;
    t-=2*s;
    h-=s;

    long long te=min(t,h);
    ans+=te*5;
    t-=te;
    h-=te;

    if(t!=0){
        ans+=(2*t)+1;
        t=0;
    }

    ans+=(h*3)+(u*3);
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    while(x--){
        long long t,h,u;
        cin>>t>>h>>u;

        cout<<compute(t,h,u)<<endl;
    }

    return 0;
}