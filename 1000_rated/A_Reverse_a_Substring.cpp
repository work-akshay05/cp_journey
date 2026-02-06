/*
    basically we have to create a solution jiss mai we need to create two veriables one is the minimum and other one is maximum and uss mai se hume koi aisa dundhna hai jo ki maximum se chota ho vo minimum ke equal bhi ho skta hai but maximum se chota mila vahi ho geya kaam usska
    index print hi to krna hai bs

    basically ek prefix array create krna hai jiss mai mujhe bs bs unnke maximum and minimum store krne hai and jo maximum ka index bhi store krna hai  
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int maxi=s[0]-'0';
    int mini=s[0]-'0';
    int maxiId=0+1;
    bool check=false;
    for(int i=1;i<n;i++){
        if(s[i]-'0'<maxi){
            cout<<"Yes"<<endl;
            cout<<maxiId<<" "<<i+1<<endl;
            check=true;
            break;
        }
        else {
            maxiId=i+1;
            maxi=s[i]-'0';
        }
    }
    if(!check)cout<<"NO"<<endl;
}