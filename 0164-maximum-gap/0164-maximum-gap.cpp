class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        
        int a = 0;
        if(n == 1) {
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-1; i++) {
            int diff = nums[i+1]-nums[i];
            if(a <diff) {
                a = diff;
            }
        }
        return a;
    }
};