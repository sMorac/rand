import random
from datetime import datetime
from sys import maxsize

random.seed(datetime.now())
print(random.randrange(maxsize))
