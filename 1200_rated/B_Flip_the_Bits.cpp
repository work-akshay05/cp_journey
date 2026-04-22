#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string a;
        cin>>a;

        string b;
        cin>>b;

        vector<int>arr1(n,0);
        vector<int>arr2(n,0);
        for(int i=0;i<n;i++){
            arr1[i]=a[i]-'0';
            arr2[i]=b[i]-'0';
        }
        for(int i=1;i<n;i++){
            arr1[i]=arr1[i]+arr1[i-1];
        }


        bool check=false;
        bool printed=false;
        for(int i=n-1;i>=0;i--){
            int currlen=i+1;
            if(a[i]!=b[i] && !check){
                if(currlen==arr1[i]*2){
                    check=!check;
                }
                else {
                    cout<<"NO"<<endl;
                    printed=true;
                    break;
                }
            }
            else if(a[i]==b[i] && check){
                if(currlen==arr1[i]*2){
                    check=!check;
                }
                else {
                    cout<<"NO"<<endl;
                    printed=true;
                    break;
                }
            }
        }

        if(!printed)cout<<"YES"<<endl;

    }
}