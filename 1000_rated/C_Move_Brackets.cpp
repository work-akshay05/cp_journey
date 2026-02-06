#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int open=0,close=0,count=0,i=0;

        while(i<n){
            if(s[i]=='(')open++;
            else if(s[i]==')')close++;

            if(close>open){
                s.erase(i,1);
                s+=')';
                count++;
                close--;
            }else i++;
        }
        cout<<count<<endl;
        
    }

}