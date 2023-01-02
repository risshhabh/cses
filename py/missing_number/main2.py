## Approach 2
print((n := int(input())) * (n + 1) // 2 - sum([int(i) for i in input().split()]))
# Find difference of `sum(range(1, n + 1)` and the sum of the elements of the list with the missing number.
