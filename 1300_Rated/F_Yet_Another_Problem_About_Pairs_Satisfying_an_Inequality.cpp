/*
 PBDS naam ka ek ordered set jo ki allow krta hai hume to access get the number of elements less then the number we want to check, jo ki normal set nhi krne deta hai
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update
> pbds;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];


        pbds st;
        long long ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]<i+1){
                ans+=st.order_of_key(nums[i]);
                st.insert(i+1);
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}