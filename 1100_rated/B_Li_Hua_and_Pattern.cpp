// may yaha galti kr raha tha ki hume main grid mai changes krke jo usska 180 rotation ho vo same mile
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        long long k;
        cin>>n>>k;

        vector<vector<int>>nums(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)cin>>nums[i][j];
        }

        int ocount=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i][j]!=nums[n-i-1][n-j-1])ocount++;
            }
        }

        ocount/=2;
        
        if(k<ocount){
            cout<<"NO"<<endl;
        }
        else if((k-ocount)%2==0) {
            cout<<"YES"<<endl;
        }
        else if(n%2!=0) {
            cout<<"YES"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}