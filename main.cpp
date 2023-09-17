#include<iostream>
using namespace std;

#define MAX 4
void llenarVector();
//Muestra de prototipo

int main(){

    double A[MAX][MAX]={{1,1,1,1},
                        {2,2,2,2},
                        {3,3,3,3},
                        {4,4,4,4}}, x[MAX]={5,5,5,5}, y[MAX]={0,0,0,0};
    /* Initialize A and x, assign y = 0 */

    /* First pair of loops */
    //izquierda derecha, arriba abajo
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            y[i] += A[i][j]*x[j];
    
    /* Assign y = 0 */
    
    /* Second pair of loops */
    //arriba abajo, izquierda derecha
    for (int j = 0; j < MAX; j++)
        for (int i = 0; i < MAX; i++)
            y[i] += A[i][j]*x[j];
    cout<<"oleee";
    return 0;
}
void llenarVector(){

}