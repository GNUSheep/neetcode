class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        stack = []

        cars = sorted([(pos, s) for pos, s in zip(position, speed)], key=lambda x: x[0], reverse=True)

        for pos, s in cars:
            stack.append((target - pos) / s)

            if len(stack) >= 2 and stack[-1] <= stack[-2]:
                stack.pop()
            
        return len(stack)
