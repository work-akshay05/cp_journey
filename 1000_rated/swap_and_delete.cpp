#include<bits/stdc++.h>
using namespace std;
int fun(string s){
    int one=0;
    int zero=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='0')zero++;
        else one++;
    }

    string t="";
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(zero>0){
                t+='0';
                zero--;
            }else break;
            
        }
        else if(s[i]=='0'){
            if(one>0){
                t+='1';
                one--;
            }else break;
        }
    }

    return n-t.size();
}
int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int ans=fun(s);
        cout<<ans<<endl;
    }
}