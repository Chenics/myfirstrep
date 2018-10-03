#include <iostream>

using namespace std;

double fact(int N)
{
    if (N < 0)
    {
        return 0;
    }
    if (N == 0)
    {
        return 1;
    }
    else
    {
        return N * fact(N - 1);
    }
}

int main()
{
    int N;
    setlocale(0, "");
    cout << "Введите число для вычесления факториала: ";
    cin >> N;
    cout << "Факториал для числа " << N << " = " << fact(N) << endl;
    return 0;
}
