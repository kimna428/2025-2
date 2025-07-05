#include <iostream>
using namespace std;

//4,2
void func(int n, int m){
    
    for(int i=1; i<=n; i++){
        cout << i << " ";
        if(m != 1) func(n, m-1);
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    int N, M;
    cin >> N >> M;
    for(int i=0; i<M; i++){
       func(N, M);
    }
}