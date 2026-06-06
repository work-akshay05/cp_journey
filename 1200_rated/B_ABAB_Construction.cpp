#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;
        bool check=true;
         if(n%2==0){
            int i=1;
            string temp="";
            while(i<n){
                temp+=s[i];
                temp+=s[i-1];

                if(temp=="aa" || temp=="bb"){
                    check=false;
                }
                temp="";
                i+=2;
            }
         }
         else{
            if(s[0]=='b'){
                check=false;
            }
            int i=1;
            string temp="";
            while(i<n){
                temp+=s[i];
                temp+=s[i+1];

                if(temp=="aa" || temp=="bb"){
                    check=false;
                }
                temp="";
                i+=2;
            }
         }
         
         if(check)cout<<"yes"<<endl;
         else cout<<"no"<<endl;
    }
    return 0;
}