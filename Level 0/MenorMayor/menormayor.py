a = 1# int(input())
b = 2# int(input())
c = 3# int(input())

print(a < b < c)
print(a > b > c)

if a > b and a > c:
    print('A es el mayor')
    if b < c:
        print('B es el menor')
    else:
        print('C es el menor')
elif b > a and b > c:
    print('B es el mayor')
    print('A es el menor')
else:
    print('C es el mayor')
    print('A es el menor')

nums = [a, b, c]
min = nums[0]
max = nums[0]
for n in nums:
    if n < min:
        min = n
    if n > max:
        max = n

print(min, max)
