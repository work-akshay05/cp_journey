#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        vector<pair<int,int>>freq;
        int curr=nums[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i]==curr){
                count++;
            }
            else if(nums[i]!=curr){
                freq.push_back({curr,count});
                curr=nums[i];
                count=1;
            }
        }
        freq.push_back({curr,count});


        bool check=true;
        for(int i=0;i<freq.size();i++){
            if(freq[i].second==1){
                check=false;
            }
        }
        if(!check){
            cout<<-1<<endl;
        }
        else{
            int till=0;
            for(int i=0;i<freq.size();i++){
                cout<<freq[i].second+till<<" ";
                int temp=till+1;
                for(int j=0;j<freq[i].second-1;j++){
                    cout<<temp<<" ";
                    temp++;
                }
                till+=freq[i].second;
            }
        }
    }
}
// [2,2,3,3,3,4,4]
// tempi=0;
// {(2,2),(3,3),(4,2)}
// i=0; tempi=0; 2+0, 0+1 tempi=1
// i=1 tempi=2; 3+2, 2+1 , 3+1 tempi=3
// i=2 tempi=3; +3  
