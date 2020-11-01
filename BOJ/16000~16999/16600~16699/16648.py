t,p = map(int,input().split())

use = 100 - p
if use > 80:
    over = use - 80
    org = 80
    port = t/(over * 2 + org)
    print(2*p*port)
else:
    port = t/use
    print((20 + p) * port)