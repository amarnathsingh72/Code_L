class Solution {
public:
    int maximumLengthSubstring(string s) {
        int freq[26] = {0};
        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.length(); right++) {

            // Add current character to the window
            freq[s[right] - 'a']++;

            // If any character occurs more than 2 times,
            // shrink the window from the left
            while (freq[s[right] - 'a'] > 2) {
                freq[s[left] - 'a']--;
                left++;
            }

            // Current window is valid
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};