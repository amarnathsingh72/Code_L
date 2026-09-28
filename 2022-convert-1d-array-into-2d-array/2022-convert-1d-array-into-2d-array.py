class Solution:
    def construct2DArray(self, original: list[int], m: int, n: int) -> list[list[int]]:
        if len(original)!=m*n:
            return []

        a=[[0]*n for i in range(m)]
        index=0
        for i in range(len(a)):
            for j in range(len(a[0])):
                a[i][j]=original[index]
                index+=1
        return a