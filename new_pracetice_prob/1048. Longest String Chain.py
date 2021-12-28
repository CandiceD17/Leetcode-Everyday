class Solution:
    def longestStrChain(self, words: List[str]) -> int:
        words = sorted(words, key=len)
        dict_w = {}
        res = 1
        for w in words:
            max_len = 1
            for i in range(len(w)):
                s =  w[:i] + w[i + 1:]
                if s in dict_w:
                    max_len = max(max_len, dict_w[s] + 1)
            dict_w[w] = max_len
            res = max(res, max_len)
        return res
