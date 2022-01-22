class Solution:
    def removeComments(self, source: List[str]) -> List[str]:
        block = False
        res = []
        for s in source:
            i = 0
            if not block:
                cur_word = []
            while i < len(s):
                if not block and s[i:i+2] == '/*':
                    block = True
                    i += 1
                elif block and s[i:i+2] == '*/':
                    block = False
                    i += 1
                elif not block and s[i:i+2] == '//':
                    break
                elif not block:
                    cur_word.append(s[i])
                i += 1
            if cur_word and not block:
                res.append("".join(cur_word))
        return res
