class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if not len(s):
            return 0
        
        left = 0
        right = 1
        cur_letter = {s[left]:1}
        max_length = 1

        while left <= right and right < len(s):
            if s[right] not in cur_letter.keys():
                cur_letter[s[right]] = 1
                max_length = max(max_length, len(cur_letter))
                right += 1
            else:
                cur_letter.pop(s[left])
                left += 1
        
        return max_length
      
