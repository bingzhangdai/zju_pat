#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while (i < j) {
            auto sum = numbers[i] + numbers[j];
            if (sum > target)
                j--;
            else if (sum < target)
                i++;
            else break;
        }
        return vector<int> {i+1, j+1};
    }
};

int main(void) {
    return 0;
}
