#include <iostream>
#include "Matrik.cpp"

using namespace std;

int main()
{
    Matrik m(3, 3);
    int arr[10][10] = {{1, 0, 6}, {5, 3, 1}, {2, 1, 2}};
    m.setArr(arr);
    m.cetakArr();
    cout << "\nOUTPUT\n";
    int jBaris[10] = {0};
    int *ptrBaris = m.jumlahBaris(jBaris);
    for (int i = 0; i < m.getBaris(); i++)
    {
        cout << "jBaris[" << i << "] = " << ptrBaris[i] << endl;
    }
    cout << endl;
    int jKolom[10] = {0};
    int *ptrKolom = m.jumlahKolom(jKolom);
    for (int i = 0; i < m.getKolom(); i++)
    {
        cout << "jKolom[" << i << "] = " << ptrKolom[i] << endl;
    }
    cout << endl;

    // Matrik m2;
    // m2.setMatrik(new int[10][10]{{1, 3}, {2, 4}}, 2, 2);
    // m2.cetakArr();
    // cout << "\nOUTPUT\n";
    // m2.jumlahBaris();
    // m2.jumlahKolom();

    // cout << endl;

    // Matrik m3(-1, -1);
}