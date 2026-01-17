#include<bits/stdc++.h>
using namespace std;
int fn(int n,vector<int>&a,vector<int>&b){
    unordered_map<int,int>mp1;
    int curr=a[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(a[i]==curr){
            count++;
        }
        else {
            if(mp1.find(curr)!=mp1.end()){
                mp1[curr]=max(count,mp1[curr]);
                curr=a[i];
                count=1;
            }else {
                mp1[curr]=count;
                curr=a[i];
                count=1;
            }
        }
    }
    mp1[curr]=max(mp1[curr],count);
    curr=b[0];
    count=1;
    unordered_map<int,int>mp2;
    for(int i=1;i<n;i++){
        if(b[i]==curr){
            count++;
        }
        else {
            if(mp2.find(curr)!=mp2.end()){
                mp2[curr]=max(count,mp2[curr]);
                curr=b[i];
                count=1;
            }else {
                mp2[curr]=count;
                curr=b[i];
                count=1;
            }
        }
    }
    mp2[curr]=max(mp2[curr],count);

    for(auto it:mp1){
        if(mp2.find(it.first)==mp2.end()){
            mp2[it.first]=it.second;
        }
        else{
            mp2[it.first]=mp2[it.first]+it.second;
        }
    }

    int ans=INT_MIN;
    for(auto it:mp2){
        ans=max(ans,it.second);
    }

    return ans;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        cout<<fn(n,a,b)<<endl;
    }
}