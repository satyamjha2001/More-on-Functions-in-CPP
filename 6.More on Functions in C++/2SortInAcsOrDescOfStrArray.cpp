#include <iostream>
#include <string.h>
using namespace std;
void sort(char str[][50], int n);
int main()
{
    int n = 3;
    cout << "Enter size of array stings" << endl;
    cin >> n;
    // char str[][20]={"Lakshman","Sita","Ram","Satyam"};
    char str[n][50];
    cout << "Enter your strings" << endl;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin.getline(str[i], 50);
    }
    sort(str, n);
    for (int i = 0; i < n; i++)
        cout << str[i] << " " << endl;
    return 0;
}
void sort(char A[][50], int size)
{
    int r, i;
    char temp[100];
    bool asc;
    cout << "Enter 0 for Descending sort and 1 for Ascending sort"<<endl;
    cin >> asc;
    for (r = 1; r < size; r++)
    {
        for (i = 0; i <= size - 1 - r; i++)
        {
            if (asc == true && strcmp(A[i], A[i + 1]) > 0)
            {
                strcpy(temp, A[i]);
                strcpy(A[i], A[i + 1]);
                strcpy(A[i + 1], temp);
            }
            else if (asc == false && strcmp(A[i], A[i + 1]) < 0)
            {
                strcpy(temp, A[i]);
                strcpy(A[i], A[i + 1]);
                strcpy(A[i + 1], temp);
            }
        }
    }
    if (asc == 1)
        {cout << "Strings in Ascending sort" << endl;}
    else
        {cout << "Strings in Descending sort" << endl;}
}