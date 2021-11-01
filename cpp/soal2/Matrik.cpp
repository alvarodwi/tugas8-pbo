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
        if (b < 0 || k < 0)
        {
            cout << "Matrik tidak boleh berordo negatif!";
            exit(0);
        }
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

    void jumlahBaris()
    {
        int jBaris[10] = {0};
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                jBaris[i] += arr[i][j];
            }
        }
        for (int i = 0; i < baris; i++)
        {
            cout << "jBaris[" << i << "] = " << jBaris[i] << endl;
        }
        cout << endl;
    }

    void jumlahKolom()
    {
        int jKolom[10] = {0};
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                jKolom[i] += arr[j][i];
            }
        }
        for (int i = 0; i < kolom; i++)
        {
            cout << "jKolom[" << i << "] = " << jKolom[i] << endl;
        }
        cout << endl;
    }
};