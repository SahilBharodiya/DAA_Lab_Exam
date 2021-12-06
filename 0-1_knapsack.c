#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int m = 8;
    int p[] = {0, 1, 2, 5, 6};
    int w[] = {0, 2, 3, 4, 5};
    int n = 4;
    int arr[n + 1][m + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                arr[i][j] = 0;
            }

            else if (w[i] <= j)
            {
                arr[i][j] = max(arr[i - 1][j], arr[i - 1][j - w[i]] + p[i]);
            }
            else
            {
                arr[i][j] = arr[i - 1][j];
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int result[n];
    int i = n;
    int j = m;
    while (i >= 0 && j >= 0)
    {
        if (arr[i][j] == arr[i - 1][j])
        {
            result[i - 1] = 0;
            i--;
        }
        else
        {
            result[i - 1] = 1;
            j = j - w[i];
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}