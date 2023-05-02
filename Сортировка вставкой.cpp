#include <iostream>

using namespace std;

int main()
{
int size;
    cin>>size;
    int arr[size];
    for(int i = 0; i!=size;i++) 
    {
        cin>>arr[i];
    }
    int i = 0,j = 0;
    int buff = 0;
    for (i = 1; i < size; i++)
    {
        buff = arr[i];
        for (j = i - 1; j >= 0 && arr[j] >buff;j--)
        {
            swap(arr[j], arr[j+1]);
        }
    }
    for (int p = 0; p < size; p++)
    {
        cout << arr[p] << " ";
    }

    cout << endl;

   return 0;
}