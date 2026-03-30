/*
    1-10 ke bich mai apply krke dekh rahe hai agar koi work kr jaaye to badhiyaan hai
    most of the cases mai 2 work kr jaayega 
    but for the case where even ho yaa pura odd ho vaha nhi work krega 
    usske lie we need to check 
    a[i]%2k=x
    a[i]%2k=x+k

    if f(2k)=1 then f(4k)!=1 therefor f(4k)=2
    which means we need to check only for 2^1-2^57
*/
#include<bits/stdc++.h>
using namespace std;
map<long long,int>mp;
int f(long long temp,vector<long long>&nums){
    mp.clear();
    for(int i=0;i<nums.size();i++){
        mp[nums[i]%temp]++;
    }
    return mp.size();
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        long long temp=1;
        for(int i=0;i<=57;i++){
            temp<<=1;
            int check=f(temp,nums);
            if(check==2){
                break;
            }
        }
        cout<<temp<<endl;
    }
}
