#include<bits/stdc++.h>
using namespace std;
long long solve(int n,vector<string>&s){
    long long ans=0;
    unordered_map<char,int>mp;
    int j=0;
    for(int i=2;i<10;i++){
        if(i==7 || i==9){
            int temp=4;
            while(temp--){
                char curr=97+j;
                mp[curr]=i;
                j++;
            }
        }
        else {
            int temp=3;
            while(temp--){
                char curr=97+j;
                mp[curr]=i;
                j++;
            }
        }
    }
    for(int i=0;i<n;i++){
        ans=ans*10+mp[s[i][0]];
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<string>s;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;

        s.push_back(x);
    }

    long long ans=solve(n,s);
    cout<<ans<<endl;

    return 0;
}