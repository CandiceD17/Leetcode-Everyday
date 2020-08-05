class Solution:
    def expressiveWords(self, S: str, words: List[str]) -> int:
        if len(S) == 0:
            return 0
        
        def generate_count(S):
            return zip(*[(k, len(list(grp)))
                         for k, grp in itertools.groupby(S)])
        
        letter, count = generate_count(S)
        res = 0
        for word in words:
            letter_w, count_w = generate_count(word)
            if letter != letter_w:
                continue
            res += all([i1 >= max(i2, 3) or i1 == i2 for i1, i2 in zip(count, count_w)])
        return res
