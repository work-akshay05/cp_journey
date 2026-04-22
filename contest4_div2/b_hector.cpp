// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         long long m;
//         cin>>n>>m;

//         vector<long long>nums(n);
//         for(int i=0;i<n;i++)cin>>nums[i];
//         bool check=true;
//         int i=1;
//         long long timer=0;
//         while(i<n){
//             long long curr=nums[i];
//             long long cal=(curr+timer+1)%m;
//             if(cal==0){
//                 long long cal2=(nums[i-1]+timer+1)%m;
//                 if(cal2==0){
//                     if(i-2>=0){
//                         long long cal3=(nums[i-2]+timer+1)%m;
//                         if(cal3==0){
//                             cout<<"NO"<<endl;
//                             check=false;
//                             break;
//                         }
//                         else {
//                             i=i-1;
//                         }
//                     }
//                     else{
//                         cout<<"NO"<<endl;
//                         check=false;
//                         break;
//                     }
//                 }
//             }
//             else {
//                 i++;
//             }
//             timer++;
//         }
//         if(check){
//             cout<<"YES"<<endl;
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        long long m;
        cin>>n>>m;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        int i=0;
        int j=0;
        int count=1;
        while(j<n-1){
            if(nums[j+1]==nums[j]){
                j++;
            }
            else {
                count=max(j-i+1,count);
                j++;
                i=j;
            }
        }
        count=max(j-i+1,count);

        if(count>=m){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}