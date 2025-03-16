class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = defaultdict(int)

        for n in nums:
            freq[n] += 1
        
        freq = sorted(freq.items(), reverse=True, key=lambda x:x[1])
        return [x[0] for x in freq[:k]]
