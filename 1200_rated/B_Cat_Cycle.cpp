#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin>>n>>k;

        if(n%2==0){
            long long rem=k%n;
            if(rem==0){
                cout<<n<<endl;
            }
            else {
                cout<<rem<<endl;
            }
        }
        else {
            long long plot=(n-1)/2;
            long long rem=(k-1)/plot;

            long long pos=(k+rem)%n;
            if(pos==0){
                cout<<n<<endl;
            }
            else {
                cout<<pos<<endl;
            }
        }
    }

    return 0;
}