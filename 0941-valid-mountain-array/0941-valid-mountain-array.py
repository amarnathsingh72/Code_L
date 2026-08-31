class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        i=0
        while i<len(arr)-1 and arr[i]<arr[i+1]:
            i=i+1
        if i==0 or i==len(arr)-1: #agae shuru mai he 0 raha tho isliye condition lagaye// or bas value upper jara but niche nahi aara bole tho
            return False
        while i<len(arr)-1 and arr[i]>arr[i+1]:
            i=i+1
        if i==len(arr)-1:
            return True
        else:
            return False
# ismaitu bas increasing dekra jap teku peak value milta vaha se value decrease dek na. Agar valur increase hora and then decrease hjora bole tho wo mountain hai. 
