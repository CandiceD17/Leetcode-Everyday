class Solution:
    def lengthLongestPath(self, input: str) -> int:
        dirs = input.split("\n")
        length = 0
        file_path = [0]
        for d in dirs:
            level = 0
            while d[level] == '\t':
                level += 1
            file_len = len(d) - level
            if "." in d:
                length = max(length, file_path[level] + file_len)
                continue
            if level + 1 < len(file_path):
                file_path[level + 1] = file_path[level] + file_len + 1
            else:
                file_path.append(file_path[level] + file_len + 1)
        return length
