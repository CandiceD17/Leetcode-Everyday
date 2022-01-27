class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        if len(prerequisites) == 0:
            return True
        
        id_dict = collections.defaultdict(int)
        edge_dict = collections.defaultdict(list)
        queue = []
        
        for course in prerequisites:
            for i, c in enumerate(course):
                edge_dict[c].extend(course[i + 1:])
                id_dict[c] += i 
        
        left_course = len(id_dict)
        
        for k, v in id_dict.items():
            if v == 0:
                queue.append(k)
        
        while len(queue) > 0:
            top = queue[0]
            queue.pop(0)
            left_course -= 1
            for e in edge_dict[top]:
                id_dict[e] -= 1
                if id_dict[e] == 0:
                    queue.append(e)
        
        return left_course == 0
