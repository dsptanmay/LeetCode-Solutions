class Solution:
    def findRotation(self, mat: List[List[int]], target: List[List[int]]) -> bool:
        count = 0
        
        while(count < 4):
            l = 0
            r = len(mat) - 1
            while l<r:
                mat[l], mat[r] = mat[r], mat[l]
                l += 1
                r -= 1
            for i in range(len(mat)):
                for j in range(i):
                    mat[i][j], mat[j][i] = mat[j][i], mat[i][j]
            
            if(mat == target):
                return True
            
            count += 1
        
        return False