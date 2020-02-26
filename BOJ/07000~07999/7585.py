while True:
    s = input()
    if s == '#':
        break
    ans = True
    stack = []

    for i in s:
        if i in "([{":
            stack.append(i)
        elif i in ")]}":
            if len(stack) ==0:
                ans = False
            else:
                if i == ')':
                    if stack[-1] == '(':
                        stack.pop()
                    else:
                        ans = False
                if i == ']':
                    if stack[-1] == '[':
                        stack.pop()
                    else:
                        ans = False
                if i == '}':
                    if stack[-1] == '{':
                        stack.pop()
                    else:
                        ans = False
    if len(stack) > 0:
        ans = False
    if ans:
        print("Legal")
    else:
        print("Illegal")
        