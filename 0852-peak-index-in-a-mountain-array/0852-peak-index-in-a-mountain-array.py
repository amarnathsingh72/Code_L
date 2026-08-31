class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        l=0
        r=len(arr)-1
        while l<r:
            m=(l+r)//2
            if arr[m]<arr[m+1]:
                l=m+1
            else:
                r=m
        return r #L or R both are okay.  12345431ismai mid lete aur mid ke pehelr toh ans nahi rehta, then aage kuch karte