#include <iostream>
using namespace std;
int primeFactors(int);
// OR
// void primeFactors(int n);
// int nextPrime(int n);
// int isPrime(int);
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Prime Factors are: ";
    primeFactors(n);
    return 0;
}
int primeFactors(int n)
{
    int i;
    if (n <= 1)
        return 0;
    while (n % 2 == 0)
    {
        cout << "2"
             << " ";
        n = n / 2;
        while (n % 2 == 0)
        {
            n = n / 2;
        }
    }
    while (n % 3 == 0)
    {
        cout << "3"
             << " ";
        n = n / 3;
        while (n % 3 == 0)
        {
            n = n / 3;
        }
    }
    for (i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
            while (n % i == 0)
            {
                n = n / i;
            }
        }
        while (n % (i + 2) == 0)
        {
            cout << (i + 2) << " ";
            n = n / (i + 2);
            while (n % (i + 2) == 0)
            {
                n = n / (i + 2);
            }
        }
    }
    if (n > 3)
        cout << n;
}
// OR
// int isPrime(int n)
// {
//     int i;
//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//             return 0;
//     }
//     return 1;
// }
// int nextPrime(int n)
// {
//     for (n++; !isPrime(n); n++)
//         ;
//     return n;
// }
// void primeFactors(int n)
// {
//     int i = 2, flag = 1;
//     while (n > 1)
//     {
//         while (n % i == 0)
//         {
//             n = n / i;
//             flag = 0;
//         }
//         if (flag == 0)
//             cout << i << "  ";
//         i = nextPrime(i);
//     }
// }