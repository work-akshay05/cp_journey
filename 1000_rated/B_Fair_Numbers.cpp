// we can apply binary search on ans in this Question
/*
if we try to think like finding the minimum 
*/
#include<bits/stdc++.h>
using namespace std;
long long fn(long long n){
    long long tempn=n;
    while(tempn>0){
        int rem=tempn%10;
        if(rem!=0 && n%rem!=0){
            return ((n+rem-1)/rem)*rem;
        }
        tempn/=10;
    }
    return -1;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        long long temp=n;
        bool check=false;
        while(!check){
            long long val=fn(temp);
            if(val==-1){
                check=true;
            }
            else{
                temp++;
            }
        }
       cout<<temp<<endl;

    }
}