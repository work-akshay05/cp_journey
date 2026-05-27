#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    for(int i = 1; i < n; i++) {

        if(s[i] == s[i-1]) {

            for(char ch = 'a'; ch <= 'z'; ch++) {

                if(ch != s[i-1] && (i+1 == n || ch != s[i+1])) {
                    s[i] = ch;
                    break;
                }
            }
        }
    }

    cout << s << endl;
}