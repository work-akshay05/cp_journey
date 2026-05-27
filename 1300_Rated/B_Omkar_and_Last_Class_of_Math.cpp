#include<bits/stdc++.h>
using namespace std;
long long largestdivisor=LLONG_MIN;
bool primecheckker(long long n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            largestdivisor=max({largestdivisor,(long long)n/i,(long long)i});
        }
    }
    if(largestdivisor==LLONG_MIN)return true;
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        largestdivisor=LLONG_MIN;
        long long n;
        cin>>n;

        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else {
            bool checkPrime=false;
            checkPrime=primecheckker(n);
            if(checkPrime==false){
                cout<<largestdivisor<<" "<<n-largestdivisor<<endl;
            }
            else {
                cout<<1<<" "<<n-1<<endl;
            }
        }
    }

    return 0;
}