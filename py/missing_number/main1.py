## Approach 1
print(str(next(iter(set(range(1, int(input()) + 1)).symmetric_difference([int(i) for i in input().split()])))))
# Get set of numbers `[1, n]` and `[1, n] \ {missing number}` and find the symmetric difference of the two.
