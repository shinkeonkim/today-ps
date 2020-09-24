def f(d):
    for i in d:
        if d[i] != 0:
            return True
    return False

n = int(input())
for case in range(1,n+1):
    d = {}
    L = []
    for j in range(65, 91):
        d[chr(j)] = 0
    
    a = input()
    for j in a:
        d[j] += 1
    
    q = [['Z', 'ZERO', 0], ['W','TWO',2],  ['X', 'SIX', 6], ['G','EIGHT',8]]
    q2 = [['U', 'FOUR', 4], ['S', 'SEVEN', 7], ['T','THREE', 3], ['F', 'FIVE', 5],  ['O', 'ONE', 1]]
    while f(d):
        chk = True
        for query in q:
            if d[query[0]] > 0:
                chk = False
                cnt = d[query[0]]
                for j in query[1]:
                    d[j] -= cnt
                L.extend([query[2]]*cnt)
        if chk:
            break
    while f(d):
        chk = True
        for query in q2:
            if d[query[0]] > 0:
                chk = False
                cnt = d[query[0]]
                for j in query[1]:
                    d[j] -= cnt
                L.extend([query[2]]*cnt)
        if chk:
            break
    L.extend([9]*d['I'])
    L.sort()
    print("Case #{}: {}".format(case,"".join([str(i) for i in L])))

