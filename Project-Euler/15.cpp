#include <iostream>
#include <vector>
#include <math.h>

long int path(int sizex, int sizey, long int x, long int y) {
    long int number = 0;
    if (x < sizex) {
        number += path(sizex - 1, sizey, x, y);
    }
    if (y < sizey) {
        number += path(sizex, sizey - 1, x, y);
    }
    if (x == sizex && y == sizey) {
        return 1;
    }
    return number;
}

long int obh(int size) {
    std::vector <std::vector <int> > v(size);
    for (int i = 0; i < v.size(); i++) {
        v[i] = std::vector<int>(size);
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            v[i][j] = 0;
        }
    }

    v[size - 1][size - 1] = 1;

    int x = v.size() - 1, y = v.size() - 1;
    while (v[0][0] == 0) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (v[i][j] == 0) {
                    if (i != size - 1) {
                        if (v[i + 1][j] != 0)
                            v[i][j] += v[i + 1][j];
                    }
                    if (j != size - 1) {
                        if (v[i][j + 1] != 0)
                            v[i][j] += v[i][j + 1];
                    }
                }
            }
        }
    }
    return v[0][1] + v[1][0];
}

int main() {
    int size;
    std::cin >> size;
    //std::cout << "res " << path(size, size, 0, 0) << std::endl;

    std::cout << "res " << obh(size+1) << std::endl;

    return 0;
}
