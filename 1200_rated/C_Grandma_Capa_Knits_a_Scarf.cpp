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

        string s;
        cin>>s;

        int i=0;
        int j=n-1;
        bool check=true;
        while(i<=j){
            if(s[i]!=s[j]){
                check=false;
                break;
            }
            i++;
            j--;
        }

        if(check){
            cout<<0<<endl;
        }
        else {
            char c=s[i];
            int x=i+1;
            int y=j;
            int count=1;
            bool poss1=true;
            while(x<=y){
                if(s[x]!=s[y]){
                    if(s[x]==c){
                        x++;
                        count++;
                    }
                    else if(s[y]==c){
                        y--;
                        count++;
                    }
                    else {
                        poss1=false;
                        break;
                    }
                }
                else {
                    x++;
                    y--;
                }
            }

            c=s[j];
            x=i;
            y=j-1;
            int count1=1;
            bool poss2=true;
            while(x<=y){
                if(s[x]!=s[y]){
                    if(s[x]==c){
                        x++;
                        count1++;
                    }
                    else if(s[y]==c){
                        y--;
                        count1++;
                    }
                    else {
                        poss2=false;
                        break;
                    }
                }
                else {
                    x++;
                    y--;
                }
            }

            if(poss1 && poss2){
                cout<<min(count1,count)<<endl;
            }else if(!poss1 && poss2) {
                cout<<count1<<endl;
            }
            else if(poss1 && !poss2){
                cout<<count<<endl;
            } 
            else cout<<-1<<endl;
        }
    }

    return 0;
}