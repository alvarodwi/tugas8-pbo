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