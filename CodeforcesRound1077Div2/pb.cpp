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

        if(n<=2){
            cout<<1<<endl;
            continue;
        }
        if(s[0]=='0' && s[1]=='0')s[1]='1';
        if(s[n-1]=='0' && s[n-2]=='0')s[n-2]='1';

        int count=0;
        int prev=-1;
        for(int i=0;i<n;i++){
            if(s[i]!='1'){
                if(i-prev>=3){
                    count++;
                    prev=i;
                    s[i]='1';
                }
            }
            else{
                count++;
                prev=i;
            }
        }

        cout<<count<<endl;
        
    }
}
// greate question my previous approach was 50% correct but not able to think like this 
/*
    why we are placing s[1]=1 taaki aage koi chute na and simillarly for n-2 position bhi 
*/