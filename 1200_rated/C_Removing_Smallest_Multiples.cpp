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

        long long ans=0;
        for(int i=0;i<n;i++){
            if(s[i]!='1'){
                int curr=i+1;
                int indi=1;
                int lindi=n/curr;
                while(indi<=lindi){
                    if(s[(curr*indi)-1]!='1'){
                        if(s[(curr*indi)-1]=='#'){
                            indi++;
                        }else{
                            ans+=curr;
                            s[(curr*indi)-1]='#';
                            indi++;
                        }
                    }
                    else break;
                }
            }
        }
        cout<<ans<<endl;
    }
}
/*
    curr=2+1=3;
    indi=1;
    lindi=2
    s[3*1-1]
      
*/