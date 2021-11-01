#include <iostream>
#include "Matrik.cpp"

using namespace std;

int main()
{
    Matrik m(3, 3);
    int arr[10][10] = {{1, 0, 6}, {5, 3, 1}, {2, 5, 2}};
    m.setArr(arr);
    m.cetakArr();
    cout << "\nOUTPUT\n";
    m.jumlahBaris();
    m.jumlahKolom();

    cout << endl;

    Matrik m2;
    m2.setMatrik(new int[10][10]{{1, 3}, {2, 4}}, 2, 2);
    m2.cetakArr();
    cout << "\nOUTPUT\n";
    m2.jumlahBaris();
    m2.jumlahKolom();

    cout << endl;

    Matrik m3(-1, -1);
}