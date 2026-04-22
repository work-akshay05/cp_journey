#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
        int count=0;
        if(nums.size()>2){
            int o=nums[0];
            int t=nums[1];
            for(int i=2;i<nums.size();i++){
                int th=nums[i];
                if(o>t && t>th){
                    count++;
                    t=th;
                }
                else if(o<t && t<th){
                    count++;
                    t=th;
                }
                else{
                    o=t;
                    t=th;
                }
            }
            cout<<nums.size()-count<<endl;
        }
        else cout<<nums.size()<<endl;
    }
}
/*
 *
 * jaise humare koi event aaya and fir usska sab layer 1 ko dena hai usski api call 
 * req jo bhi data hoga username, organser, event ka data , relay, baaki data, phle database mai daalna hoga
 * fir jo actual goal hoga vo ai ko dena hoga 
 * kon se fir token important hai and fir vo data fetch krega 
 * fir vo steps bnayega 
 * fir 2nd layer excecute krega 
 */
/*
meta data,
event kya hai,
kya kya actions,
kya kya outcome,
*/
/*
vector db mai
data of event short term hoga,
baaki jo main data hoga ussko pastgresql
*/