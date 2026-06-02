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

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        long long maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                maxi=max(maxi,nums[i]^nums[j]);
            }
        }

        cout<<maxi<<endl;
    }

    return 0;
}