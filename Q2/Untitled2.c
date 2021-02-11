#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long int n; 
long long int det(long long int B[n][n]);
int main() {
    long long int determinant;
    long long int row,column;
    scanf("%d",&n);
    long long int A[n][n];
    for(row = 0; row < n; row++)
        for(column = 0; column < n; column++)
            scanf("%ld",&A[row][column]);
            
    determinant = det(A);

    printf("%ld\n",determinant);

    return 0;
}

long long int det(long long int B[n][n]) {
    long long int row_size = n;
    long long int column_size = n;

    if (row_size != column_size) {
        printf("DimensionError: Operation Not Permitted \n");
        exit(1);
    }

    else if (row_size == 1)
        return (B[0][0]);

    else if (row_size == 2)
        return (B[0][0]*B[1][1] - B[1][0]*B[0][1]);

    else {
        long long int minor[row_size-1][column_size-1];
        long long int row_minor, column_minor;
        long long int firstrow_columnindex;
        long long int sum = 0;
        long long int row,column;
        
        for(firstrow_columnindex = 0; firstrow_columnindex < row_size;
                firstrow_columnindex++) {

            row_minor = 0;

            for(row = 1; row < row_size; row++) {

                column_minor = 0;

                for(column = 0; column < column_size; column++) {
                    if (column == firstrow_columnindex)
                        continue;
                    else
                        minor[row_minor][column_minor] = B[row][column];

                    column_minor++;
                }

                row_minor++;
            }

            n = row_minor;
            n = column_minor;

            if (firstrow_columnindex % 2 == 0)
                sum += B[0][firstrow_columnindex] * det(minor);
            else
                sum -= B[0][firstrow_columnindex] * det(minor);

        }
        return sum;
    }
} 
