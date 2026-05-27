#include<bits/stdc++.h>
using namespace std;
long long solve(int k,vector<long long>&nums){
    vector<long long>temp(nums.begin(),nums.begin()+k);
    sort(temp.begin(),temp.end());
    int i=k-1;
    long long totalH=0;
    while(i>=0){
        if(i-1>=0){
            totalH+=max(temp[i],temp[i-1]);
        }
        else totalH+=temp[i];

        i-=2;
    }
    return totalH;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long h;
    cin>>n>>h;


    vector<long long>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];

    int lo=1;
    int hi=n;
    int maybe=1;
    while(lo<=hi){
        int k=lo+(hi-lo)/2;
        if(solve(k,nums)>h){
            hi=k-1;
        }
        else{
            maybe=k;
            lo=k+1;
        }
    }
    cout<<maybe<<endl;
    return 0;
}