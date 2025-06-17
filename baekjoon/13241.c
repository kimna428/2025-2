#include <stdio.h>

long long int Euclidean(long long int a,long long  int b)
{
    long long int r = a % b;
    if (r == 0) {
      return b;
    }
    return Euclidean(b, r);
}

int main(){
    long long int a, b;
    scanf("%d %d", &a ,&b);
    long long int num = Euclidean(a,b);
    printf("%lld", (a/num)*b);
}