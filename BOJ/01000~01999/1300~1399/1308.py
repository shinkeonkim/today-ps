from datetime import *
a = date(*map(int,input().split()))
b = date(*map(int,input().split()))
print("gg" if date(a.year+1000, a.month, a.day) <= b else f"D-{(b-a).days}")
