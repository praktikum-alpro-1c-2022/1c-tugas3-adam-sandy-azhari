#include<iostream>
using namespace std;

int main(){

    // deklarasi variable
    float I, V, R;
    float rumusArus, rumusTenggang, rumusHambatan;
    // input
    cout<<"Masukan nilai arus(I): ";
    cin>> I;
    cout<<"Masukan nilai tenggang(V): ";
    cin>> V;
    cout<<"Masukan nilai hambatan(R): ";
    cin>> R;

    // rumus
    rumusArus = V / R;
    rumusHambatan = I * R;
    rumusTenggang = V / I;

    // hasil akhir
    cout<<"Hasil perhitungan dari arus(I): "<<rumusArus<<endl;
    cout<<"Hasil perhitungan dari tenggangan(V): "<<rumusTenggang<<endl;
    cout<<"Hasil perhitungan dari hambatan(R): "<<rumusHambatan<<endl;

    return 0;
}
