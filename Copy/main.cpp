#include <iostream>

using namespace std;

int f (int v, int key)
{
    return v^key;
}

void copy(int* dest, int* src, int size, int key)
{
    for (int i = 0; i < size; ++i)
    {
        dest[i] = f (src[i], key);
    }
}

//void print_array (int* arr)


int main()
{
    int arr[5] {1, 2, 3, 4, 5};
    int arr2[5] {0};

    copy (arr2, arr, 5, 7);

    for (auto i:arr2)
    {
        cout << i << endl;
    }

    return 0;
}
