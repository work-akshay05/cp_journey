#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n=s.size();

        set<char>st;
        int l=0;
        int r=0;
        for(int i=0;i<n;i++){
            if(st.find(s[i])!=st.end())break;
            else {
                st.insert(s[i]);
                r=i;
            }
        }

        bool check=true;
        for(int i=r+1;i<n;i++){
            if(s[i]==s[l]){
                l++;
            }
            else check=false;
        }

        if(check)cout<<"YES\n";
        else cout<<"NO\n";

    }
}
