#include <iostream>
using namespace std;

//deklarasi class BangunDatar
class BangunDatar;

class PersegiPanjang{
    public:
        void inputData(BnagunDatar &bd)
};

class BangunDatar{
    private:
        float panjang;
        float lebar;
        float hitungLuas(){
            return panjang * lebar;
        };
}