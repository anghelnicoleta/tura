#include <iostream>
#include <stdlib.h>

using namespace std;

int n[100], sol, i, j, a;

void afisare()
{
    sol++;
    cout << "\n Solutia: " << sol << " \n";
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
            if (n[i] == j) cout << "T ";
            else cout << "0 "; cout << '\n';
    }

}
int valid(int k)
{
    for (i = 1; i <= k - 1; i++)
        if (n[i]==n[k]) return 0; return 1;
}
int solutie(int k)
{
    if (k == a) return 1; return 0;
}

void back(int k)
{
    //int i;
    for (i = 1; i <= a; i++)
    {
        n[k] = i;
        if (valid(k) == 1)
        {
            if (solutie(k) == 1) afisare();
            else back(k + 1);
        }
    }

}
int main()
{
    cout << "introduceti dimensiunea tablei: ";
    cin >> a;
    sol = 0;
    back(1);
    cout << "nr total de solutii " << sol;
}
