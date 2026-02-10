/*
    agar mere pass phle to a[i] lena hi hoga but usske baad check bhi krna parega hi ki kidhar jaana hai usske lie kuch to krna parega bs vahi nhi soch paa raha hu

    TC=>1
    4 7
    4 3 1 2
    1 1 1 1

    iss mai to humne jaise dekha ki 
    vaise iss mai bhi dp se to socha hi jaa skta hai ki yaa to hum vo ith pe a[i] element le skte hai yaa fir hum usske piche vaale mai b[i] le skte hai

    but vo chala jaayge 2^n issko agar mai 
    issko ek baar recursion ki trh soch skta hu 
     mujhe start to krna hai 0 se hi but jab mai aage badhu to mujhe check krte jaana hai ki kon sa bada hai and ussko choose krna hai bs 

     4,3,1,2
     1 1 1 1
     ans+=4 i=1 mujhe kon sa lena chahiye ye sirf do ele ke compare pe depend nhi krega balki aage kaise number aane vaale hai unn pe bhi krega ye kaise check kr skta hu mai
     cmp(1,3) 
     ans to long long mai hi aayega
     agar ye DP se solve krna hota tab to ho jaata but ye DP se solve nhi hoga, sorting se bhi nhi lag raha, BS se bhi 
     11,14,15,14,14=15
    
     */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>numsa(n);
        vector<int>numsb(n);
        for(int i=0;i<n;i++)cin>>numsa[i];
        for(int i=0;i<n;i++)cin>>numsb[i];



        long long ans=0;
        int maxi=INT_MIN;
        for(int i=1;i<n;i++)numsa[i]=numsa[i]+numsa[i-1];

        for(int i=0;i<min(n,k);i++){
            maxi=max(numsb[i],maxi);
            ans=max(ans,1LL*(numsa[i]+(k-(i+1))*maxi));
        }

        cout<<ans<<endl;
    }
}