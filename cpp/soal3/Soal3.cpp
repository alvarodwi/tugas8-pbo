#include "SlipGaji.cpp"

int main()
{
    // kasus 1, masuk sebelum + pulang setelah jam kerja
    SlipGaji slip1 = SlipGaji(1, "Andi");
    slip1.setWaktuMasuk(Waktu(7, 30, 0));
    slip1.setWaktuPulang(Waktu(17, 30, 0));
    slip1.hitungGaji();
    slip1.printSlipGaji();

    cout << '\n';

    // kasus 2, masuk sebelum + pulang sebelum jam kerja
    SlipGaji slip2 = SlipGaji(2, "Budi");
    slip2.setWaktuMasuk(Waktu(6, 30, 0));
    slip2.setWaktuPulang(Waktu(15, 30, 0));
    slip2.hitungGaji();
    slip2.printSlipGaji();

    cout << '\n';

    // kasus 3, masuk setelah + pulang setelah jam kerja
    SlipGaji slip3 = SlipGaji(3, "Chandra");
    slip3.setWaktuMasuk(Waktu(9, 30, 0));
    slip3.setWaktuPulang(Waktu(17, 30, 0));
    slip3.hitungGaji();
    slip3.printSlipGaji();

    cout << '\n';

    // kasus 4, masuk setelah + pulang sebelum jam kerja
    SlipGaji slip4 = SlipGaji(4, "Deni");
    slip4.setWaktuMasuk(Waktu(11, 45, 0));
    slip4.setWaktuPulang(Waktu(15, 30, 0));
    slip4.hitungGaji();
    slip4.printSlipGaji();

    cout << '\n';
    /*
    // kasus 5, error salah input waktu
    SlipGaji slip5 = SlipGaji(5, "Erik");
    slip5.setWaktuMasuk(Waktu(24, 30, 0));
    slip5.setWaktuPulang(Waktu(15, 30, 0));
    slip5.hitungGaji();
    slip5.printSlipGaji();

    cout << '\n';
    */
    // kasus 6, error salah input waktu pulang < waktu masuk
    SlipGaji slip6 = SlipGaji(6, "Frank");
    slip6.setWaktuMasuk(Waktu(15, 30, 0));
    slip6.setWaktuPulang(Waktu(11, 44, 0));
    slip6.hitungGaji();
    slip6.printSlipGaji();

    cout << '\n';
}