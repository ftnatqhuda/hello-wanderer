#include <iostream>
#include <iomanip>
using namespace std;
#define ROW 2
#define COL 3

void addition(int A[ROW][COL], int B[ROW][COL], int C[ROW][COL]);
int main(){

    int A[ROW][COL] = {{16,18,23}, {54,91,11}};
    int B[ROW][COL] = {{24,52,77}, {16,19,59}};
    int C[ROW][COL] = {0};
    int i, j;
    cout<<"Before addition:"<<endl;
    for(i = 0; i<ROW; i++){
        for(j = 0; j<COL; j++){

            cout<<setw(4)<<C[i][j]<<" ";

        }
        cout<<endl;
   }
    addition(A, B, C);
    cout<<endl<<"After addition:"<<endl;
    for(i = 0; i<ROW; i++){
        for(j = 0; j<COL; j++){

            cout<<setw(4)<<C[i][j]<<" ";

        }
        cout<<endl;
   }

    return 0;
}

void addition(int A[ROW][COL], int B[ROW][COL], int C[ROW][COL]){

    int i, j;
    for(i = 0; i<ROW; i++){
        for(j = 0; j<COL; j++){

            C[i][j] = A[i][j] + B[i][j];

        }
   }

}
