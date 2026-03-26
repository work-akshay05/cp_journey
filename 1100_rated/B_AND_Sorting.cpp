#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        int temp=2e18;
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                temp&=nums[i];
            }
        }

        cout<<temp<<endl;
    }
}