#include <stdio.h>

int determinant(int a[3][3], int n);

int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("%d\n", determinant(a, 3));
    return 0;
}

int determinant(int a[3][3], int n) {
    int det = 0;
    int s[3][3];
    if (n == 1)
        return a[0][0];
    int sign = 1;
    for (int k = 0; k < n; k++) {  // for the cofactors row
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == k)
                    continue;
                s[subi][subj] = a[i][j];
                subj++;
            }
            subi++;
        }
        det += sign * a[0][k] * determinant(s, n-1);
        sign *= -1;
    }
    return det;
}