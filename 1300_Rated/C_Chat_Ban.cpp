#include<bits/stdc++.h>
using namespace std;
long long solve(long long k,long long x){
    long long sum=(k*(k+1))/2;
    long long a=ceil((-1+sqrt(1+8*x))/2);
    if(a<=k){
       return a; 
    }
    else{
        long long nsum=x-sum;
        long long tempsum=((k)*(k-1))/2;
        long long nextsum=tempsum-nsum;
        if(nsum>=tempsum){
            return (2*k)-1;
        }
        else{
            long long b=(-1+sqrt(1+8*nextsum))/2;
            return 2*k-1-b;
        }
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long k,x;
        cin>>k>>x;

        cout<<solve(k,x)<<endl;
        
    }

    return 0;
}