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

        string s;
        cin>>s;

        // longest decreasing subsequence with counting zero and ones
        int i=0;
        int zeros=0;
        int ones=0;
        int count=0;
        while(i<n-1){
            if(s[i]>=s[i+1]){
                while(s[i]>=s[i+1]){
                    if(s[i]=='0')zeros++;
                    else ones++;

                    i++;
                }
            }
            else {
                if(zeros>=1 && ones>=1)count++;
                zeros=0;
                ones=0;
            }
            i++;
        }

    }

    return 0;
}