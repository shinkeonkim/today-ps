from queue import * 
n=int(input())
L=list(map(int,input().split()))
Q = Queue()
for i in range(n):
    Q.put([i+1,L[i]])
