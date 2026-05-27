#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;

void solve(int n,int q, vector<pair<int,int>>&que){
    unordered_map<int,int>mp;
    ordered_set<pair<int,int>>st;
    for(int i=0;i<q;i++){
        int s=que[i].first;
        int indi=que[i].second;
        if(s==1){
            if(mp[indi]!=0){
                auto it=st.find({mp[indi],indi});
                st.erase(it);
                mp[indi]++;
                st.insert({mp[indi],indi});
            }
            else{
                mp[indi]++;
                st.insert({mp[indi],indi});
            }

            if(mp.size()==n){
                for(auto p : mp){
                    auto it = st.find({p.second, p.first});
                    if(it != st.end()){
                        pair<int,int> temp = *it;
                        st.erase(it);
                        st.insert({temp.first - 1, temp.second});
                    }
                }
                mp.clear();
            }
        }
        else {
            cout<<st.order_of_key({indi,-1e9})<<endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n>>q;

    vector<pair<int,int>>que;
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;

        que.push_back({a,b});
    }

    solve(n,q,que);

    return 0;
}