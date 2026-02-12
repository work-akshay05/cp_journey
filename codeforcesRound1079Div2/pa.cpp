#include<bits/stdc++.h>
using namespace std;

int check(long long n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long x;
        cin>>x;

        if(x%9!=0){
            cout<<0<<endl;
            continue;
        }

        int cnt=0;

        for(int s=1;s<=90;s++){
            long long y = x + s;   
            if(check(y)==s){
                cnt++;
            }
        }

        cout<<cnt<<endl;   
    }
}
