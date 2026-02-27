// #include<bits/stdc++.h>
// using namespace std;
// unordered_map<long long,long long>mp;
// void cal(long long x){
//     for(long long i=1;i*i<=x;i++){
//         if(x%i==0){
//             if(i==x/i){
//                 mp[i]++;
//             }
//             else {
//                 mp[i]++;
//                 mp[x/i]++;
//             }
//         }
//     }
// }
// void check(long long x){
//     for(auto &it:mp){
//         if(x%it.first==0){
//             it.second+=1;
//         }
//     }
// }
// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         mp.clear();
//         int n;
//         cin>>n;

//         vector<long long>nums(n);
//         for(int i=0;i<n;i++)cin>>nums[i];

//         int i=0;
//         int j=n-1;
//         long long diff=abs(nums[i]-nums[j]);
//         while(i<=j && diff==0){
//             i++;
//             j--;
//             if(i<j){
//                 diff=abs(nums[i]-nums[j]);
//             }
//         }
//         if(diff!=0){
//             cal(diff);
//         }
//         int count=1;
//         while(i<j){
//             count++;
//             check(abs(nums[j]-nums[i]));
//             i++;
//             j--;
//         }

//         long long maybe=0;
//         for(auto it:mp){
//             if(it.second==count){
//                 maybe=max(maybe,it.first);
//             }
//         }

//         cout<<maybe<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
long long update(long long a,long long b){
    if(a<b)return update(b,a);

    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }

    return a;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        long long gcd=0;
        int i=0;
        int j=n-1;
        while(i<=j){
            gcd=update(gcd,abs(nums[i]-nums[j]));
            i++;
            j--;
        }

        cout<<gcd<<endl;
    }
}