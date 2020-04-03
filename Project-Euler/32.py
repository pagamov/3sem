def patog(a):
    if (a == 0):
        return 0;
    list = []
    while (a != 0):
        w = a % 10
        if (w != 0 and list.count(w) == 0):
            list.append(w)
            a = a / 10
        else:
            return 0
    return 1


# final = 987654322
final = 987654322
summ = 0

for a in range(2, final):
    if patog(a):
        for b in range(2, final):
            if patog(b):
                if patog(a * b):
                    print("good " + str(a) + " " + str(b) + " " + str(a * b))
                    bad = 0
                    w = a * b
                    a1 = a
                    b1 = b
                    list = []
                    while (a1 != 0):
                        res = a1 % 10
                        if (list.count(res) == 0):
                            list.append(res)
                            a1 = a1 / 10
                        else:
                            bad = 1
                            break;
                    while (b1 != 0):
                        res = b1 % 10
                        if (list.count(res) == 0):
                            list.append(res)
                            b1 = b1 / 10
                        else:
                            bad = 1
                            break;
                    while (w != 0):
                        res = w % 10
                        if (list.count(res) == 0):
                            list.append(res)
                            w = w / 10
                        else:
                            bad = 1
                            break;
                    if (bad == 0):
                        summ += a * b
print(summ)
