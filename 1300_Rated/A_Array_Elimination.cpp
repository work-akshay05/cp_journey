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

        vector<int>sbit(30,0);
        int x=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)x++;
            else {
                for(int j=0;j<30;j++){
                    if((nums[i]&(1<<j))!=0){
                        sbit[j]++;
                    }
                }
            }
            
        }

        int g = 0;
        for (int i = 0; i < 30; i++) {
            g = __gcd(g, sbit[i]);
        }

        if (g == 0) {
            for (int k = 1; k <= n; k++) cout << k << " ";
            cout << '\n';
        } else {
            for (int k = 1; k <= g; k++) {
                if (g%k==0) cout << k << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}