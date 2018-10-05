#include <iostream>

using namespace std;

int f (int* arr, int size)
{
    for (int i = 0, j = size-1, i < size, )
    {
        for (int k = 0; k < 2; k++)
        {
            cout << arr[i];
            ++i;
        }
        for (int k = 0; k < 2; k++)
        {
            cout << arr[i];
            --i;
        }
    }
}

int main()
{
    int arr[5] {1, 2, 3, 4, 5};
    f(arr, 5)
    cout << i << endl;
    return 0;
}
