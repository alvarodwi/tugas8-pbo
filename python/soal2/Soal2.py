"""
    Nama Program          : Soal2.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 1/11/2021
"""
from Matrik import Matrik

m1 = Matrik(2, 2)
m1.inputArr()
print("\nOUTPUT")
m1.cetakArr()
print("Jumlah Baris > ", end="")
jBaris = m1.jumlahBaris()
print(jBaris)
print("Jumlah Kolom > ", end="")
jKolom = m1.jumlahKolom()
print(jKolom)