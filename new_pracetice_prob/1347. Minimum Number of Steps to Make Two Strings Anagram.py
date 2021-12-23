class Solution:
    def minSteps(self, s: str, t: str) -> int:
        dict_s = {}
        for a in s:
            if a not in dict_s:
                dict_s[a] = 1
            else:
                dict_s[a] += 1
        for a in t:
            if a in dict_s and dict_s[a] > 0:
                dict_s[a] -= 1
        return sum(dict_s.values())
