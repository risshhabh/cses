last = int(input())

while last != 1:
    if not last % 2:
        print(last, end=" ")
        last = last // 2
    else:
        print(last, end=" ")
        last = last * 3 + 1
print(1, end="")
