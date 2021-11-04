#include <iostream>

using namespace std;

class Matrik
{
private:
    int baris;
    int kolom;
    int arr[10][10];

public:
    Matrik()
    {
        baris = 2;
        kolom = 2;
        arr[10][10] = {};
    }

    Matrik(int b, int k)
    {
        if (b < 0 || k < 0)
        {
            cout << "Matrik tidak boleh berordo negatif!";
            exit(0);
        }
        baris = b;
        kolom = k;
        arr[10][10] = {};
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
        if (b < 0)
        {
            cout << "Matrik tidak boleh berordo negatif!";
            exit(0);
        }
        baris = b;
    }

    void setKolom(int k)
    {
        if (k < 0)
        {
            cout << "Matrik tidak boleh berordo negatif!";
            exit(0);
        }
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

    int *jumlahBaris(int *jBaris)
    {
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                jBaris[i] += arr[i][j];
            }
        }
        return jBaris;
    }

    int *jumlahKolom(int *jKolom)
    {
        for (int i = 0; i < kolom; i++)
        {
            for (int j = 0; j < baris; j++)
            {
                jKolom[i] += arr[j][i];
            }
        }
        return jKolom;
    }
};