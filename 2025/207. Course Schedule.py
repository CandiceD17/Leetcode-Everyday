class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        graph = defaultdict(list)
        indegree = [0] * numCourses

        for courses in prerequisites:
            graph[courses[0]].append(courses[1])
            indegree[courses[1]] += 1
        
        course_queue = deque([i for i in range(numCourses) if indegree[i] == 0])
        total_courses = 0

        while course_queue:
            course = course_queue.popleft()
            total_courses += 1

            for neighbor in graph[course]:
                indegree[neighbor] -= 1
                if indegree[neighbor] == 0:
                    course_queue.append(neighbor)
        
        return total_courses == numCourses
