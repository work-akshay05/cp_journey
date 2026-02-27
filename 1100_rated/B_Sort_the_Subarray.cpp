#include<bits/stdc++.h>
using namespace std;
unordered_map<int,set<int>>mp;
int main(){
    int t;
    cin>>t;

    while(t--){
        mp.clear();
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]].insert(i);
        }
        
        vector<int>b(n);
        for(int i=0;i<n;i++)cin>>b[i];

        int mini=-1;
        int maxi=-1;
        int i=0;
        while(i<n){
            auto &curr=mp[b[i]];
            int curr_i=*curr.begin();  //o(1) mai element find kr skte hai
            if(curr_i==i){
                curr.erase(curr.begin());  // O(log n) to remove
            }
            else{
                if(mini==-1){
                    mini=i;
                    maxi=curr_i;
                }else maxi=max(maxi,curr_i);

                curr.erase(curr.begin());
            }
            i++;
        }

        sort(a.begin()+mini,a.begin()+maxi+1);

        int min_val=b[mini];
        i=mini-1;
        while(i>=0){
            if(a[i]<=min_val){
                min_val=a[i];
                mini=i;
                i--;
            }else break;
        }

        int max_val=b[maxi];
        i=maxi+1;
        while(i<n){
            if(a[i]>=max_val){
                max_val=a[i];
                maxi=i;
                i++;
            }else break;
        }

        cout<<mini+1<<" "<<maxi+1<<endl;
    }
}