#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int m=(n*(n-1))/2;
        vector<long long>nums(m);
        for(int i=0;i<m;i++)cin>>nums[i];

        sort(nums.begin(),nums.end());

        int i=0;
        int step=n-1;
        while(i<m){
            cout<<nums[i]<<" ";
            i+=step;
            step--;
        }
        cout<<"1000000000\n";
    }
}


