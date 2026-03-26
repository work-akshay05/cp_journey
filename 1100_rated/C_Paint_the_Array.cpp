#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        long long GCD1=0;
        long long GCD2=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                GCD1=__gcd(GCD1,nums[i]);
            }
            else {
                GCD2=__gcd(GCD2,nums[i]);
            }
        }
        vector<long long>temp;
        temp.push_back(GCD1);
        temp.push_back(GCD2);
        
        long long ans=0;
        for(int i=0;i<2;i++){
            bool check=true;
            if(temp[i]==0)continue;
            for(int j=0;j<n-1;j++){
                if((nums[j]%temp[i]==0 && nums[j+1]%temp[i]==0) || (nums[j]%temp[i]!=0 && nums[j+1]%temp[i]!=0)){
                    check=false;
                    break;
                }
            }
            if(check){
                ans=temp[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
}