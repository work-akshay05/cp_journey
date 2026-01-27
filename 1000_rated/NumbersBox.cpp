// #include<bits/stdc++.h>
// using namespace std;
// vector<pair<int,int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int n,m;
//         cin>>n>>m;

//         vector<vector<int>>nums(n,vector<int>(m));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 cin>>nums[i][j];
//             }
//         }

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 vector<pair<int,pair<int,int>>>temp;
//                 int totalNeg=0;
//                 if(nums[i][j]<0)totalNeg++;
//                 temp.push_back({nums[i][j],{i,j}});
//                 for(int k=0;k<4;k++){
//                     int new_i=dir[k].first+i;
//                     int new_j=dir[k].second+j;
//                     if((new_i)>=0 && (new_i)<n && (new_j)>=0 && (new_j)<m){
//                         if(nums[new_i][new_j]<0)totalNeg++;
//                         temp.push_back({nums[new_i][new_j],{new_i,new_j}});
//                     }
//                 }
//                 sort(temp.begin(),temp.end());
//                 if(totalNeg%2!=0){
//                     for(int i=0;i<temp.size();i++){
//                         pair<int,pair<int,int>>curr=temp[i];
//                         int curr_i=curr.second.first;
//                         int curr_j=curr.second.second;
//                         if(i==0){
//                             if(curr.first>=0){
//                                 nums[curr_i][curr_j]=-1*curr.first;
//                             }
//                         }
//                         else {
//                             if(curr.first<0){
//                                 nums[curr_i][curr_j]=-1*curr.first;
//                             }
//                         }
//                     }
//                 }
//                 else{
//                     for(int i=0;i<temp.size();i++){
//                         pair<int,pair<int,int>>curr=temp[i];
//                         int curr_i=curr.second.first;
//                         int curr_j=curr.second.second;
//                         if(curr.first<0){
//                             nums[curr_i][curr_j]=-1*curr.first;
//                         }
//                     }
//                 }
//             }
//         }
//         int sum=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 sum+=nums[i][j];
//             }
//         }

//         cout<<sum<<endl;

//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;

        long long totalAbs = 0;
        int neg = 0;
        int minAbs = INT_MAX;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin >> x;
                if(x < 0) neg++;
                totalAbs += abs(x);
                minAbs = min(minAbs, abs(x));
            }
        }

        if(neg % 2 == 0)
            cout << totalAbs << endl;
        else
            cout << totalAbs - 2LL * minAbs << endl;
    }
}
