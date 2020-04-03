def ways(target, start):
    present = 0;
    if (target == start):
        return 1;
    if (target > start):
        present += ways(target, start + 1);
        present += ways(target, start + 2);
        present += ways(target, start + 5);
        present += ways(target, start + 10);
        present += ways(target, start + 20);
        present += ways(target, start + 50);
        present += ways(target, start + 100);
        present += ways(target, start + 200);
    return present;

print("res" + str(ways(200, 0)))
