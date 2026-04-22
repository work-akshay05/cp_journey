#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        int m;
        cin >> n >> m;

        vector<long long> nums(m);
        for(int i = 0; i < m; i++) cin >> nums[i];

        sort(nums.begin(), nums.end());

        vector<long long> gaps;

        for(int i = 0; i < m; i++){
            int j = (i + 1) % m;
            long long gap;

            if(j == 0){
                gap = nums[0] + n - nums[i] - 1;
            } else {
                gap = nums[j] - nums[i] - 1;
            }

            if(gap > 0) gaps.push_back(gap);
        }

        sort(gaps.rbegin(), gaps.rend());

        long long saved = 0;
        long long days = 0;

        for(auto gap : gaps){
            gap -= 2 * days;

            if(gap <= 0) continue;

            if(gap == 1){
                saved += 1;
                days += 1;
            } else {
                saved += gap - 1;
                days += 2;
            }
        }

        cout << n - saved << endl;
    }
}