class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26];
// agar dono ka length same i nahi raha tho false return ka rdena.
        if (s.length() != t.length()) {
            return false;
        }
// pehele ascai value - '.a' kar na, and count++ karna 
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
// ab wohi count ko minus kr te jana taki count mia  zero rahe.
        for (int i = 0; i < 26; i++) {
            // ab yaha pe check kar na count mai 0 se zayada no. hai ya nahi
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};