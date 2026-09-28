class Solution:
    def numRookCaptures(self, board: list[list[str]]) -> int:
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j]=="R":
                    row=i
                    col=j
                    break
        r1=row-1
        c=0
        while r1>-1 and board[r1][col]!="B":
            if board[r1][col]=="p":
                c+=1
                break
            r1-=1
        r2=row+1
        while r2<len(board) and board[r2][col]!="B":
            if board[r2][col]=="p":
                c+=1
                break
            r2+=1
        c1=col-1
        while c1>-1 and board[row][c1]!="B":
            if board[row][c1]=="p":
                c+=1
                break
            c1-=1
        c2=col+1
        while c2<len(board) and board[row][c2]!="B":
            if board[row][c2]=="p":
                c+=1
                break
            c2+=1
        return c
        

        

