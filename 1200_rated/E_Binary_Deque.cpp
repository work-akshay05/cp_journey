#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,s;
        cin>>n>>s;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        int l=0;
        int r=0;
        int length=INT_MIN;
        int sum=0;
        while(r<n){
            sum+=nums[r];
            if(sum==s){
                length=max(length,(r-l)+1);
            }else if(sum>s){
                while(sum>s){
                    sum-=nums[l];
                    l++;
                }
                if(sum==s)length=max(length,(r-l)+1);
            }
            r++;
        }
        if(length==INT_MIN && sum<s)cout<<-1<<endl;
        else cout<<n-length<<endl;
    }

    return 0;
}