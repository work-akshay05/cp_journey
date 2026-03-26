#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        long long l,r;
        cin>>n>>l>>r;

        bool check=true;
        vector<long long>ans(n);
        for(int i=1;i<n+1;i++){
            int mod=l%i;

            if(mod==0){
                ans[i-1]=l;
            }
            else if(mod!=0){
                long long curr=l+(i-mod);
                if(curr>r){
                    check=false;
                    continue;
                }
                else ans[i-1]=curr;
            }
        }

        if(check){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }cout<<endl;
        }else cout<<"NO"<<endl;
    }
}