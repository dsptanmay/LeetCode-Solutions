class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        arr.sort()
        n = len(arr)
        for i in range(n):
            num = arr[i]
            t = 0
            while num!=0:
                num = num & (num-1)
                t  += 1
            
            arr[i]=[arr[i],t]
        
        arr.sort(key=lambda y:y[1])
        ans=[]
        for i in arr:
            ans.append(i[0])
        return ans
