//we don't have any number of tourch initially means hume x-1 stick mil jaayenge and ystick deke hume 1 coal mil jaygea 
/*
    for 2,1,5 means 1 stick milega har baar 
    hume total stick chahiye 5+5*1
    1*10 time trade krna parega
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        long long x,y,z;
        cin>>x>>y>>z;

        long long div=((1LL*y*z+z-1)+(x-1)-1)/(x-1);
        long long ans=div+z;
        cout<<ans<<endl;
    }
}