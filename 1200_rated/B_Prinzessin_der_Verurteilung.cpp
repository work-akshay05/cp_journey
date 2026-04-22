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

        bool check=false;
        string temp="abcdefghijklmnopqrstuvwxyz";
        //case 1(for a-z)
        for(int i=0;i<26;i++){
            if(s.find(temp[i])==string::npos){
                cout<<temp[i]<<endl;
                check=true;
                break;
            }
        } 

        if(!check){
            for(int i=0;i<26;i++){
                for(int j=0;j<26;j++){
                    string curr="";
                    curr+=char('a'+i);
                    curr+=char('a'+j);
                    if(s.find(curr)==string::npos){
                        cout<<curr<<endl;
                        check=true;
                        break;
                    }
                }
                if(check)break;
            }
        }

        if(!check){
            for(int i=0;i<26;i++){
                for(int j=0;j<26;j++){
                    for(int k=0;k<26;k++){
                        string curr = "";
                        curr += char('a' + i);
                        curr += char('a' + j);
                        curr += char('a' + k);
                        if(s.find(curr)==string::npos){
                            cout<<curr<<endl;
                            check=true;
                            break;
                        }
                    }if(check)break;
                }
                if(check)break;
            }
        }

    }

    return 0;
}