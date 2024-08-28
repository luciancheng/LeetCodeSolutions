class DetectSquares:

    def __init__(self):
        self.points = {}


    def add(self, point: List[int]) -> None:
        newpoint = ((point[0], point[1]))
        if newpoint not in self.points:
            self.points[newpoint] = 0
        self.points[newpoint] += 1

    def count(self, point: List[int]) -> int:
        ans = 0
        for k, v in self.points.items():
            # get the diagonal and then get the points from there
            # corner 1 is k
            # corer 2 is (point[0], k[1])
            # corner 3 is (k[0], point[1])
            if k == (point[0], point[1]):
                continue

            # make sure its a square
            if abs(k[0] - point[0]) != abs(k[1] - point[1]):
                continue

            point2 = (point[0], k[1])
            point3 = (k[0], point[1])

            if point2 in self.points and point3 in self.points:
                ans += v * self.points[point2] * self.points[point3]

        return ans

# Your DetectSquares object will be instantiated and called as such:
# obj = DetectSquares()
# obj.add(point)
# param_2 = obj.count(point)
