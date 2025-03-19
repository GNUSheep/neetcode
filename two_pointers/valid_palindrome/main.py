class Solution:
    def isPalindrome(self, s: str) -> bool:
        l, r = 0, len(s) - 1

        alphabetic = "qwertyuiopasdfghjklzxcvbnm1234567890"

        while l < r:
            while s[l].lower() not in alphabetic and l != r: 
                l += 1
            while s[r].lower() not in alphabetic and l != r:
                r -= 1

            if s[l].lower() != s[r].lower():
                return False

            l += 1
            r -= 1
        return True
