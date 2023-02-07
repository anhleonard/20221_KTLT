#include <bits/stdc++.h>
using namespace std;
int m, n, SMIN = 1000000;
long long S = 0;
int cmin = 100000000;
int x[100];
int c[100][100];
vector<int> flag(100, false);
void TRY(int k)
{
    for (int i = 2; i <= n; i++)
    {
        if (flag[i] == false && c[x[k - 1]][i] != -1)
        {
            flag[i] = true;
            x[k] = i;
            S = S + c[x[k - 1]][i];
            if (k == n)
            {
                if (S + c[i][1] < SMIN && c[i][1] != -1)
                    SMIN = S + c[i][1];
            }
            else if (S + cmin * (n - k + 1) < SMIN)
            {

                TRY(k + 1);
            }
            flag[i] = false;
            S = S - c[x[k - 1]][i];
        }
    }
}
int main()
{
    printf("Ho Va Ten: Tran Thi Anh\n");
    printf("MSSV: 20204512\n\n");
    int a, b;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                c[i][j] = 0;
            else
                c[i][j] = -1;
        }
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        cin >> c[a][b];
        if (c[a][b] < cmin)
            cmin = c[a][b];
    }
    x[1] = 1;
    flag[1] = true;
    TRY(2);
    cout << "Ouput: ";
    cout << SMIN;
}
