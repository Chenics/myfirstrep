#include <iostream>

using namespace std;

int main()
{
    int arr[5] {1, 2, 3, 4, 5};
    int temp = 1;
    for (int i = 0; i<5; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}
