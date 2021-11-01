"""
    Nama Program          : Soal3.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200023)
                            - Johanes Bagus Prasetyo        (140810200039)
                            - Rafiansyah Rasyid Wikawang    (140810200061)
    Tanggal               : 1/11/2021
"""

from SlipGaji import SlipGaji
from Waktu import Waktu

# kasus 1, masuk sebelum + pulang setelah jam kerja
slip1 = SlipGaji(1, "Andi")
slip1.setWaktuMasuk(Waktu(7, 30, 0))
slip1.setWaktuPulang(Waktu(17, 30, 0))
slip1.hitungGaji()
slip1.printSlipGaji()

print()

# kasus 2, masuk sebelum + pulang sebelum jam kerja
slip2 = SlipGaji(2, "Budi")
slip2.setWaktuMasuk(Waktu(6, 30, 0))
slip2.setWaktuPulang(Waktu(15, 30, 0))
slip2.hitungGaji()
slip2.printSlipGaji()

print()

# kasus 3, masuk setelah + pulang setelah jam kerja
slip3 = SlipGaji(3, "Chandra")
slip3.setWaktuMasuk(Waktu(9, 30, 0))
slip3.setWaktuPulang(Waktu(17, 30, 0))
slip3.hitungGaji()
slip3.printSlipGaji()

print()

# kasus 4, masuk setelah + pulang sebelum jam kerja
slip4 = SlipGaji(4, "Deni")
slip4.setWaktuMasuk(Waktu(11, 45, 0))
slip4.setWaktuPulang(Waktu(15, 30, 0))
slip4.hitungGaji()
slip4.printSlipGaji()

print()

# # kasus 5, error salah input waktu
# slip5 = SlipGaji(5, "Erik")
# slip5.setWaktuMasuk(Waktu(24, 30, 0))
# slip5.setWaktuPulang(Waktu(15, 30, 0))
# slip5.hitungGaji()
# slip5.printSlipGaji()

# print()

# kasus 6, error salah input waktu pulang < waktu masuk
slip6 = SlipGaji(6, "Frank")
slip6.setWaktuMasuk(Waktu(15, 30, 0))
slip6.setWaktuPulang(Waktu(11, 44, 0))
slip6.hitungGaji()
slip6.printSlipGaji()

print()