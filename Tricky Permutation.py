# created by Vishal Sharma
import pandas as pd
from itertools import permutations
str1 = input()
s = list(permutations(str1))
new = pd.unique(s).tolist()
for num in new:
    print(''.join(num))
    
