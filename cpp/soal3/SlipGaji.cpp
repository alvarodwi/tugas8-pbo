#include <iostream>
#include <string>
#include "Waktu.cpp"

using namespace std;

class SlipGaji
{
private:
    int kodePegawai;
    string namaPegawai;
    Waktu waktuMasuk;
    Waktu waktuPulang;
    Waktu lamaKerja;
    int gaji;

    bool validasiWaktuPulang(Waktu w)
    {
        if (w.getJam() < waktuMasuk.getJam())
        {
            return false;
        }
        else if (w.getJam() == waktuMasuk.getJam())
        {
            if (w.getMenit() < waktuMasuk.getMenit())
            {
                return false;
            }
            else if (w.getMenit() == waktuMasuk.getMenit())
            {
                if (w.getDetik() < waktuMasuk.getDetik())
                {
                    return false;
                }
            }
        }
        return true;
    }

public:
    SlipGaji(int kode, string nama)
    {
        kodePegawai = kode;
        namaPegawai = nama;
    }

    void setWaktuMasuk(Waktu w)
    {
        waktuMasuk = w;
    }

    void setWaktuPulang(Waktu w)
    {
        if (validasiWaktuPulang(w))
        {
            waktuPulang = w;
        }
        else
        {
            cout << "Input waktu pulang salah!";
            exit(0);
        }
    }

    void hitungGaji()
    {
        lamaKerja = Waktu();
        if (waktuMasuk.getJam() < 8 && waktuPulang.getJam() > 16)
        {
            lamaKerja.setJam(8);
        }
        else if (waktuMasuk.getJam() < 8 && waktuPulang.getJam() < 16)
        {
            lamaKerja = Waktu(8, 0, 0).hitungSelisih(waktuPulang);
        }
        else if (waktuMasuk.getJam() > 8 && waktuPulang.getJam() > 16)
        {
            lamaKerja = waktuMasuk.hitungSelisih(Waktu(16, 0, 0));
        }
        else if (waktuMasuk.getJam() > 8 && waktuPulang.getJam() < 16)
        {
            lamaKerja = waktuMasuk.hitungSelisih(waktuPulang);
        }
        gaji = lamaKerja.getJam() * 50000;
    }

    void printSlipGaji()
    {
        cout << ".:: SLIP GAJI ::." << endl;
        cout << "KodePegawai\t: " << kodePegawai << endl;
        cout << "Nama\t\t: " << namaPegawai << endl;
        cout << "Jam Masuk\t: " << waktuMasuk.toString() << endl;
        cout << "Jam Pulang\t: " << waktuPulang.toString() << endl;
        cout << "Lama Kerja\t: " << lamaKerja.toString() << endl;
        cout << "Gaji\t\t: Rp." << gaji << endl;
    }
};