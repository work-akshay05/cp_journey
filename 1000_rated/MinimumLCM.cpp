// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin>>n;

//         int lo=1;
//         int hi=n;
//         int div=0;
//         int ans=0;
//         int lcm=INT_MAX;
//         while(lo<hi){
//             int mid=lo+(hi-lo)/2;
//             if(n%mid==0){
//                 int cal=((long long)mid*mid*(1-n%mid))/min(mid,mid*(1-n%mid));
//                 if(lcm>cal){
//                     lcm=cal;
//                     ans=mid;
//                     div=n/mid;
//                 }
//                 lo=mid+1;
//             }
//             else {
//                 hi=mid;
//             }
//         }
//         cout<<ans<<" "<<(ans*(div-1))<<endl;
//     }
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int till=pow(n,0.5);
        int div=0;
        long long lcm=LLONG_MAX;
        int ans=0;
        for(int i=1;i<=till;i++){
            if(n%i==0){
                int one=i;
                int two=n/i;

                long long cal=((long long)one*(two-1));
                long long cal2=((long long)two*(one-1));

                if(lcm>cal){
                    div=two;
                    lcm=cal;
                    ans=one;
                }
                if(lcm>cal2 && one!=1){
                    div=one;
                    lcm=cal2;
                    ans=two;
                }
            }
        }
        cout<<ans<<" "<<ans*(div-1)<<endl;
    }
}