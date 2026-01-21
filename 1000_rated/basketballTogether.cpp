#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long d;
    cin>>d;

    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    sort(nums.begin(),nums.end());
    long long telem=n;
    int curr=n-1;
    long long count=0;
    while(telem>0){
        long long cal=((long long)d+nums[curr]-1)/nums[curr];
        
        if((long long)cal*nums[curr]==d){
            cal+=1;
        }
        if(cal>telem ){
            telem=0;
        }
        else {
            telem-=cal;
            count++;
        }
        curr--;
    }

    cout<<count<<endl;
}