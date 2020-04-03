def summ(number):
    a = number
    sum = 0
    while (a > 0):
        sum += (a % 10)**5
        a = a / 10
    return sum


work = 2
suma = 0

while (work > 0):
    if (work == summ(work)):
        suma += work
        print("new : " + str(work) + " new summ : " + str(suma))
    work += 1
