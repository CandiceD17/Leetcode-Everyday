class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:
        if k == len(cardPoints):
            return sum(cardPoints)
        cur_score = 0
        for i in range(k):
            cur_score += cardPoints[i]
        max_score = cur_score
        for i in range(1, k + 1):
            cur_score = cur_score - cardPoints[k - i] + cardPoints[-i]
            max_score = max(max_score, cur_score)
        return max_score
