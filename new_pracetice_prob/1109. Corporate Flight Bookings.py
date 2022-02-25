class Solution:
    def corpFlightBookings(self, bookings: List[List[int]], n: int) -> List[int]:
        dict_flight = [0 for i in range(n)]
        for b in bookings:
            dict_flight[b[0] - 1] += b[2]
            if b[1] < n:
                dict_flight[b[1]] -= b[2]
        print(dict_flight)
        cur_sum = 0
        res = []
        for d in dict_flight:
            cur_sum += d
            res.append(cur_sum)
        return res
