class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        freq={}
        res=[]
        for i in arr1:
            freq[i]=freq.get(i,0)+1
        for i in arr2:
            while freq[i]>0:
                res.append(i)
                freq[i]-=1
        for key in sorted(freq.keys()):
            while freq[key]>0:
                res.append(key)
                freq[key]-=1
        return res
