class Solution(object):
    def relativeSortArray(self, arr1, arr2):
        res = []
        for i in arr2 :
            rep = arr1.count(i)
            for j in range(0,rep):
                res.append(i)
                        dif = [x for x in arr1 if x not in arr2]
        dif.sort()
                res.extend(dif)
                return res
                    """
        :type arr1: List[int]
        :type arr2: List[int]
        :rtype: List[int]
        """
        