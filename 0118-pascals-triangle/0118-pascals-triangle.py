class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res:List[List[int]] = []
        res.append([1])
        
        if(numRows == 1):
            return res
        
        for i in range(1, numRows):
            temp = [1]
            x = res[i-1]
            for j in range(1, len(x)):
                temp.append(x[j] + x[j-1])
            temp.append(1)
            res.append(temp)
            
        return res