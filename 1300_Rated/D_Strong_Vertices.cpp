#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;

        vector<long long>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<long long>b(n);
        for(int i=0;i<n;i++)cin>>b[i];

        vector<pair<long long,int>>temp;
        for(int i=0;i<n;i++){
            temp.push_back({a[i]-b[i],i+1});
        }

        sort(temp.begin(),temp.end());
        int count=1;
        int i=n-1;
        while(i>0){
            if(temp[i].first==temp[i-1].first){
                count++;
                i--;
            }
            else break;
        }

        cout<<count<<endl;
        for(int j=i;j<n;j++){
            cout<<temp[j].second<<" ";
        }cout<<endl;

    }

    return 0;
}