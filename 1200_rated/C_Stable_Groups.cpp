#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k,x;
    cin>>n>>k>>x;

    vector<long long>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    sort(nums.begin(),nums.end());

    priority_queue<long long,vector<long long>,greater<long long>>pq;
    for(int i=0;i<n-1;i++){
        long long diff=nums[i+1]-nums[i];
        if(diff>x)pq.push(diff);
    }
    
    while(!pq.empty() && k>0){
        long long curr=pq.top();
        long long div=(curr+x-1)/x;
        if(k>=(div-1)){
            pq.pop();
            k-=(div-1);
        }
        else {
            break;
        }
    }
    cout<<pq.size()+1<<endl;
}

/*
{6},{3}
k=2 pe 1 hat geya
{6}
k=1
{3},{3}
6/x=3-1=2
(3/2)=2-1=1
*/ 