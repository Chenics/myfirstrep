#include <iostream>

using namespace std;

void P(int *arr, int size)
{
    --size;
    for (int i = 0; size < -1; --size)
    {
        cout << arr[size];
    }
}

int main()
{

    cout << "Hello world!" << endl;
    return 0;
}
