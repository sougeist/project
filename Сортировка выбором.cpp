#include <iostream>

using namespace std;

int main()
{
    int size;
        cin>>size;
        int arr[size];
    for (int i = 0; i!=size;i++) 
    {
        cin>>arr[i];
    }
    int min = 0;
    int buf = 0;
    for (int i = 0; i < size; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++) 
        {
            min = ( arr[j] < arr[min] ) ? j : min;
            if (i != min)
            {
                buf = arr[i];
                arr[i] = arr[min];
                arr[min] = buf;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
}