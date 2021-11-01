class Waktu:
    def __init__(self,jam = 0, menit = 0, detik = 0):
        if(jam > 23 or menit > 59 or detik > 59):
            print("Kesalahan input waktu!")
            exit(0)
        else:
            self.__jam = jam
            self.__menit = menit
            self.__detik = detik

    #method
    def setJam(self, j):
        if(int(j) > 23):
            print("Kesalahan input waktu!")
            exit(0)
        self.__jam = int(j)

    def setMenit(self,m):
        if (int(m) > 59):
            print("Kesalahan input waktu!")
            exit(0)
        self.__menit = int(m)

    def setDetik(self, d):
        if(int(d) > 59):
            print("Kesalahan input waktu!")
            exit(0)
        self.__detik = int(d)
    
    def getJam(self):
        return self.__jam

    def getMenit(self):
        return self.__menit

    def getDetik(self):
        return self.__jam
    
    
    def hitungSelisih(self, akhir):
        temp = Waktu()
        temp.__jam = akhir.getJam() - self.__jam
        temp.__menit = akhir.getMenit() - self.__menit
        if (temp.getMenit() < 0):
            temp.__menit = 60 + temp.getMenit()
            temp.__jam-=1
        temp.__detik = akhir.getDetik() - self.__detik
        if (temp.getDetik() < 0):
            temp.__detik = abs(temp.getDetik())
            temp.__menit-=1
            if (temp.getMenit() < 0):
                temp.__menit = 60 + temp.getMenit()
                temp.__jam-=1
        return temp

    def toString(self):
        return str(self.__jam) + ":" + str(self.__menit) + ":" + str(self.__detik)

    def printWaktu(self):
        return str(self.__jam) + " jam " + str(self.__menit) + " menit " + str(self.__detik) + " detik"