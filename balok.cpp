#include <iostream>
using namespace std;


float luas_permukaan(float p, float l, float t){
    float L;
    L = 2 * ( (p*l) + (p*t) + (l*t) );
    return L;
}

float volume(float p, float l, float t){
    float V;
    V = p * l * t;
    return V;
}

int main() {
    float p, l, t;
    float luasnya;
	float volumenya;

    cout << " Menghitung Luas dan Volume Balok \n";
    cout << " Panjang : ";
    cin >> p;

    cout << " Lebar : ";
    cin >> l;

    cout << " Tinggi : ";
    cin >> t;

    luasnya = luas_permukaan(p, l, t);
    volumenya = volume(p, l, t);
  
    cout << " Luas : " << luasnya;
	cout << " Volume : " << volumenya;

    return 0;
}