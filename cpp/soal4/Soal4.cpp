#include "HasilSidang.cpp"

int main()
{
    cout << "//menggunakan input" << endl;
    HasilSidang sidang = HasilSidang();
    sidang.inputNilai();
    sidang.outputSidang();

    cout << endl;

    cout << "//menggunakan fungsi set" << endl;
    HasilSidang sidang2 = HasilSidang();
    sidang2.setHasilSidang(80, 80, 80);
    sidang2.outputSidang();

    cout << endl;

    cout << "//menggunakan fungsi setter masing-masing" << endl;
    HasilSidang sidang3 = HasilSidang();
    sidang3.setNilaiPenguji1(100);
    sidang3.setNilaiPenguji2(75);
    sidang3.setNilaiPembimbing(75);
    sidang3.outputSidang();

    cout << endl;

    cout << "//menggunakan constructor" << endl;
    HasilSidang sidang4 = HasilSidang(80, 60, 80);
    sidang4.outputSidang();
}