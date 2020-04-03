def distN(a, b, c, d):
    s = []
    w = 0
    for i in range(a, b + 1):
        for j in range(c, d + 1):
            w = i**j
            if (s.count(w) == 0):
                s.append(w)
    return len(s)

print(str(distN(2, 100, 2, 100)))
