#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        vector<int>sbit(31,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<31;j++){
                if((nums[i]&(1<<j))!=0){
                    sbit[j]++;
                }
            }
        }

        long long ans=0;
        for(int i=30;i>=0 && k>=0;i--){
            if((n-sbit[i])<=k){
                k-=(n-sbit[i]);
                sbit[i]=n;
                ans+=pow(2,i);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

