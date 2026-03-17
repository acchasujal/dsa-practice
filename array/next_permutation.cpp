#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& n) {
        int i = n.size() - 2;
        int j = n.size() - 1;
        while (i >= 0 && n[i] >= n[i + 1]) i--;
        if (i >= 0) {
            while (n[j] <= n[i]) j--;
            swap(n[i], n[j]);
        }
        reverse(n.begin() + i + 1, n.end());
    }
};

int main() {
    int n;
    cin >> n; // size of array
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    Solution sol;
    sol.nextPermutation(nums);

    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}