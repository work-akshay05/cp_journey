/*
    i can think like we have to create a o(n^3) solution but i was thinking ki o(n^3) will give TLE but there is a twist i can select 3 highest elements from each of the array then we can apply o(3^3) solution 

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<int>b(n);
        for(int i=0;i<n;i++)cin>>b[i];

        vector<int>c(n);
        for(int i=0;i<n;i++)cin>>c[i];

        vector<pair<int,int>>nums1(n);
        vector<pair<int,int>>nums2(n);
        vector<pair<int,int>>nums3(n);

        for(int i=0;i<n;i++){
            nums1[i]=make_pair(a[i],i);
            nums2[i]=make_pair(b[i],i);
            nums3[i]=make_pair(c[i],i);
        }
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        sort(nums3.begin(),nums3.end());

        long long final_ans=LLONG_MIN;
        for(int i=n-1;i>=n-3;i--){
            for(int j=n-1;j>=n-3;j--){
                if(nums1[i].second!=nums2[j].second){
                    for(int k=n-1;k>=n-3;k--){
                        if(nums1[i].second!=nums3[k].second && nums2[j].second!=nums3[k].second){
                            final_ans=max(final_ans,1LL*(nums1[i].first+nums2[j].first+nums3[k].first));
                        }
                    }
                }
                
            }
        }
        cout<<final_ans<<endl;
    }
}