#include <iostream>
#include <vector>
#include <cmath>
#include <set>
using namespace std;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        multiset<int> window;
        for (int i = 0; i < nums.size(); i++) {
            if (window.size() > k)
                window.erase(nums[i-k-1]);
            auto lb = window.lower_bound(nums[i] - t);
            if (lb != window.end() && abs(*lb - nums[i]) <= t)
                return true;
            window.insert(nums[i]);
        }
        return false;
    }
};

int main(void) {
    return 0;
}
