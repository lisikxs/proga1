#include <stdio.h>
#include <math.h>
int main() {
    float m,n,z1,z2;
    scanf("%f %f",&m, &n);
    z1 = ((m-1)*sqrt(m) - (n-1)*sqrt(n))/(sqrt(pow(m,3)*n) + n*m + pow(m,2) - m);
    z2 = (sqrt(m) - sqrt(n))/m;
    return 0;
}