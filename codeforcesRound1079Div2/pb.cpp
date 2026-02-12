#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nump(n);
        for(int i=0;i<n;i++)cin>>nump[i];

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];
        bool check=true;
        for(int i=n-1;i>=0;i--){
            if(nums[i]!=nump[i]){
                if((i-1>=0 && nums[i]!=nums[i-1]) && (i-1>=0 && nums[i]!=nump[i-1]) && (i+1<n && nums[i]!=nump[i+1]) && (i+1<n && nums[i]!=nums[i+1])){
                    check=false;
                    break;
                }
            }
        }
        if(check)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
}