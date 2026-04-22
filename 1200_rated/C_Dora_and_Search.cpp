#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        int i=0;
        int j=n-1;
        int maxi=n;
        int mini=1;
        bool check=false;
        while(i<j){
            if(nums[i]==mini){
                i++;
                mini++;
            }else if(nums[i]==maxi){
                i++;
                maxi--;
            }
            else if(nums[j]==mini){
                j--;
                mini++;
            }else if(nums[j]==maxi){
                j--;
                maxi--;
            }
            else{
                check=true;
                cout<<i+1<<" "<<j+1<<endl;
                break;
            }
        }
        if(!check)cout<<-1<<endl;
    }
}