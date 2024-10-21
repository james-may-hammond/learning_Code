#include <stdio.h>
void product(int a[][3],int b[][3]);
int main(){
    int a[3][3] = {{1,2,3},{1,0,1},{2,1,4}};
    int a_t[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            a_t[i][j]=a[j][i];
        }
    }
    product(a,a_t);
    // multiplying a * a_t = c
}
void product(int a[][3],int b[][3]){
    int c[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            c[i][j] = 0;
            for (int k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++)
            printf("%2d ", c[i][j]);
        printf("\n");
    }
}