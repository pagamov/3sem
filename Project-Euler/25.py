def fiba(number):
    return 1
def dig(number):
    w = number
    size = 0
    while (w != 0):
        size += 1
        w = w / 10
    return size

list = [1, 1]
i = 2
while (dig(list[-1]) != 1000):
    list.append(list[i - 1] + list[i - 2])
    i += 1
print("res : " + str(i))
