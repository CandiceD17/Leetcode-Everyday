class Solution:
    def openLock(self, deadends: List[str], target: str) -> int:
        q = deque()
        visited = set()
        steps = 0

        if '0000' not in deadends:
            q.append('0000')
            visited.add('0000')

        while q:
            size = len(q)

            for i in range(size):
                elem = q.popleft()
                if elem == target:
                    return steps
                for j in range(4):
                    num_j = int(elem[j])
                    if num_j == 0:
                        num_j_minus = 9
                    else:
                        num_j_minus = num_j - 1
                    num_j_add = (num_j + 1) % 10

                    next_elem = []
                    next_elem.append(elem[:j] + str(num_j_add) + elem[j + 1:])
                    next_elem.append(elem[:j] + str(num_j_minus) + elem[j + 1:])

                    for n in next_elem:
                        if n not in deadends and n not in visited:
                            q.append(n)
                            visited.add(n)
            
            steps += 1
        
        return -1
       # 7.30
