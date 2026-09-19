class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26];
// agar dono ka length same i nahi raha tho false return ka rdena.
        if (s.length() != t.length()) {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};