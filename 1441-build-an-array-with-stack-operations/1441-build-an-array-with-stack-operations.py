class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        ops = []
        s = set(target)
        for i in range(1, target[-1]+1):
            ops.append("Push")
            if i not in s:
                ops.append("Pop")
        
        return ops