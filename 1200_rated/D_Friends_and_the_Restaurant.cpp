#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>nums1(n);
        for(int i=0;i<n;i++)cin>>nums1[i];

        vector<long long>nums2(n);
        for(int i=0;i<n;i++)cin>>nums2[i];

        vector<long long>nums(n);
        for(int i=0;i<n;i++){
            nums[i]=nums2[i]-nums1[i];
        }

        sort(nums.begin(),nums.end());
        int i=0;
        int j=n-1;
        int count=0;
        while(i<j){
            if(nums[i]+nums[j]>=0){
                count++;
                i++;
                j--;
            }
            else{
                i++;
            }
        }
        cout<<count<<endl;
    }
}