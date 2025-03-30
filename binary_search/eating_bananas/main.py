class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l = 1
        r = max(piles)

        rate = 0

        while l <= r:
            time = 0
            m = (l+r) // 2

            for banana in piles:
                time += math.ceil(banana / m)

            if time <= h:
                rate = m
                r = m - 1
            else:
                l = m + 1
        return rate
