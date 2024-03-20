#include "Math.h"
#include <cstdarg>
#include <cstring>

int Math::Add(int x, int y)
{
    return x + y;
}

int Math::Add(int x, int y, int z)
{
    return x + y + z;
}

int Math::Add(double x, double y)
{
    x += y;
    int sum = x;
    return sum;
}

int Math::Add(double x, double y, double z)
{
    x += y;
    x += z;
    int sum = x;
    return sum;
}

int Math::Mul(int x, int y)
{
    return x * y;
}

int Math::Mul(int x, int y, int z)
{
    return x * y * z;
}

int Math::Mul(double x, double y)
{
    x *= y;
    int prod = x;
    return prod;
}

int Math::Mul(double x, double y, double z)
{
    x *= y;
    x *= z;
    int prod = x;
    return prod;
}

int Math::Add(int count, ...)
{
    int sum = 0, i;
    va_list vl;
    va_start(vl, count);
    for (i = 0; i < count; i++)
        sum = sum + va_arg(vl, int);
    va_end(vl);
    return sum;
}

char* Math::Add(const char* n1, const char* n2)
{
    if (n1 == nullptr || n2 == nullptr)
        return nullptr;
    int ll, ls, i, t = 0, v;
    const char* aux;
    char* numb;
    ll = strlen(n1);
    ls = strlen(n2);
    if (ll < ls)
    {
        i = ll;
        ll = ls;
        ls = i;
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    numb = new char[ll + 2];
    memset(numb, 0, ll + 2);
    for (i = 1; i <= ll; i++)
    {
        if (i <= ls)
            v = n1[ll - i] - '0' + n2[ls - i] - '0' + t;
        else
            v = n1[ll - i] - '0' + t;
        numb[ll + 1 - i] = v % 10 + '0';
        t = v / 10;
    }
    numb[0] = t + '0';
    if (numb[0] == '0')
        memcpy(numb, numb + 1, ll + 1);
    return numb;
}