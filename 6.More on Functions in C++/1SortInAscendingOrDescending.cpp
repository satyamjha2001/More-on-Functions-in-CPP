#include <iostream>
using namespace std;
void sort(int n, int arr[]);
int main()
{
    int n;
    cout << "Enter size of an array:";
    cin >> n;
    int arr[n];
    cout << "Enter elements of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
void sort(int n, int arr[])
{
    int temp;
    bool asc;
    cout << "Enter 1 for ascending sorting and 0 for descending sorting: ";
    cin >> asc;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (asc == true && arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            else if (asc == false && arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}