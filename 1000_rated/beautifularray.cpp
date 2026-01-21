#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        long long k,b,s;
        cin>>n>>k>>b>>s;

        int tempb=s/k;
        if(tempb==b){
            for(int i=0;i<n-1;i++){
                cout<<0<<" ";
            }cout<<s<<endl;
        }
        else if(tempb>b){
            long long cal=s-((long long)(b+1)*(k)-1);
            if((cal)<=(long long)(n-1)*(k-1)){
                for(int i=0;i<n-1;i++){
                    if(cal>=(k-1)){
                        cout<<k-1<<" ";
                        cal-=k-1;
                    }
                    else {
                        cout<<cal<<" ";
                        cal=0;
                    }
                }cout<<((b+1)*k)-1<<endl;
            }else cout<<-1<<endl;
        }
        else cout<<-1<<endl;
    }
}