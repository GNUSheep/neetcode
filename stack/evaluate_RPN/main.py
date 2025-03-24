class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []

        for token in tokens:
            if token not in "+/-*":
                stack.append(int(token))
                continue

            v2 = stack.pop()
            v1 = stack.pop()

            if token == "+": stack.append(v1+v2)
            elif token == "-": stack.append(v1-v2)
            elif token == "/": stack.append(int(float(v1) / v2))
            else: stack.append(v1*v2)

        return stack[-1]
