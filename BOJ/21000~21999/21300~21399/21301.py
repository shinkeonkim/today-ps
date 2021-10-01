from statistics import *
print("COMFY" if stdev([*map(float,input().split())]) <= 1.0 else "NOT COMFY")
