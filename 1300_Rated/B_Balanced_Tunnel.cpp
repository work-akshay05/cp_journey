#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int>enter(n);
    for(int i=0;i<n;i++)cin>>enter[i];

    vector<int>exit(n);
    for(int i=0;i<n;i++)cin>>exit[i];

    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[exit[i]]=i+1;
    }

    vector<int>temp(n);
    for(int i=0;i<n;i++){
        temp[i]=mp[enter[i]];
    }

    int maxi=temp[0];
    int ans=0;
    for(int i=1;i<n;i++){
        if(temp[i]>maxi){
            maxi=temp[i];
        }
        else {
            ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}