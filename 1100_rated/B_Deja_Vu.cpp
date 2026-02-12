/*
    unordered_map mai store kru ki kiss element mai kitne zeroes ka gap hai and unnko max and unnko store kru fir unordered_map mai 
    unordered_map<int,vector<int>>mp;
    fir ek loop chalu x vaale mai

    q vaale mai jo repeated elements hai unnko nikaal 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        vector<int>x(q);
        for(int i=0;i<q;i++)cin>>x[i];

        unordered_map<int,int>mp;
        vector<int>modx;
        for(int i=0;i<q;i++){
            if(mp.find(x[i])==mp.end()){
                mp[x[i]]++;
                modx.push_back(x[i]);
            }
        }

        // now abb q ka size 30 hi bacha
        vector<long long>newnums=nums;
        for(int i=0;i<n;i++){
            int curr=nums[i];
            int maxi=INT_MIN;
            for(int j=0;j<31;j++){
                if((curr&((1<<j)-1))==0){
                    maxi=max(maxi,j);
                }
            }
            newnums[i]=maxi;
        }

        for(int i=0;i<modx.size();i++){
            int curr=modx[i];
            int sum=pow(2,curr-1);
            for(int j=0;j<newnums.size();j++){
                if(newnums[j]>=curr){
                    nums[j]+=sum;
                    newnums[j]=curr-1;
                }
            }
        }

        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }cout<<endl;

    }
}
