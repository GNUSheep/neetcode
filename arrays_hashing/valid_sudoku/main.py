class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row_map = defaultdict(set)
        square = defaultdict(set)

        for row in range(len(board)):
            col_set = set()

            for col in range(len(board[0])):
                if board[row][col] == ".":
                    continue

                if (board[row][col] in col_set
                or board[row][col] in row_map[col]
                or board[row][col] in square[(row // 3, col // 3)]):
                    return False

                square[(row // 3, col // 3)].add(board[row][col])
                col_set.add(board[row][col])
                row_map[col].add(board[row][col])
        return True
