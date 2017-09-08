include <stdio.h>
int gcd(int p, int q)
{ 
    if (p== 0 || q== 0)
       return 0;
    if (p == q)
        return p;
    if (p > q)
        return gcd(p-q,q);
    return gcd(p, q-p);
}
int main()
{
    int p= 28, q = 36;
    printf("GCD of %d and %d is %d ", p,q, gcd(p,q));
    return 0;
}
