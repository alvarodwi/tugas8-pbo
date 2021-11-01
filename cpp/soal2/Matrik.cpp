#include <iostream>

using namespace std;

class Matrik
{
private:
    int baris;
    int kolom;
    int arr[10][10];

    void initializeArr()
    {
        for (int i = 0; i < 10; i++)
        {
            arr[i][i] = 0;
        }
    }

public:
    Matrik()
    {
        baris = 2;
        kolom = 2;
        initializeArr();
    }

    Matrik(int b, int k)
    {
        baris = b;
        kolom = k;
        initializeArr();
    }

    void setMatrik(int a[][10], int b, int k)
    {
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < k; j++)
            {
                arr[i][j] = a[i][j];
            }
        }
    }

    void setArr(int a[][10])
    {
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                arr[i][j] = a[i][j];
            }
        }
    }

    void setBaris(int b)
    {
        baris = b;
    }

    void setKolom(int k)
    {
        kolom = k;
    }

    void setElemenArr(int nilai, int b, int k)
    {
        arr[b][k] = nilai;
    }

    int getElemenArr(int b, int k)
    {
        return arr[b][k];
    }

    int getBaris()
    {
        return baris;
    }

    int getKolom()
    {
        return kolom;
    }

    void inputArr()
    {
        cout << "Input matrik dengan ordo" << baris << "x" << kolom << endl;
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout << "\tInput elemen [" << i << "," << j << "] > ";
                cin >> arr[i][j];
            }
        }
    }

    void cetakArr()
    {
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    int *jumlahBaris()
    {
        static int hasil[10];
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                hasil[i] += arr[i][j];
            }
        }
        return hasil;
    }

    int *jumlahKolom()
    {
        static int hasil[10];
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                hasil[i] += arr[j][i];
            }
        }
        return hasil;
    }
};