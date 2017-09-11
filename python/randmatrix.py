import random
from sys import maxsize
from datetime import datetime

random.seed(datetime.now())
n = 10
m = 9
matrix = []
for i in range(n):
    matrix.append([random.randrange(maxsize) for j in range(m)])

print(matrix)
