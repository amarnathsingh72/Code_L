class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();
// pehele dona ka length lerna
        int a[n + m];
// ab a mai num1 ko dal dena 
        for(int i = 0; i < n; i++) {
            a[i] = nums1[i];
        }
// abhi bake jo hai wo sare num2 ke dal dena 
        // Copy nums2
        for(int i = 0; i < m; i++) {
            a[n + i] = nums2[i];
        }
// sort k
        // Sort
        sort(a, a + n + m);

        int total = n + m;

        // Median
        if(total % 2 == 1) {
            return a[total / 2];
            // odd hai toh bich mai ka deta
        }
        else {
            return (a[total / 2 - 1] + a[total / 2]) / 2.0;
        }
    }
};