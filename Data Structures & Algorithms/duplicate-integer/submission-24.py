class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        this = set()
        for i in nums:
            if i in this:
                return True
            else:
                this.add(i)
        return False