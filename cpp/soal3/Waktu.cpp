#include <iostream>

using namespace std;

class Waktu{
    private:
        int jam;
        int menit;
        int detik;
    public:
        Waktu() {
            jam = 0;
            menit = 0;
            detik = 0;
        }
        
        Waktu(int j, int m, int d){
            jam = j;
            menit = m;
            detik = d;
        }

        void setJam(int j) {
            if(j > 23) {
                cout << "Kesalahan input waktu!";
                exit(0);
            }
            jam = j;
        }
        
        void setMenit(int m){
            if(m > 59) {
                cout << "Kesalahan input waktu!";
                exit(0);
            }
            menit = m;
        }
        
        void setDetik(int d) {
            if(d > 59) {
                cout << "Kesalahan input waktu!";
                exit(0);
            }
            detik = d;
        }
};