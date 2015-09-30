#include <stdio.h>
#include <stdlib.h>

#define N 10
int A[N];

// Recursive Selection Sort
void rselsort(int i, int n)
{
        int j, small, temp;
        

        // basis is when i == n-1, in which case
        // the function returns without doing anything.
        if(i < n - 1) {
                //find minimum
                small = i;
                for(j = i + 1; j < n; j++)
                        if (A[j] < A[small])
                                small = j;
                // swap
                temp = A[small];
                A[small] = A[i];
                A[i] = temp;
                
                int k;
                for(k = 0; k < n; k++) {
                        printf(" %4d ", A[k]);                 
                }
                printf("                %4d and %4d were swapped", temp, A[small]);
                printf("\n\n"); 

                // recursive call
                rselsort(i + 1, n);
        }
}

int main()
{
        srandom(0);

        int i;
        printf("\n\nStarting point:\n");
        for(i = 0; i < N; i++) {
                A[i] = random() % 100;
                printf("%4d ", A[i]);
        }
        printf("\n_____________________________________________________________");
        printf("\n\n");

        rselsort(0, N);
        printf("_______________________________________________________________\nSorted Array:\n");
        for(i = 0; i < N; i++) {
                printf("%4d ", A[i]);
        }
        printf("\n\n\n");
        return 0;
}
