class TimeMap:

    def __init__(self):
        self.hashmap = defaultdict(list)

    def set(self, key: str, value: str, timestamp: int) -> None:
        if key in self.hashmap:
            self.hashmap[key].append((timestamp, value))
        else:
            self.hashmap[key] = [(timestamp, value)]

    def get(self, key: str, timestamp: int) -> str:
        if not key in self.hashmap:
            return ""
        timestamp_list = self.hashmap[key]
        l = 0
        r = len(timestamp_list) - 1
        while l <= r:
            mid = (l + r) // 2
            if timestamp_list[mid][0] >= timestamp + 1:
                r = mid - 1
            else:
                l = mid + 1
        if r >= 0:
            return timestamp_list[r][1]
        return ""
