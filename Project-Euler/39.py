def pir(a, b, c):
    if (a**2 + b**2 == c**2):
        xx = a * b / 2
        if ((a * b / 2).is_integer()):
            return a * b / 2


list = []
max = 0
for i in range(1001):
    list.append(0)
for a in range(1001):
    for b in range(1001):
        for c in range(1001):
            xx = pir(a, b, c)
            if (int(xx) == xx and xx <= 1000):
                lisy[pir(a, b, c)] += 1
for i in range(1001):
    if list[i] > max:
        max = list[i]
print("res : " + str(max))
