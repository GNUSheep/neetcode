class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        distinct_chars = set(s)
        longest = 0

        for char in distinct_chars:
            count = 0
            l = 0
            r = 0

            while r != len(s):
                if s[r] == char:
                    count += 1

                while (r - l + 1) - count > k:
                    if s[l] == char:
                        count -= 1
                    l += 1
            
                longest = max(longest, r-l+1)
                r += 1
            
        return longest
