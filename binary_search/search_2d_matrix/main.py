class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for row in matrix:
            if row[0] == target or row[len(row) - 1] == target:
                return True 

            if row[0] < target < row[len(row) - 1]:
                l = 0
                h = len(row) - 1

                while l <= h:
                    m = l + (h - l) // 2

                    if row[m] == target:
                        return True
                    elif row[m] < target:
                        l = m + 1
                    else:
                        h = m - 1

                return False


        return False
