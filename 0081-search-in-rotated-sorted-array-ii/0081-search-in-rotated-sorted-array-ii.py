class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        l = 0
        r = len(nums) - 1

        while l <= r:
            mid = (l + r) // 2

            # Found target
            if nums[mid] == target:
                return True

            # Duplicates make it impossible to know
            # which side is sorted, so shrink both sides
            if nums[l] == nums[mid] == nums[r]:
                l += 1
                r -= 1
                continue

            # Left half is sorted
            if nums[l] <= nums[mid]:

                # Target lies in the left sorted half
                if nums[l] <= target < nums[mid]:
                    r = mid - 1
                else:
                    l = mid + 1

            # Right half is sorted
            else:

                # Target lies in the right sorted half
                if nums[mid] < target <= nums[r]:
                    l = mid + 1
                else:
                    r = mid - 1

        return False