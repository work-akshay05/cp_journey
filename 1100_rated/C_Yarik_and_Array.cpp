#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b){
    if((a%2==0 && b%2==0) || (a%2!=0 && b%2!=0) )return false;
    return true;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];
        int temp=nums[0];
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            if(check(nums[i],nums[i-1])){
                temp=max(nums[i],temp+nums[i]);
            }
            else {
                temp=nums[i];
            }
            maxi=max(maxi,temp);
        }
        cout<<maxi<<endl;
    }
}