class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]: 
        map_strs = defaultdict(list)

        for s in strs:
            letter = [0] * 26
            for c in s:
                letter[ord(c) - ord("a")] += 1
            
            map_strs[tuple(letter)].append(s)
        return map_strs.values()
