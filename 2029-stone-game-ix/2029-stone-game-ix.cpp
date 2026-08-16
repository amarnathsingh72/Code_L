class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {};

        for (int x : stones) {
            ++cnt[x % 3];
        }

        // If one of the remainder-1/remainder-2 groups is empty,
        // Alice is forced to start with the other group.
        if (min(cnt[1], cnt[2]) == 0) {
            return max(cnt[1], cnt[2]) > 2 && cnt[0] % 2 == 1;
        }
        // Both remainder types exist.
        return abs(cnt[1] - cnt[2]) > 2 || cnt[0] % 2 == 0;
    }
};