/*
i+j<=10
a[i]a[j]<=10
a[j]<=10/a[i]
i=1 a[i]=3
a[j]<=10/3
a[j]<=3
1,2,3
we only have 1,2 so 2 pairs possible

if a[i]=1
a[j]<=10
1,2,3,4,5,6,7,8,9
socha to tha maine multiple ka but vo lag raha tha ki TC ko cross krega but aisa nhi hai because of cieve algo
n+n/2+n/3+n/4+n/5...=n(logn)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];
        int ans=0;
        for(int i=0;i<n;i++){
            int curr=nums[i];
            int j=curr;
            while(j<=(2*n)){
                int diff=j-(i+1);
                if(diff>n)break;
                if(diff>i+1 && nums[(j-(i+1))-1]==(j/curr)){
                    ans++;
                }
                j+=curr;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

// [3,1]
// i=0; curr=3
// j=3
// 3<=4{
//     diff=3-(1)=2
//     nums[1]=3/3=1
//     pair+=1
// }
// j==6
// i=1;
// curr=1;
// j=1;
// 3<=4{
//     diff=1-(2)
//     diff<0
//     j+=1;
//     diff=0 
//     j+1
//     diff=3-(2)=1
//     nums[0]=j
// }
