
class telegraph:

    def __init__(self):
        self.data = []

    def dot(self):
        self.data.append("dot")

    def dash(self):
        self.data.append("dash")

t = telegraph()

t.dot
t.dash
t.dash
t.dot

print(t.data)
