/*
    sochna dp se start krna tha tree bna ke but baad mai notice krna tha ki length wise kaise change ho raha ussko kaise encounter kr skte hai
    abcab
    iss mai agar hume different 3 length ke chahiye honge to hum 
    aad,bad,cad hi bna skte hai notice ye krna tha ki 3rd length ke lie number of distinct element vaha tak jo aaye vo hong jaise a,b,c aaya and a and d to fix hi rahenge 
    
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int count=0;
        unordered_set<char>st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            count+=st.size();
        }
        cout<<count<<endl;
    }
}