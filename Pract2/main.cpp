#include <iostream>

using namespace std;

void f(int* arr, int size)
{
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < size; ++i)
    {
        arr[i] = arr[i-1] + arr[i-2];
        cout << arr[i];
    }
}

int main()
{
    int arr[5] {1, 2, 3, 4, 5};
    cout << f(arr, 5) << endl;
    return 0;
}
