/*
    itna smjh aageya ki jo divisable check krna hai a/b ka and agar vo divisable aarahe hai to jo divide krke number aaye vo bhi aage divide ho jaana chahiye by the combination of 8,4,2 
    
    agar vo initially hi fully divide nhi ho paa raha hai to tab to baat hi nhi banegi
*/
#include<bits/stdc++.h>
using namespace std;
int fn(long long a, long long b){
    if(b>a)return fn(b,a);

    if(a%b!=0)return -1;
    long long div=a/b;
    int count=0;
    bool check=true;
    while(div>1){
        if(div%8==0){
            div/=8;
            count++;
        }
        else if(div%4==0){
            div/=4;
            count++;
        }
        else if(div%2==0){
            div/=2;
            count++;
        }
        else return -1;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;

        cout<<fn(a,b)<<endl;
    }
}