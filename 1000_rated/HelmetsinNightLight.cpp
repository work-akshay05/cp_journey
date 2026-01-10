#include<bits/stdc++.h>
using namespace std;
long long int fn(vector<pair<int,int>>&nums,int n,int p){
    int rem=n-1;
    long long int sum=p;
    int curri=0;
    int currj=1;
    while(rem!=0){
        if(nums[curri].first>=p){
            sum+=(long long)rem*p;
            rem=0;
        }
        else if(nums[curri].first<p){
            if(nums[curri].second<rem){
                currj+=nums[curri].second;
                sum+=(long long)nums[curri].first*nums[curri].second;
                rem-=nums[curri].second;
                curri++;
            }
            else {
                sum+=(long long)rem*nums[curri].first;
                curri++;
                rem=0;
            }
        }
    }

    return sum;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,p;
        cin>>n>>p;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        vector<pair<int,int>>nums;
        for(int i=0;i<n;i++){
            nums.emplace_back(b[i],a[i]);
        }

        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            
        }

        cout<<fn(nums,n,p)<<endl;
    }
}