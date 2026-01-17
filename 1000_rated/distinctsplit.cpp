#include<bits/stdc++.h>
using namespace std;
int fn(int n,string s){
    unordered_map<char,int>pre,suf;
    for(int i=0;i<n;i++){
        suf[s[i]]++;
    }

    // checking for each index
    int ans=0;
    for(int i=0;i<n;i++){
        pre[s[i]]++;
        if(suf[s[i]]-1>0){
            suf[s[i]]--;
        }else if(suf[s[i]]-1==0){
            suf.erase(s[i]);
        }
        ans=max(ans,(int)(pre.size()+suf.size()));
    }

    return ans;
    
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        cout<<fn(n,s)<<endl;
    }
}