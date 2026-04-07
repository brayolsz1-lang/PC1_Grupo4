#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        
        do {
        	int n = numbers[left] + numbers[right];
        	if(n == target){
        		return {left + 1, right + 1};
        	} else if(n < target){
        		left++;
        	} else if(n > target){
        		right--;
        	}
        } while(left < right);
        return {};
    }
};

void runTests() {
    Solution sol;
    
    // Test 1
    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> res1 = sol.twoSum(nums1, 9);
    assert(res1.size() == 2);
    assert(res1[0] == 1);
    assert(res1[1] == 2);
    
    // Test 2
    vector<int> nums2 = {2, 3, 4};
    vector<int> res2 = sol.twoSum(nums2, 6);
    assert(res2[0] == 1);
    assert(res2[1] == 3);
    
    // Test 3
    vector<int> nums3 = {-1, 0};
    vector<int> res3 = sol.twoSum(nums3, -1);
    assert(res3[0] == 1);
    assert(res3[1] == 2);
    
    cout << "✅ Todos los tests pasaron" << endl;
}

int main() {
    runTests();
    return 0;
}