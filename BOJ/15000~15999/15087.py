def get_sum(s):
    return sum([ord(i) - 65 for i in s])


def rotate_chr(s, n):
    return chr((ord(s) - 65 + n) % 26 + 65)


def divide(s):
    return s[: len(s) // 2], s[len(s) // 2 :]


def rotate(s, n):
    return "".join([rotate_chr(i, n) for i in s])


def merge(a, b):
    return "".join([rotate_chr(a[i], ord(b[i]) - 65) for i in range(len(a))])


s = input()
s1, s2 = divide(s)

print(merge(rotate(s1, get_sum(s1)), rotate(s2, get_sum(s2))))
