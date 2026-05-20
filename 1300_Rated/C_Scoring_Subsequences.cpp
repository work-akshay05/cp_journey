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

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];
        vector<int>ans;
        int count=1;
        int i=0;
        while(i<n && count<=n && ans.size()<n){
            if(nums[i]>=count){
                ans.push_back(count);
                count++;
            }
            else {
                count--;
                i++;
            }
        }
        // cout<<"ans size: "<<ans.size()<<endl;

        for(int j=0;j<n;j++){
            cout<<ans[j]<<" ";
        }cout<<endl;
    }
}