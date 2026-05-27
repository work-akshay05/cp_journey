#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>mp;
bool solve(long long n){
    for(int i=2;i*i<n;i++){
        if(n%i==0 && 
            mp.find(n/i)==mp.end() &&
            mp.find(i)==mp.end()){
                if(mp.size()==1){
                    mp[i]++;
                    mp[n/i]++;
                    return true;
                }
                else{
                    mp[i]++;
                    if(solve(n/i)){
                        return true;
                    }
                    else return false;
                }
        }
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        mp.clear();
        long long n;
        cin>>n;

        bool check=solve(n);
        if(check){
            cout<<"Yes"<<endl;
            vector<int>temp;
            for(auto it:mp){
                temp.push_back(it.first);
            }
            sort(temp.begin(),temp.end());
            for(int i=0;i<temp.size();i++){
                cout<<temp[i]<<" ";
            }cout<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}