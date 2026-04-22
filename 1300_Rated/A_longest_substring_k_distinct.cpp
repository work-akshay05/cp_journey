#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;


        int n=s.size();
        unordered_map<char,int>mp;
        int i=0,j=0;
        int len=0;
        while(j<n){
            if(mp.size()==k){
                if(mp.find(s[j])==mp.end()) {
                    len=max(len,(j-i));
                    while(mp.size()==k){
                        if(mp[s[i]]>1)mp[s[i]]--;
                        else mp.erase(s[i]);
                        i++;
                    }
                }
            }
            mp[s[j]]++;
            j++;
        }
        len=max(len,(j-i+1));
        cout<<len<<endl;
    }

}