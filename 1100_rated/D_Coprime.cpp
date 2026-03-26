#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a<b)return gcd(b,a);
    while(a%b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }

    return b;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        vector<int>temp(1001,-1);
        for(int i=0;i<n;i++){
            temp[nums[i]]=i+1;
        }

        int ans=INT_MIN;
        for(int i=1;i<=1000;i++){
            for(int j=1;j<=1000;j++){
                if(temp[i]>=0 && temp[j]>=0){
                    if(gcd(i,j)==1){
                        ans=max(ans,temp[i]+temp[j]);
                    }
                }
            }
        }
        if(ans==INT_MIN){
            cout<<-1<<endl;
        }
        else cout<<ans<<endl;
    }
}