#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int w,h;
        cin>>w>>h;
        int b1=0;
        int b2=0;
        int b3=0;
        int b4=0;
        for(int i=0;i<4;i++){
            int k;
            cin>>k;
            vector<int>temp(k);
            for(int j=0;j<k;j++){
                cin>>temp[j];
            }
            if(i==0){
                b1=temp[k-1]-temp[0];

            }
            else if(i==1){
                b2=temp[k-1]-temp[0];

            }
            else if(i==2){
                b3=temp[k-1]-temp[0];

            }
            else if(i==3){
                b4=temp[k-1]-temp[0];

            }
        }

        long long ans=max({(long long)b1*h,(long long)b2*h,(long long)b3*w,(long long)b4*w});
        cout<<ans<<endl;
    }
}