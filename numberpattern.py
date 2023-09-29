n = int(input())

# for i in range(1, n + 1):
#     for j in range(1, i + 1):
#         print(format(j, "<4"), end=" ")
#     print("\n")


### Right Triangle sine wave pattern 1
# for i in range(n):
#     val = i + 1
#     inc = n - 1
#     for j in range(i + 1):
#         print(format(val, "<4"), end=" ")
#         val += inc
#         inc -= 1
#     print()


### Right Triangle sine wave pattern 2
for i in range(n):
    for j in range(i + 1):
        x = 0
        for k in range(j):
            x += n - k
        if j % 2 == 0:
            print(format(x + i + 1 - j, "<4"), end=" ")
        else:
            print(format(x + n - i, "<4"), end=" ")
    print()
