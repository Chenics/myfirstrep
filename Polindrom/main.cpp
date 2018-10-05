#include <iostream>

using namespace std;

bool is_polindrom (int* arr, int size)
{
    for(int i=0, j=size-1; i<j; ++i, --j)
    {
        if(arr[i]!=arr[j])
            return false;
    }
    return true;
}


int main()
{
    int arr[5] {3, 2, 1, 2, 3};
    cout <<   is_polindrom(arr, 5) << endl;
    return 0;
}
