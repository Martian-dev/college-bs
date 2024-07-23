i = int(input())

orig = i
sum = 0
while i > 0:
    sum += (i % 10) ** 3
    i = i // 10

if sum == orig:
    print("armstrong")

else:
    print("Not armstrong")
