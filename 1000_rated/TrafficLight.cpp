#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        char c;
        cin>>c;

        string s;
        cin>>s;
        vector<int>curr,g;
        for(int i=0;i<n;i++){
            if(s[i]=='g')g.push_back(i+1);
            else if(s[i]==c){
                curr.push_back(i+1);
            }
        }
        int ans=0;
        for(int i=0;i<curr.size();i++){
            int maybe=-1;
            int lo=0;
            int hi=g.size()-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(g[mid]>curr[i]){
                    maybe=mid;
                    hi=mid-1;
                }
                else if(g[mid]<curr[i]){
                    lo=mid+1;
                }
            }
            if(maybe==-1){
                ans=max(ans,g[0]+n-curr[i]);
            }
            else ans=max(ans,g[maybe]-curr[i]);
        }
        if(c=='g')cout<<0<<endl;
        else cout<<ans<<endl;
    }
}