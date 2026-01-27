#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num,vector<int>&temp){
    bool check=true;
    for(int i=0;i<temp.size();i++){
        if(temp[i]*temp[i]>num){
            break;
        }
        if(num%temp[i]==0){
            check=false;
            break;
        }
    }

    return check;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        vector<int>temp={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139};
        int num1=0;
        for(int i=1+x;;i++){
            if(isPrime(i,temp)){
                num1=i;
                break;
            }
        }

        int num2=0;
        for(int j=num1+x;;j++){
            if(isPrime(j,temp)){
                num2=j;
                break;
            }
        }

        cout<<num1*num2<<endl;

    }
}