#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&nums){
    int n=nums.size();
    int i=0;
    int j=n-1;
    while(i<=j){
        if(nums[i]!=nums[j])return false;
        i++;
        j--;
    }
    return true;
}
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
        int num1=-1;
        int num2=-1;
        while(i<=j){
            if(nums[i]==nums[j]){
                i++;
                j--;
            }
            else if(nums[i]!=nums[j]){
                num1=nums[i];
                num2=nums[j];
                break;
            }
        }
        bool check1=false;
        if(num1!=-1 ){
            vector<int>f;
            for(int i=0;i<n;i++){
                if(nums[i]!=num1){
                    f.push_back(nums[i]);
                }
            }
            check1|=check(f);
        }
        if(num2!=-1 ){
            vector<int>s;
            for(int i=0;i<n;i++){
                if(nums[i]!=num2){
                    s.push_back(nums[i]);
                }
            }
            check1|=check(s);
        }
        if(num1==-1 && num2==-1)cout<<"YES\n";
        else if(check1)cout<<"YES\n";
        else cout<<"NO\n";

    }
}