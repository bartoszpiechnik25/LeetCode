class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        result = 0
        for operation in operations:
            if (operation[:2] == '--') or (operation[1:4] == '--'):
                result -= 1
            else:
                result += 1
        return result
