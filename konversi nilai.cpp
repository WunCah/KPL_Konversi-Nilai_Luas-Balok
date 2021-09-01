#include <iostream>
using namespace std;

float nilai_akhirnya (float n, float t, float u, float s){

    float A;
    A = ( (n*0.1) + (t*0.2) + (u*0.3) + (s*0.4) );
    return A;
}

int main() {
	char nama[25],*Grade;
    float n, t, u, s;
    float nilainya;

    cout << " Konversi Nilai Mahasiswa \n";
    
    cout << " Nama Mahasiswa : ";gets(nama);
                                                                                                                                              
    cout << " Nilai Absen : ";
    cin >> n;
    
    cout << " Nilai Tugas : ";
    cin >> t;
    
    cout << " Nilai Uts : ";
    cin >> u;
    
    cout << " Nilai Uas : ";
    cin >> s;
    
    nilainya = nilai_akhirnya(n, t, u, s);
                                       
    cout << "Nilai Akhir : \n" << nilainya;
    
    if(nilainya >30 && nilainya <54){
      cout<<" Nilai Anda adalah:   D";
    }
    else if(nilainya >55 && nilainya <65){
      cout<<" Nilai Anda adalah:   C";
    }
    else if(nilainya >66 && nilainya <80){
      cout<<" Nilai Anda adalah:   B";
    }
    else if(nilainya >81 && nilainya <100){
      cout<<" Nilai Anda adalah:   A";
    }

    
    return 0;
    
}
                                   
                                       
             