#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_sort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    float time = 0.0f;

    clock_t begin = clock();

    insertion_sort(arr, n);

    clock_t end = clock();
    time += (float)(end - begin) / CLOCKS_PER_SEC;

    printf("Time taken by insertion sort for sorting %d elements %.15f seconds", n, time);

    return 0;
}