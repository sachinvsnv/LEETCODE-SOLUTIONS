class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
    vector<int> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        // Check if the complement exists in the hash map
        if (numToIndex.find(complement) != numToIndex.end()) {
            result.push_back(numToIndex[complement]); // Index of complement
            result.push_back(i); // Current index
            return result;
        }
        
        // Add the current number and its index to the hash map
        numToIndex[nums[i]] = i;
    }
    
    return result; // No solution found
}
};