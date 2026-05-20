#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        vector<vector<int>>nums(n);
        for(int i=0;i<n;i++){
            int k;
            cin>>k;

            nums[i].push_back(k);
            for(int j=0;j<k;j++){
                int a;
                cin>>a;

                nums[i].push_back(a);
                mp[a]++;
            }
        }
        string ans="NO";
        bool check=false;
        for(int i=0;i<n;i++){
            bool temp=true;
            for(int j=nums[i][0];j>0;j--){
                if(mp[nums[i][j]]==1){
                    temp=false;
                    break;
                }
            }
            if(temp==true){
                ans="YES";
                break;
            }
        }
        cout<<ans<<endl;
    }
}