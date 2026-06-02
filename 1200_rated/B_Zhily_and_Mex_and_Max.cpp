#include<bits/stdc++.h>
using namespace std;
long long solve(vector<long long>& nums) {
    int n = nums.size();
    long long maxi = *max_element(nums.begin(),nums.end());
    map<long long,int>mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    vector<int>temp(n,0);
    temp[0]=maxi;
    mp[maxi]--;
    int i=1;
    for(auto &it:mp){
        if(it.second>=1){
            temp[i]=it.first;
            it.second-=1;
            i++;
        }
    }

    for(auto &it:mp){
        int x=it.second;
        while(x--){
            temp[i]=it.first;
            i++;
        }
    }
    
    vector<int> freq(n + 2, 0);

    long long ans = 0;
    int mex = 0;
    for (int i = 0; i < n; i++) {
        if (0 <= temp[i] && temp[i] <= n + 1) {
            freq[temp[i]]++;

            while (mex <= n + 1 && freq[mex] > 0)
                mex++;
        }

        ans += (maxi + mex);
    }

    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        cout<<solve(nums)<<endl;
    }

    return 0;
}

/*
 * @max=*max_element(arr.begin(),arr.end()) se krna hoga
 *
 *  
 */