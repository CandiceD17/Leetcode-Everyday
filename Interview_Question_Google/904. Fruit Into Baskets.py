class Solution:
    def totalFruit(self, tree: List[int]) -> int:
        cur_index = 0
        two_fruit = False
        fruit1 = tree[0]
        fruit2 = tree[0]
        length = 0
        res = 0
        while cur_index < len(tree):
            if tree[cur_index] == fruit1 or tree[cur_index] == fruit2:
                length += 1
                if tree[cur_index] != tree[cur_index - 1]:
                    diff_index = cur_index
            else:
                if not two_fruit:
                    two_fruit = True
                    diff_index = cur_index
                    fruit2 = tree[cur_index]
                    length += 1
                else:
                    res = max(res, length)
                    length = cur_index - diff_index + 1
                    fruit1 = tree[diff_index]
                    fruit2 = tree[cur_index]
                    diff_index = cur_index
            cur_index += 1
        return max(res, length)
