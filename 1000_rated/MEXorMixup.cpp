#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int a,b;
        cin>>a>>b;
        int X=0;
        
        for(int i=(a/4)*4;i<a;i++){
            X^=i;
        }

        if(X==b)cout<<a<<endl;
        else {
            if((X^b)!=a)cout<<a+1<<endl;
            else cout<<a+2<<endl;
        }
    }
}
