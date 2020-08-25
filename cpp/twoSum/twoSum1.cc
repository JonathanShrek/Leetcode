/* First attempt
 * 1344 ms faster than 5.03% 
 * 9 MB less than 96.11%
 *
 * Author: Jonathan Shreckengost
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        
        for (int i = 0; i < nums.size(); i++) {
            int num = nums.at(i);
            
            for (int j = 0; j < nums.size(); j++) {
                if (num + nums.at(j) == target && i != j) {
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
            }
            
            if (!answer.empty()) {
                break;
            }
        }
        
        return answer;
    }
};
