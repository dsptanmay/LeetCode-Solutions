class Solution:
    def merge(self, arr: List[int], low:int, mid: int, high: int)->None:
        left = low
        right = mid+1
        temp = []
        
        while(left<=mid and right<=high):
            if(arr[left] <= arr[right]):
                temp.append(arr[left])
                left += 1
            else:
                temp.append(arr[right])
                right+= 1
            
        while(left<=mid):
            temp.append(arr[left])
            left += 1
        
        while(right <= high):
            temp.append(arr[right])
            right += 1
        
        for i in range(low, high+1):
            arr[i] = temp[i-low]
            
    def countPairs(self, arr: List[int], low: int, mid: int, high: int) -> int:
        count = 0
        right = mid+1
        for i in range(low, mid+1):
            while(right<=high and arr[i] > 2*arr[right]):
                right += 1
            count += (right - (mid+1))
        
        return count
            
    def mergeSort(self, arr: List[int], low:int, high: int)-> int:
        count = 0
        if(low>=high):
            return count
        
        mid = (low+high)//2
        count += self.mergeSort(arr, low, mid)
        count += self.mergeSort(arr, mid+1, high)
        count += self.countPairs(arr, low, mid, high)
        
        self.merge(arr, low, mid, high)
        return count
    def reversePairs(self, nums: List[int]) -> int:
        res = self.mergeSort(nums, 0, len(nums)-1)
        return res