/**
 * @normal_mex_calculation
 * @freq(size=n+2)
 * for (int i = 0; i < n; i++) {
        if (0 <= temp[i] && temp[i] <= n + 1) {
            freq[temp[i]]++;

            while (mex <= n + 1 && freq[mex] > 0)
                mex++;
        }
        ans += (maxi + mex);
    }
 */

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& nums) {
    int n = nums.size();

    vector<int> freq(100001, 0);
    vector<int> touched;
    // running mex finder
    auto add = [&](int x, int &curMex) {
        if (freq[x] == 0)
            touched.push_back(x);

        freq[x]++;

        while (curMex < 100001 && freq[curMex] > 0)
            curMex++;
    };

    auto clearFreq = [&]() {
        for (int x : touched)
            freq[x] = 0;
        touched.clear();
    };

    int ans = 0;

    int i = 0;
    while (i < n) {
        int curMex = 0;

        add(nums[i], curMex);

        int j = 1;

        while (i + j < n && i - j >= 0) {
            if (nums[i + j] == nums[i - j]) {
                add(nums[i + j], curMex);
                j++;
            } else {
                break;
            }
        }

        ans = max(ans, curMex);

        clearFreq();

        i += j;
    }

    int k = 0;

    while (k < n - 1) {

        if (nums[k] == nums[k + 1]) {

            int curMex = 0;

            add(nums[k], curMex);

            int c = 1;

            while (k - c >= 0 && k + c + 1 < n) {

                if (nums[k - c] == nums[k + c + 1]) {
                    add(nums[k - c], curMex);
                    c++;
                } else {
                    break;
                }
            }

            ans = max(ans, curMex);

            clearFreq();

            k += c + 1;
        }
        else {
            k++;
        }
    }

    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;

        vector<int>nums(2*n);
        for(int i=0;i<2*n;i++){
            cin>>nums[i];
        }

        cout<<solve(nums)<<endl;
    }

    return 0;
}