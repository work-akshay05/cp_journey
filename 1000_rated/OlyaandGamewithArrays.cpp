#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long int ans=0;
        vector<int>secmini;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            int tempmin=INT_MAX;
            int indi=-1;
            vector<int>nums(m);
            for(int i=0;i<m;i++){
                cin>>nums[i];
                if(tempmin>nums[i]){
                    tempmin=nums[i];
                    indi=i;
                }
            }

            // calculating second min
            int tempsecmin=INT_MAX;
            for(int i=0;i<m;i++){
                if(i!=indi){
                    tempsecmin=min(tempsecmin,nums[i]);
                }
            }
            secmini.emplace_back(tempsecmin);
            mini=min(mini,tempmin);
        }
        ans+=mini;
        sort(secmini.begin(),secmini.end());
        for(int i=1;i<n;i++){
            ans+=secmini[i];
        }
        cout<<ans<<endl;
    }
}
