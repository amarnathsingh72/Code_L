
class Solution:

    def shipWithinDays(self, weights: list[int], days: int) -> int:

        def fun(c):
            day = 1
            total = 0

            for i in weights:
                if total + i <= c:
                    total += i
                else:
                    day += 1
                    total = i

            return day <= days

        l = max(weights)
        r = sum(weights)
        ans = 0
# using the binary search uing 
        while l <= r:
            mid = (l + r) // 2

            if fun(mid):
                ans = mid
                r = mid - 1
            else:
                l = mid + 1

        return ans


