class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        total=0
        for jewel in stones:
            if jewel in jewels:
                total+=1;
        return total