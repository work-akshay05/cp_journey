#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if(n%2==0){
        cout<<(n/2+1)*(n/2+1)<<endl;
    }else{
        cout<<2*(n/2+1)*(n/2+2)<<endl;
    }
    return 0;
}