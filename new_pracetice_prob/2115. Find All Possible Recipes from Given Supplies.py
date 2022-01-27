class Solution:
    def findAllRecipes(self, recipes: List[str], ingredients: List[List[str]], supplies: List[str]) -> List[str]:
        id_dict = collections.defaultdict(int)
        edge_dict = collections.defaultdict(list)
        queue = []
        res = []
        
        for i,r in zip(ingredients, recipes):
            indegree = len(i)
            for item in i:
                if item in supplies:
                    indegree -= 1
                else:
                    edge_dict[item].append(r)
            if indegree == 0:
                queue.append(r)
            else:
                id_dict[r] = indegree
      
        while len(queue) > 0:
            top = queue[0]
            res.append(top)
            queue.pop(0)
            
            for i in edge_dict[top]:
                id_dict[i] -= 1
                if id_dict[i] == 0:
                    queue.append(i)
                    
        return res
