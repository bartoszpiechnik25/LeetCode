class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        ans = [0 for i in range(len(queries))]
        for i in range(len(queries)):
            for j in range(len(points)):
                if ((queries[i][0]-points[j][0])**2 + (queries[i][1]-points[j][1])**2) <= queries[i][2]**2:
                    ans[i] += 1
        return ans
        
