case = 1
while True:
    # cnt: 현재까지 여는 괄호의 개수를 저장하는 변수
    cnt = 0
    # ans: answer
    ans = 0
    s = input()
    # 문제에 주어진 break 조건
    if s[0]=="-":
        break
    for i in s:
        # 여는 괄호가 주어진 경우
        if i == '{':
            cnt+=1
        # 닫는 괄호가 주어진 경우
        else:
            # 여는 괄호가 이전에 없는 경우
            if cnt <= 0:
                ans+=1
                cnt+=1
            # 여는 괄호가 이전에 있는 경우
            else:
                cnt-=1
    ans += cnt//2
    print("{}. {}".format(case,ans))
    case +=1