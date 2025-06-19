#include <stdio.h>

long int Euc(long int a,long int b){
    long int r = a%b;
    if(r == 0) return b;
    else Euc(b,r);
    
}

int main(){
    long int a,b, x,y;
    scanf("%d %d", &b, &a);
    scanf("%d %d", &y, &x);
    long int c =Euc(a,x);
    long int deno = a*(x/c);
    long int num = y*(a/c)+b*(x/c);
    //기약분수 형태로 만들지 않아 계속 틀림..ㅋ
    int div = Euc(deno, num);
    printf("%d %d", num/div, deno/div);

}
