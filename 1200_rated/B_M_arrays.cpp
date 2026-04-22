#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]%m]++;
        }

        int count=0;
        for(auto it = mp.begin(); it != mp.end(); ){
            int curr = it->first;
            if(curr == 0){
                count++;
                it = mp.erase(it);
            }
            else if(m%2==0 && curr==m/2){
                count++;
                it = mp.erase(it);
            }
            else if(mp.find(m-curr) != mp.end()){
                int f1 = it->second;
                int partner = m-curr;
                int f2 = mp[partner];

                if(f1 == f2){
                    mp.erase(partner);
                    it = mp.erase(it);
                }
                else if(f1 > f2){
                    int newf1 = f1 - (f2 + 1);
                    mp.erase(partner);
                    if(newf1 == 0){
                        it = mp.erase(it);
                    }
                    else{
                        it->second = newf1;
                        ++it;
                    }
                }
                else{
                    int newf2 = f2 - (f1 + 1);
                    if(newf2 == 0)mp.erase(partner);
                    else mp[partner] = newf2;
                    it = mp.erase(it);
                }
                count++;
            }
            else{
                ++it;
            }
        }
        for(auto it:mp){
            count+=it.second;
        }
        cout<<count<<endl;
    }
}