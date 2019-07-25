import hashlib
m = hashlib.new('sha')
m.update(input().encode())
print(m.hexdigest())