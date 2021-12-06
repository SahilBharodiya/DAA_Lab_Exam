#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p[] = {100, 280, 120, 120};
    int w[] = {10, 40, 20, 24};
    int m = 60;

    double x[4];

    for (int i = 0; i < 4; i++)
    {
        x[i] = 0;
    }

    int weight = 0;

    for (int i = 0; i < 4; i++)
    {
        if (weight + w[i] <= m)
        {
            x[i] = 1;
        }
        else
        {
            x[i] = (m - weight) / w[i];
            weight = m;
            break;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}