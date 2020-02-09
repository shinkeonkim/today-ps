a = input().split("/")
b = input().split("/")

same_cnt = 0
for i in range(min(len(a),len(b))):
    if a[i] == b[i]:
        same_cnt+=1

k = len(a) - same_cnt -1

if k>0:
    print(end="../"*k)
    for i in range(same_cnt,len(b)):
        print(end=b[i])
        if i != len(b)-1:
            print(end = "/")
else:
    print(end = "./")
    for i in range(same_cnt,len(b)):
        print(end=b[i])
        if i != len(b)-1:
            print(end = "/")
# /desktop/information/coding/codeup/myanswer/1001.cpp
# /desktop/information/school/helloworld.cpp

# /desktop/information/school/helloworld.cpp
# /desktop/information/coding/codeup/myanswer/1001.cpp
