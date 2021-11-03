"""
    Nama Program          : Matrik.py
    Anggota Kelompok      : - Ariq Hakim Ruswadi            (140810200001)
                            - Alvaro Dwi Oktaviano          (140810200041)
                            - Johanes Bagus Prasetyo        (140810200043)
                            - Rafiansyah Rasyid Wikawang    (140810200049)
    Tanggal               : 1/11/2021
"""
class Matrik:
    #constructor
    def __init__(self, baris = 2, kolom = 2, arr = []):
        self.__baris = baris
        self.__kolom = kolom
        self.__arr = arr
        
    #method
    def setMatrik(self, a, b, k):
        if(int(b) < 0 or int(k) < 0):
            print("Matrik tidak boleh berordo negatif!")
            exit(0)
        self.__arr = a
        self.__baris = int(b)
        self.__kolom = int(k)

    def setBaris (self, baris): 
        if(int(baris) < 0):
            print("Matrik tidak boleh berordo negatif!")
            exit(0)
        self.__baris = baris
        
    def setKolom (self, kolom): 
        if(int(kolom) < 0):
            print("Matrik tidak boleh berordo negatif!")
            exit(0)
        self.__kolom = kolom

    def getBaris (self): 
        return self.__baris

    def getKolom (self): 
        return self.kolom

    def inputArr(self):
        print("Input matrik dengan ordo " + str(self.__baris) + "x" + str(self.__kolom))
        for i in range(self.__baris):
            row = []
            for j in range(self.__kolom):
                row.append(int(input("Masukan elemen [" + str(i+1) + "][" + str(j+1) + "]\t: "))) 
            self.__arr.append(row)
        
    def cetakArr(self):
        for i in self.__arr:
            for j in i:
                print(j, end = " ")
            print()

    def jumlahBaris(self):
        jBaris = []
        for i in range(0,self.__baris):
            jBaris.append(0)
            for j in range(0,self.__kolom):
                jBaris[i] += self.__arr[j][i]
    
        print(jBaris)
    
    def jumlahKolom(self):
        jKolom = []
        for i in range(0,self.__kolom):
            jKolom.append(0)
            for j in range(0,self.__baris):
                jKolom[i] += self.__arr[i][j]
    
        print(jKolom)