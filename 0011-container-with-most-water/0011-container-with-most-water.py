class Solution:
    def maxArea(self, height: list[int]) -> int:
        n ,left = len(height) , 0
        right = n-1 
        area = 0

        while left < right:
            area = max(area , min(height[left] , height[right]) * (right - left))
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1    

        return area



        