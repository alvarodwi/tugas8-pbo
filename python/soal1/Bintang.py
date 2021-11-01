"""
    Nama Program          : Bintang.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200023)
                            - Johanes Bagus Prasetyo        (140810200039)
                            - Rafiansyah Rasyid Wikawang    (140810200061)
    Tanggal               : 1/11/2021
"""
class Bintang:
    def __init__(self, baris = 4):
        self.__baris = baris

#Method
    def setBaris(self, num):
        if(int(num) < 0):
            print("baris tidak boleh negatif!")
            exit(0)
        self.__baris = int(num)

    def printBintangForRataKiri(self):
        for i in range(self.__baris):
            print(str(i+1) + ". ",end = "")
            for j in range(self.__baris):
                if (i < j):
                    print("  ",end = "")
                else:
                    print("* ", end = "")
            print()
        print()

    def printBintangForRataKanan(self):
        for i in range(self.__baris):
            print(str(i+1) + ". ",end = "")
            for j in range(self.__baris):
                if (i <= j):
                    print("* ", end = "")
                else:
                    print("  ", end = "")
            print()
        print()

    def printBintangWhileRataKiri(self):
        i = 0
        while i < self.__baris:
            print(str(i+1) + ". ",end = "")
            j = 0
            while j<self.__baris:
                if (i < j):
                    print("  ", end = "")
                else:
                    print("* ", end = "")
                j+=1
            print()
            i+=1
        print()

    def printBintangWhileRataKanan(self):
        i = 0
        while i < self.__baris:
            print(str(i+1) + ". ",end = "")
            j = 0
            while j<self.__baris:
                if (i <= j):
                    print("* ", end = "")
                else:
                    print("  ", end = "")
                j+=1
            print()
            i+=1
        print()