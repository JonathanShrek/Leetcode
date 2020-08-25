/* 
 * Attempt 2 (hashmap)
 * 32 ms faster than 43.68%
 * 10.1 MB less than 47.34%
 *
 * Author: Jonathan Shreckengost
 */


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prevMap; // {value, index}
        
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            
	    // Looks if value in hashmap matches diff
	    // Allows us to determine that these two values
	    // can be added to create target num.
            if(prevMap.count(diff)) 
                return { prevMap[diff], i };
            
	    // Adds value and index to hashmap
	    prevMap[nums[i]] = i;
        }
        
        return {};
    }
};
