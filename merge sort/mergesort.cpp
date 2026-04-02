#include <iostream>
using namespace std;

// create main array & temporary array
int arr[20], B[20];
// n is array input size
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang elemnet arrray : ";
        cin >> n;

        if (n <= 20)
        {
            break;      
        }
        else
        {
            cout << "\nMaksimalnpanjang array adalah 20" << endl;
        }
    }
    cout << "\n-----------------" << endl;
    cout << "nInput Isi element array" << endl;
    cout << "n------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "array index ke-" << i << ": ";
        cin >> arr[i];
    }
}

