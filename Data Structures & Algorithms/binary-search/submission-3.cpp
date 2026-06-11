class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
        int mid = left + (right - left) / 2;


        if(nums[mid] == target){
            return mid; // check the middle
        }

        if(nums[mid] < target){
            left = mid + 1; // If target is greater than middle check the right
        }
 
        else{
            right = mid - 1; // If target is greater than middle check the left
        }
    }

    return -1;
}


};