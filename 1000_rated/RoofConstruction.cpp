// meri galti thi ki mai innke pattern ko dekhne laga maine khud se koi pattern bnane ka nhi socha
// 1st hona chahiye tha ki find kro ki lower bound kya hai jiss se upar jaa skta hai and but niche nhi 
// 2nd task hona chahiye pattern find krna 
// 0,1,2,3,4,5,6,7,8,9
// iss mai lowest hoga 8 tak usske niche nhi jaa skta koi bhi pattern lagaye to vo khud se bna lete hai jiss mai 8 ho raha ho
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int msb=0;
        for(int i=0;i<32;i++){
            if(((n-1)&(1<<i))!=0){
                msb=i;
            }
        }

        for(int i=pow(2,msb)-1;i>=0;i--){
            cout<<i<<" ";
        }
        for(int i=pow(2,msb);i<n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}