"""
    Nama Program          : Soal4.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 1/11/2021
"""
from HasilSidang import HasilSidang

print("//menggunakan input")
sidang = HasilSidang()
sidang.inputNilai()
sidang.outputSidang()

print()

print("//menggunakan fungsi set")
sidang2 = HasilSidang()
sidang2.setHasilSidang(80, 80, 80)
sidang2.outputSidang()

print()

print("//menggunakan fungsi setter masing-masing")
sidang3 = HasilSidang()
sidang3.setNilaiPenguji1(100)
sidang3.setNilaiPenguji2(75)
sidang3.setNilaiPembimbing(75)
sidang3.outputSidang()

print()

print("//menggunakan constructor")
sidang4 = HasilSidang(80, 60, 80)
sidang4.outputSidang()