#include <iostream>

using namespace std;

void Fill_Pib (int *arr, int size)
{
    arr[0] = a;
    arr[1] = b;
    int temp = a + b;
    for (int i = 2; i < size; ++i)
    {
        arr[i] = temp;
        temp += arr[i];
    }
}

int main()
{
    double res = Fill_Pib(8, 4)
    cout << res << endl;
    return 0;
}
