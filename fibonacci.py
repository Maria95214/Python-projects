prev = 0
curr = 1
result = 0

for i in range(0, 20):
    result = curr + prev
    prev = curr
    curr = result
    print(result)
