class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        output = []
        stack = ""
        
        def backtrack(open_p, close_p, stack):
            if open_p == close_p == n:
                output.append("".join(stack))

            if open_p < n:
                stack += "("
                backtrack(open_p + 1, close_p, stack)
                stack = stack[:-1]
            if close_p < open_p:
                stack += ")"
                backtrack(open_p, close_p + 1, stack)
                stack = stack[:-1]
        
        backtrack(0, 0, stack)

        return output
