#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a>>b;

        long long ans=LLONG_MAX;
        for(int i=0;i<32;i++){
            long long operations=i;
            long long new_b=b+i;
            
            if(new_b==1)continue;

            long long new_a=a;
            while(new_a>0){
                new_a=new_a/new_b;
                operations++;
            }
            ans=min(ans,operations);
        }
        cout<<ans<<endl;
    }

}

