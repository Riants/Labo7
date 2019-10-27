#include <iostream>

using namespace std;

int length[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int price[] = { 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
int n, c;

int CheckNumber(){
    cout<<"Inserte largo de 1 a 10"<<endl;
    cin>>n;

    if(n<=0 || n>=11){
        cout<<"Necesita ser un valor de 1 a 10"<<endl;
        n=0;
        CheckNumber();
    } else{
    return n;
    }
}

void RodCutting(int n){
    int M[n+1];

    for (int i=0; i<=n; i++){
        M[i] = 0;
    }

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            M[i] = max(M[i], price[j-1] + M[i-j]);
        }
    }
    cout<<"La mayor ganancia es "<<M[n]<<endl;
}

int main()
{
    RodCutting(CheckNumber());

    return 0;
}
