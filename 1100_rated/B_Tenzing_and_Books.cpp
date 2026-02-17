#include<bits/stdc++.h>
using namespace std;
bool check(long long a, vector<int>&zeros){
    bool ans=true;
    for(int i=0;i<zeros.size();i++){
        if((a&(1<<zeros[i]))!=0){
            ans=false;
            break;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        long long x;
        cin>>n>>x;

        vector<long long>numsa(n);
        for(int i=0;i<n;i++)cin>>numsa[i];

        vector<long long>numsb(n);
        for(int i=0;i<n;i++)cin>>numsb[i];

        vector<long long>numsc(n);
        for(int i=0;i<n;i++)cin>>numsc[i];

        int msb=0;
        for(int i=31;i>=0;i--){
            if((x&(1<<i))!=0){
                msb=i;
                break;
            }
        }

        vector<int>zeros;
        for(int i=0;i<msb;i++){
            if((x&(1<<i))==0){
                zeros.push_back(i);
            }
        }
        bool final=false;
        long long curr=0;
        for(int i=0;i<n;i++){
            if(numsa[i]<=x && check(numsa[i],zeros)){
                curr|=numsa[i];
                if(curr==x){
                    final=true;
                }
            }else {
                break;
            }
        }

        for(int i=0;i<n;i++){
            if(numsb[i]<=x && check(numsb[i],zeros)){
                curr|=numsb[i];
                if(curr==x){
                    final=true;
                }
            }else {
                break;
            }
        }

        for(int i=0;i<n;i++){
            if(numsc[i]<=x && check(numsc[i],zeros)){
                curr|=numsc[i];
                if(curr==x){
                    final=true;
                }
            }else {
                break;
            }
        }

        if(final || x==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}