// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int n,k;
//         cin>>n>>k;

//         vector<int>nums(n);
//         for(int i=0;i<n;i++) cin>>nums[i];

//         unordered_map<int,int>mp;

//         int maybe = INT_MAX;
//         int lo=0, hi=n-1;

//         while(lo<=hi){
//             int mid = lo+(hi-lo)/2;
//             mp.clear();

//             int i = mid;
//             while(i<n){
//                 mp[nums[i]]++;
//                 i += (mid+1);
//             }

//             if(mp.size() <= k){
//                 maybe = mid;
//                 hi = mid - 1;
//             }else{
//                 lo = mid + 1;
//             }
//         }

//         int maybe2 = INT_MAX;
//         lo=0, hi=n;

//         while(lo<=hi){
//             int mid = lo+(hi-lo)/2;
//             mp.clear();
//             int i = 0;
//             while(i<n){
//                 mp[nums[i]]++;
//                 i += (mid+1);
//             }

//             if(mp.size() <= k){
//                 maybe2 = mid;
//                 hi = mid - 1;
//             }else{
//                 lo = mid + 1;
//             }
//         }

//         cout<<min(maybe, maybe2)<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];

        vector<int>colors[k+1];

        for(int i=1;i<=k;i++){
            colors[i].push_back(0);
        }

        for(int i=0;i<n;i++){
            colors[nums[i]].push_back(i+1);
        }

        for(int i=1;i<=k;i++){
            colors[i].push_back(n+1);
        }

        int maybe=INT_MAX;
        for(int i=1;i<=k;i++){
            priority_queue<int> pq;

            for(int j=0;j<colors[i].size()-1;j++){
                pq.push(colors[i][j+1] - colors[i][j] - 1);
            }

            int maxi=pq.top();
            pq.pop();
            if(maxi%2==0){
                pq.push(maxi/2);
                pq.push((maxi/2)-1);
            }
            else {
                pq.push(maxi/2);
                pq.push(maxi/2);
            }
            maybe = min(maybe, pq.top());
        }
        cout<<maybe<<endl;
    }
}