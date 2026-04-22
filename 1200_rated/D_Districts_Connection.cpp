#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        unordered_map<long long,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i+1);
        }
        bool printed=false;
        if(mp.size()==1){
            cout<<"NO"<<endl;
            printed=true;
        }
        if(!printed){
            cout<<"YES"<<endl;
            vector<pair<int,long long>>temp;
            for(auto it:mp){
                temp.push_back({it.second.size(),it.first});
            }

            sort(temp.begin(),temp.end());
            for(int i=0;i<temp.size();i++){
                vector<int>curr=mp[temp[i].second];
                if(i<temp.size()-1){
                    vector<int>curr2=mp[temp[i+1].second];
                    for(int j=0;j<curr.size();j++){
                        cout<<curr[j]<<" "<<curr2[0]<<endl;
                    }
                }
                else {
                    for(int j=1;j<curr.size();j++){
                        cout<<curr[j]<<" "<<mp[temp[0].second][0]<<endl;
                    }
                }
            }
        }
    }
}