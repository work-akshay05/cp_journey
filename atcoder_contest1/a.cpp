#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s="HelloWorld";
    int x;
    cin >> x;
    
    for(int i=0;i<x-1;i++){
        cout<<s[i];
    }
    for(int i=x;i<s.size();i++){
        cout<<s[i];
    }cout<<endl;

    return 0;
}