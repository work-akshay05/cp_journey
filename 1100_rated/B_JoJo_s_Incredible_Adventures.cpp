#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        int count=0;
        int temp=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                temp++;
            }
            else {
                count=max(count,temp);
                temp=0;
            }
        }
        if(temp!=0){
            count=max(count,temp);
        }

        int count2=0;
        int i=0;
        while(i<n && s[i]!='0'){
            count2++;
            i++;
        }

        int count3=0;
        i=n-1;
        while(i>=0 && s[i]!='0' ){
            count3++;
            i--;
        }

        if(count==n){
            cout<<(long long)n*n<<endl;
            continue;
        }
        
        count=max(count,count2+count3);
        if(count>0 && count<n){
            int half=count/2;
            if(count%2==0){
                cout<<(long long)half*(half+1)<<endl;
            }else{
                cout<<(long long)(half+1)*(half+1)<<endl;
            }
        }
        else {
            cout<<0<<endl;
        }

    }
}