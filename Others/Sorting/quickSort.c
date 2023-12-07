#include <stdio.h>
#include<time.h>

int partition(int p, int r);
void quickSort(int left, int right);
int A[100001], N;
int main()
{
    int i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    /*printf("Enter array: ");
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
    }*/

    srand(time(NULL));

    for (i = 1; i <= N; i++)
    {
        A[i] = (rand() % 100);
    }

    time_t start,end;
    start= clock();

    quickSort(1, N);

    end=clock();
    double t= (double)(end-start)/CLOCKS_PER_SEC; //in seconds


    printf("\nTime taken by quickSort() function : %f seconds\n",t);

    printf("\nSorted array: ");
    for (i = 1; i <= N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int p, int r)
{
    int x, i, j, k, temp;
    x = A[r];
    i = p - 1;
    for (j = p; j <= r - 1; j++)
    {
        if (A[j] <= x)
        {
            i = i + 1;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;

    for (k = 1; k <= N; k++)
    {
        printf("%d ", A[k]);
    }

    printf("\n");

    return i + 1;
}

void quickSort(int p, int r)
{
    int q;
    if (p < r)
    {
        q = partition(p, r);
        quickSort(p, q - 1);
        quickSort(q + 1, r);

    }
}
