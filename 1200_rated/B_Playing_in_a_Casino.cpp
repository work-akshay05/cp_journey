#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<int>>nums(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>nums[i][j];
            }
        }

        long long ans=0;
        for(int i=0;i<m;i++){
            int curr=i;
            vector<long long>temp;
            for(int j=0;j<n;j++){
                temp.push_back(nums[j][curr]);
            }
            
            sort(temp.begin(),temp.end());
            vector<long long>temp2=temp;
            
            for(int j=n-2;j>=0;j--){
                temp[j]+=temp[j+1];
            }
            for(int j=0;j<n-1;j++){
                ans+=temp[j+1]-(n-j-1)*temp2[j];
            }
        }
        cout<<ans<<endl;
    }
}