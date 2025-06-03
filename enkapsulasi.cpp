#include <iostream>
using namespace std;

class remoteLampu{
    private :
    string saklarNo [10];
    public :
    void setSaklarNo (int i, string value ){
        saklarNo [i] = value ;
    }

    string setSaklarNo (int i){
        return saklarNo[i];
    }
};

int main(){
    remoteLampu lampuRumah;

    lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarNo(2, "Lampu Kamar  Tidur");
    lampuRumah.setSaklarNo(3, "Lampu Dapur");
    
    cout << lampuRumah.setSaklarNo[0] << endl;
    cout << lampuRumah.setSaklarNo[1] << endl;
    cout << lampuRumah.setSaklarNo[2] << endl;
    cout << lampuRumah.setSaklarNo[3] << endl;
     return 0;

};

