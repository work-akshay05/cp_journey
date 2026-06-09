/*problem 1 breed counting Usaco*/

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     freopen("bcount.in", "r", stdin);
//     freopen("bcount.out", "w", stdout);

    
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, q;
//     cin >> n >> q;

//     vector<vector<int>> nums(n + 1, vector<int>(3, 0));
    
//     int o = 0, t = 0, th = 0;
//     for(int i = 1; i <= n; i++){
//         int x;
//         cin >> x;
//         if(x == 1) o++;
//         else if(x == 2) t++;
//         else th++;

//         nums[i] = {o, t, th};
//     }

//     for(int i = 0; i < q; i++){
//         int l, r;
//         cin >> l >> r;
        
        
//         cout << nums[r][0] - nums[l-1][0] << " "
//              << nums[r][1] - nums[l-1][1] << " "
//              << nums[r][2] - nums[l-1][2] << "\n"; 
//     }
    
//     return 0;
// }


/*problem 2 alternating string 2d prefix sum*/
#include<bits/stdc++.h>
using namespace std;
int oddsolve(int n,string &s){
    vector<vector<int>>temp(n+1,vector<int>(26,0));
    for(int i=1;i<=n;i++){
        if(i>=2){
            temp[i] = temp[i-2];
        }
        temp[i][s[i-1]-'a']++;
    }

    int count=INT_MAX;
    for(int i=1;i<n+1;i++){
        int omaxi=0;
        int emaxi=0;
        if(i%2==0){
            for(int j=0;j<26;j++){
                emaxi=max(emaxi,temp[i-2][j]+(temp[n][j]-temp[i-1][j]));
                omaxi=max(omaxi,temp[i-1][j]+(temp[n-1][j]-temp[i][j]));
            }
        }
        else if(i%2!=0){
            if(i-2>=0){
                for(int j=0;j<26;j++){
                    omaxi=max(omaxi,temp[i-2][j]+(temp[n-1][j]-temp[i-1][j]));
                    emaxi=max(emaxi,temp[i-1][j]+(temp[n][j]-temp[i][j]));
                }
            }
            else {
                for(int j=0;j<26;j++){
                    omaxi=max(omaxi,(temp[n-1][j]-temp[i-1][j]));
                    emaxi=max(emaxi,temp[i-1][j]+(temp[n][j]-temp[i][j]));
                }
            }
        }

        count=min(count,(((n-1)/2)-emaxi)+(((n-1)/2)-omaxi));
    }

    return count+1;
}

int evensolve(int n,string &s){
    vector<vector<int>>temp(n+1,vector<int>(26,0));
    for(int i=1;i<=n;i++){
        if(i>=2){
            temp[i] = temp[i-2];
        }
        temp[i][s[i-1]-'a']++;
    }

    int emaxi=0;
    int omaxi=0;
    for(int i=0;i<26;i++){
        emaxi=max(emaxi,temp[n][i]);
        omaxi=max(omaxi,temp[n-1][i]);
    }
    int mid=n/2;
    return 2*mid-(emaxi+omaxi);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;

        // table formation
        if(n%2==0){
            cout<<evensolve(n,s)<<"\n";
        }
        else {
            cout<<oddsolve(n,s)<<"\n";
        }
    }

    return 0;
}
