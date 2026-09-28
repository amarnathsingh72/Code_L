class Solution:
    def diagonalSum(self, mat: list[list[int]]) -> int:
        sum = 0

        for i in range(len(mat)):
            sum += mat[i][i]
            sum += mat[len(mat) - 1 - i][i]

        if len(mat) % 2 == 0:
            return sum
        else:
            return sum - mat[len(mat) // 2][len(mat) // 2]