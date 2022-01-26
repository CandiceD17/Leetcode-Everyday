class Solution:
    def fullJustify(self, words: List[str], maxWidth: int) -> List[str]:
        length = len(words)
        if length == 0:
            return []
        i = 1
        curWidth = len(words[0])
        curWord = [words[0]]
        res = []
        while i < length:
            if curWidth + len(words[i]) + 1 <= maxWidth:
                curWidth += 1 + len(words[i]) # add space
                curWord.append(words[i])
            else:
                if len(curWord) == 1:
                    res.append(curWord[0].ljust(maxWidth, ' '))
                    curWidth = len(words[i])
                    curWord = [words[i]]
                    i += 1
                    continue
                add_space = int((maxWidth - curWidth) / (len(curWord) - 1))
                extra_space = (maxWidth - curWidth) % (len(curWord) - 1)
                line = ""
                for j, w in enumerate(curWord):
                    line += w
                    if j == len(curWord) - 1:
                        break
                    elif j < extra_space:
                        line += " " * (add_space + 2)
                    else:
                        line += " " * (add_space + 1)
                res.append(line)
                curWidth = len(words[i])
                curWord = [words[i]]
            i += 1
        res.append(" ".join(curWord).ljust(maxWidth, ' '))
        return res
