#ifndef OPERACIONES_H
#define OPERACIONES_H

template<typename T>
T gcd(T a, T b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

#endif // OPERACIONES_H
