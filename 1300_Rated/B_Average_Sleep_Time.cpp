#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];

    int tGroup=n-k+1;
    long long sum=0;
    for(int i=0;i<k;i++){
        sum+=nums[i];
    }
    long long tSum=sum;
    for(int i=k;i<n;i++){
        sum=sum-nums[i-k]+nums[i];
        tSum+=sum;
    }

    double ans = (double)tSum / (double)tGroup;

    cout << fixed << setprecision(10) << ans << '\n';

    return 0;
}