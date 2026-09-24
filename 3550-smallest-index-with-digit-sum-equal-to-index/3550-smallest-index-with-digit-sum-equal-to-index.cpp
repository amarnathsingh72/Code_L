class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            int sum = 0;
            // extract kar re aur add kar re
            while(x > 0){
                sum += x % 10;
                x /= 10;
            }
            //check kar re same ha kya naho bolke 
            if(sum == i) return i;
        }
        return -1;
    }
};