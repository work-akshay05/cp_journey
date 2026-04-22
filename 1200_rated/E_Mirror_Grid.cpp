#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<string> nums(n);
        for(int i=0;i<n;i++){
            cin >> nums[i];
        }
        

        int count=0;
        for(int i=0;i<(n+1)/2;i++){
            for(int j=0;j<n/2;j++){
                unordered_map<char,int>mp;
                int x=n-i-1;
                int y=n-j-1;
                mp[nums[i][j]]++;
                mp[nums[j][x]]++;
                mp[nums[x][y]]++;
                mp[nums[y][i]]++;
                count+=min(mp['1'],mp['0']); 
            }
        }
        cout<<count<<endl;
    }
}