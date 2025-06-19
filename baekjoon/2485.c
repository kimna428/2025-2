#include <stdio.h>
#define min(x,y) (x) < (y) ? (x): (y)
long long int Euc(long long int a, long long int b){
    long long int r = a%b;
    if(r==0){
        return b;
    } else Euc(b,r);
}

long long int sub(long long int a, long long int b){
    return b-a;
    
}


/* 결국 문제의 핵심은 간격들의 최대공약수로 칸을 나누는 것이다.
그럼 어짜피 실제 가로수의 위치는 필요가 없고 그 사이 간격만이 필요한 것이라
값이 들어온다면 그 차이를 저장하는 것이 낫지 않으라?
이후 저장 값을 비교하여 최소공배수로 몇개 나눠야하는지 게산하면 될 듯

가로수의 위치이기 떄문에 입력값은 점차 증가함
2 6 12 18의 간격이면 
4 6 6
최대공약수로 나눈 수만큼임,
4/2 -1
6/2 - 1
6/2 - 1 
1+2+2
결국 들어온 값들을 다 비교해서 최대공약수를 찾아야함.
배열로 하기 vs 저장하지 않고 싸지르기
이미 한번씩 들어온 값들을 이용해서 해야함
예를 들어, 2, 7, 3,  의 간격이 들어왔다고 하면, 
처음 2와 7의 최대공약수인 1일로 맞춰지고 이후에 들어오는 숫자들도 1과의 최대공약수로 갈듯
예를 들면 14, 28, 7의 경우
14와 28에서 14, 이후 14와 7의 최대공약수로 맞춰지겠지만
결국 마지막에 최대공약수가 맞추어진다면 결국 값을 저장해야한다는거임~~~~
1차 시도 52퍼에서 막힘
*/
int main(){
    long int N;
    scanf("%ld", &N);

    long long int arr[N];
    long long int a ,b, c, div;
    scanf("%lld %lld", &a, &b);
    long long int count = 0;
    arr[0] = b-a;
    long long int mini;
    for(long long int i = 1; i < N-1; i++){
       scanf("%lld", &c);
        arr[i]= c-b;
        b = c;
       div = Euc(arr[i-1],arr[i]);
       if(div < mini) mini = div;
    }
    for(long long int i =0 ; i < N-1; i++){
        count += arr[i]/mini -1;
    }
    printf("%lld", count);

}