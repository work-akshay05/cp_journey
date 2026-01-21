#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,r,b;
        cin>>n>>r>>b;

        string ans="";
        int grp=b+1; //25
        int rem=r%grp; //iss se mil jaayega kitne mai extra add krna hai
        int div=r/grp; //iss se mil jaayega kitne baaki sab kaise honge vaale hai

        int tempr=r;
        int tempb=b;
        // string ans="";
        while(grp>0){
            if(rem>0){
                while(rem>0){
                    for(int i=0;i<div+1;i++){
                        ans+="R";
                        tempr--;
                    }ans+="B";
                    tempb--;
                    rem--;
                    grp--;
                }
            }
            else if(grp>1){
                for(int i=0;i<div;i++){
                    ans+="R";
                    tempr--;
                }ans+="B";
                tempb--;
                grp--;
            }
            else {
                for(int i=0;i<div;i++){
                    ans+="R";
                    tempr--;
                }grp--;
            }
        }
        // cout<<ans.size()<<endl;
        cout<<ans<<endl;
    }
}