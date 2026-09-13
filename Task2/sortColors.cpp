class Solution {
public:
    void sortColors(vector<int>& nums) {
        int leftPtr = 0;
        int searchingPtr = 0;
        int rightPtr = nums.size() - 1;

        while(searchingPtr <= rightPtr){
            if (nums[searchingPtr] < 1){
                swap(nums[searchingPtr], nums[leftPtr]);
                ++leftPtr;
                ++searchingPtr;
            } else if (nums[searchingPtr] > 1){
                swap(nums[searchingPtr], nums[rightPtr]);
                --rightPtr;
            } else {
                ++searchingPtr;
            }
        }
    }
};