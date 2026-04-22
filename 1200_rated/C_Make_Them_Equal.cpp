#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;

        string s;
        cin>>s;
        bool temp=true;
        for(int i=0;i<n;i++){
            if(s[i]!=c)temp=false;
        }
        if(temp){
            cout<<0<<endl;
        }
        else {
            bool found=false;
            for(int i=1;i<n+1;i++){
                bool check=0;
                for(int j=i;j<n+1;j+=i){
                    check+=(s[j-1]!=c);
                }
                if(check==0){
                    cout<<1<<endl;
                    cout<<i<<endl;
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
    }

    return 0;
}