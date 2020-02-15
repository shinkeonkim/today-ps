import sys
a="quack"
ans = 0
cnt =[0]*5
s=input()
if len(set([s.count(i) for i in a])) !=1:
    print(-1)
    sys.exit()
for i in s:
    if i == 'q':
        cnt[0]+=1
    else:
        q = a.index(i)
        if cnt[q-1] < cnt[q]+1:
            print(-1)
            break
        else:
            cnt[q]+=1
            ans = max(ans,max(cnt))
            if q == 4:
                for i in range(5):
                    cnt[i]-=1
    ans = max(ans,max(cnt))
    # print(cnt)
else:
    if(max(cnt)>0):
        print(-1)
    else:
        print(ans)

