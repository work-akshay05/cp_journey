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
        bool check=true;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1])check=false;
        }

        if(check){
            cout<<0<<endl;
        }
        else {
            if(nums[n-2]>nums[n-1]){
                cout<<-1<<endl;
            }
            else if(nums[n-1]>=0){
                cout<<n-2<<endl;
                for(int i=0;i<n-2;i++){
                    cout<<i+1<<" "<<n-1<<" "<<n<<endl;
                }
            }
            else {
                cout<<-1<<endl;
            }
        }
    }
}