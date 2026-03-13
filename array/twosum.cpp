#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i = 0; i < nums.size(); i++){
            int res = k - nums[i];
            if(m.find(res) != m.end()){
                return {m[res], i};
            } else {
                m[nums[i]] = i;
            }
        }
        return {};
    }
};

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    vector<int> ans = sol.twoSum(nums, k);

    if(!ans.empty()) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "-1 -1" << endl;
    }
}
