#include <iostream>
using namespace std;

int arr[20]; // membuat array dengan panjang data 20
int n; // membuat variabel inputan n

void input()
{
    while (true)
    {
        cout << "masukkan jumlah data pada array : "; // membuat inputan jumlah elemen array
        cin >> n; // memanggil variabel inputan n

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;
    cout << "=====================" << endl; // menampilkan susuan data elemen array
    cout << "masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int 1 = 0; i < n; i++) // menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "data ke-" << (i + 1) << ": "; // memasukkan atau menginputkan nilai data n
        cin >> arr[i]; // menyimpan nilai data n kedalam array arr 
    }
}

void insertionSort()
{
    int temp; // membuat variabel data temporer atar penyimpanan sementara
    int j, i; // membuat variabel j sebagai penanda

    for (i = 1; i <= n - 1; i++) // step 1
    {
        temp = arr[i]; // step 2
    }
}