#include <iostream>
#include "bintang.cpp"

using namespace std;

int main()
{
    int baris;
    Bintang star1(5);
    Bintang star2;
    Bintang star3;
/*
    cout << "Print star1 :" << endl;
    star1.printBintangForRataKiri();
    star1.printBintangForRataKanan();
    star1.printBintangWhileRataKiri();
    star1.printBintangWhileRataKanan();

    cout << endl;

    cout << "Print star2 :" << endl;
    star2.printBintangForRataKiri();
    star2.printBintangForRataKanan();
    star2.printBintangWhileRataKiri();
    star2.printBintangWhileRataKanan();
*/
    cout << "Input jumlah baris > ";
    cin >> baris;
    star3.setBaris(baris);
    cout << "Print star3 :" << endl;
    star3.printBintangForRataKiri();
    star3.printBintangForRataKanan();
    star3.printBintangWhileRataKiri();
    star3.printBintangWhileRataKanan();
}
