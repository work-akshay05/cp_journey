// logic clear hogeya but ye smjh aageya ki sliding window contigous mai agar kuch find krna ho to lag skta hai sliding window
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int ans=INT_MAX;
        int w=0;
        int b=0;
        for(int i=0;i<k;i++){
            if(s[i]=='W')w++;
            else b++;
        }
        ans=min(ans,w);

        for(int i=k;i<n;i++){
            int j=i-k;
            if(s[i]=='W'){
                w++;
                if(s[j]=='W'){
                    w--;
                }else{
                    b--;
                }
            }
            else{
                if(s[j]=='W'){
                    w--;
                }else{
                    b--;
                }
            }

            ans=min(ans,w);
        }

        cout<<ans<<endl;
    }
}