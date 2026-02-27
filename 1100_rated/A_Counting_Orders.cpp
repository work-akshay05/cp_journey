#include<bits/stdc++.h>
using namespace std;
long long bs(vector<long long>&a,vector<long long>&b,int i){
    int n=a.size();
    int lo=i;
    int hi=n-1;

    int maybe=n;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(b[mid]>=a[i]){
            maybe=mid;
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    return maybe-i;
}
int MOD=1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<long long>b(n);
        for(int i=0;i<n;i++)cin>>b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long cal=1;
        for(int i=0;i<n;i++){
            int curr=bs(a,b,i);
            cal*=(curr%MOD);
            cal%=MOD;
        }

        cout<<cal<<endl;
    }
}