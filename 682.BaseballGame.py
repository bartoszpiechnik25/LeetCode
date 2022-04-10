class Solution:
    def calPoints(self, ops: List[str]) -> int:
        ans = []
        for i in range(len(ops)):
            if ops[i] == '+':
                ans.append(sum(ans[-2:]))
            elif ops[i] == 'D':
                ans.append(ans[-1]*2)
            elif ops[i]=='C':
                ans.pop()
            else:
                ans.append(int(ops[i]))
        return sum(ans)
