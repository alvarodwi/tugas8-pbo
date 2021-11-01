#include <iostream>

using namespace std;

class Bintang
{
private:
    int baris;

public:
    Bintang()
    {
        baris = 4;
    }

    Bintang(int num)
    {
        baris = num;
    }

    void setBaris(int num)
    {
        baris = num;
    }

    void printBintangForRataKiri()
    {
        for (int i = 0; i < baris; i++)
        {
            cout << (i + 1) << ". ";
            for (int j = 0; j < baris; j++)
            {
                if (i < j)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "* ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    void printBintangForRataKanan()
    {
        for (int i = 0; i < baris; i++)
        {
            cout << (i + 1) << ". ";
            for (int j = 0; j < baris; j++)
            {
                if (i <= j)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    void printBintangWhileRataKanan()
    {
        int i = 0;
        while (i < baris)
        {
            cout << (i + 1) << ". ";
            int j = 0;
            while (j < baris)
            {
                if (i <= j)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
                j++;
            }
            cout << endl;
            i++;
        }
        cout << endl;
    }

    void printBintangWhileRataKiri()
    {
        int i = 0;
        while (i < baris)
        {
            cout << (i + 1) << ". ";
            int j = 0;
            while (j < baris)
            {
                if (i < j)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "* ";
                }
                j++;
            }
            cout << endl;
            i++;
        }
        cout << endl;
    }
};