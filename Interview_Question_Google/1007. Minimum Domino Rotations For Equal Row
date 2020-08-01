class Solution:
    def minDominoRotations(self, A: List[int], B: List[int]) -> int:
        def rotate(x):
            toA = 0 #rotations that will make all values in A the same
            toB = 0
            for i in range(len(A)):
                if A[i] != x and B[i] != x:
                    return -1
                elif A[i] != x: # B[i] == x
                    toA += 1
                elif B[i] != x: # A[i] == x
                    toB += 1
            return min(toA, toB)
        
        countA = rotate(A[0])
        if countA != -1 or A[0] == B[0]:
            return countA
        return rotate(B[0])
