#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        if(n%2==0){
            nums[n-1]=1;
            for(int i=n-2;i>=0;i--){
                if(i%2==0){
                    nums[i]=nums[i+1]+(i+1);
                }
                else if(i%2!=0){
                    nums[i]=nums[i+1]-(i+1);
                }
            }

            for(int i=0;i<n;i++){
                cout<<nums[i]<<" ";
            }cout<<endl;
        }
        else {
            nums[n-1]=1;
            for(int i=n-2;i>=0;i--){
                if(i%2!=0){
                    nums[i]=nums[i+1]+(i+1);
                }
                else if(i%2==0){
                    nums[i]=nums[i+1]-(i+1);
                }
            }

            for(int i=0;i<n;i++){
                cout<<nums[i]<<" ";
            }cout<<endl;
        }
        
    }
}