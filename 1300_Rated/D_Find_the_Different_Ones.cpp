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

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        vector<int>diffPos;
        for(int i=0;i+1<n;i++){
            if(nums[i]!=nums[i+1]) diffPos.push_back(i+1); // 1-based index of first element in differing adjacent pair
        }

        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int x,y;
            cin>>x>>y;
            auto it=lower_bound(diffPos.begin(),diffPos.end(),x);
            if(it!=diffPos.end() && *it<y){
                cout<<*it<<" "<<(*it+1)<<'\n';
            }else{
                cout<<-1<<" "<<-1<<'\n';
            }
        }
        cout<<'\n';
    }

    return 0;
}