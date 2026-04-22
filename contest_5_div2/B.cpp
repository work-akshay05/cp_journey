#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        int left=0;
        int right=0;
        bool check=false;
        int j=1;
        
        while(j<n){
            if(s[j]==s[j-1]){
                if(left>right){
                    right++;
                }
                else left++;
            }
            if(max(left,right)>=2){
                cout<<"NO"<<endl;
                check=true;
                break;
            }
            
            j++;
        }

        if(!check){
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
