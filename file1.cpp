#include <iostream>
using  namespace std;

//deklarasi 
float jariJari;
float phi = 3.14159;

//prosedur
void awal (){
    cout << "Masukkan jari-jari lingkaran = ";
    cin >> jariJari;
}
//fungsi
float luas (float jari_jari,float phi){
    return phi * jariJari * jariJari;
}
 
void akhir (){
    cout << "Hasil luas untuk lingkaran dengan jari jari" << jariJari << "adalah:" << luas(jariJari,phi);
}
 int main (){
    awal();
    akhir();
 }