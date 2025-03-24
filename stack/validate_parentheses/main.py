class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        for c in s:
            if c in "({[":
                stack.append(c)
            else:
                if not stack:
                    return False
                
                v = stack.pop()

                if v == "(" and c != ")":
                    return False
                elif v == "{" and c != "}":
                    return False
                elif v == "[" and c != "]":
                    return False
        return len(stack) == 0
