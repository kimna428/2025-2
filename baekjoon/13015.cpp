#include <iostream>
using namespace std;

void sim(int N){
    cout << "*";
    for(int j=0; j<N-2; j++) cout <<" ";
    cout << "*";    
}

int main() {
    int N;
    cin >> N;
    if(N!=2){
        for(int i=0; i<2*N-1; i++){
            if(i == 0|| i== 2*N-2){
                for(int j=0; j<N; j++)cout << "*";
                for(int j=0; j<2*N-3; j++)cout << " ";
                for(int j=0; j<N; j++)cout << "*";
                cout << "\n";
            } else if(i<N-1){
                for(int j = 0; j<i; j++) cout << " ";
                sim(N);
                for(int j=0; j<2*N-3-2*i; j++)cout << " ";
                sim(N);
                cout << "\n";
            } else if(i == N-1){
                for(int j=0; j<N-1; j++) cout<<" ";
                sim(N);
                for(int j=0; j<N-2; j++) cout <<" ";
                cout << "*";
                cout << "\n";    
            } else if(i>N-1){
                for(int j = 2*(N-1); j>i; j--) cout << " ";
                sim(N);
                for(int j=0; j<(i-N)*2+1; j++)cout << " ";
                sim(N);
                cout << "\n";
            } 
        }
    }else{
        cout<<"** **\n";
        cout<<" ***\n";
        cout<<"** **";
    }
}