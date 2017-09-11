import random
from datetime import datetime

s_len = 10
s = ''
random.seed(datetime.now())
a = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
a_len = len(a)
for i in range(s_len):
    s += a[random.randrange(0, a_len)]
print(s)
