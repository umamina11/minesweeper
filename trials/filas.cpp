#include <iostream>
#include <stdlib.h>
#include <time .h>

using namespace std;
int main(){
    int A[100][100],filas,columnas,m,k,n;
    cout<<"filas";
    cin>>filas;
    cout<<"columnas";
    cin>>columnas;
    n=filas*columnas;
    srand(time(NULL));
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            for (k=1; k<=n; k++){
                m= 1+rand()% (n - 1);
            A[i][j]= m;
            }
        }
    }
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;

}

