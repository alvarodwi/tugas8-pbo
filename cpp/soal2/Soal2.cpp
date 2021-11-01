#include <iostream>
#include "Matrik.cpp"

using namespace std;

int main()
{
    Matrik m(3, 3);
    int arr[10][10] = {{1, 0, 6}, {5, 3, 1}, {2, 5, 2}};
    m.setArr(arr);
    m.cetakArr();
    int *jBaris = m.jumlahBaris();
    int *jKolom = m.jumlahKolom();

    cout << "\nOUTPUT\n";
    for (int i = 0; i < m.getBaris(); i++)
    {
        cout << "jBaris[" << i << "] = " << *(jBaris + 1) << endl;
    }
    cout << endl;
    for (int i = 0; i < m.getKolom(); i++)
    {
        cout << "jKolom[" << i << "] = " << *(jKolom + 1) << endl;
    }

    Matrik m2;
    m2.setMatrik(new int[10][10]{{1, 2}, {2, 4}}, 2, 2);
    m2.cetakArr();
}