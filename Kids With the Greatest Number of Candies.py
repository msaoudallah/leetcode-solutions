class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        greatest = max(candies)
               result = [True  if x+extraCandies >= greatest else False for x in candies]
                return result
                        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        