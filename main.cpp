#include "ADT.h"
#include <iostream>
#include <string>
/*
Andre Eka Putra Simanjuntak
1301204173
IF-44-01
*/
int main()
{
    listSingle L;
    adrSingle p;
    infotype x;
    int i = 0, max_i = 10;
    // Membuat list L kosong
    create_list_1301204173(L);

    //Perulangan sebanyak 10 kali yang bertujuan menerima inputan yang berupa satu karakter dari user
    while (i < max_i){
        cout << "Input ke-" << i+1 << ": ";
        cin >> x;
        p = alokasi_1301204173(x);
        insert_first_1301204173(L, p);
        i++;
    }
    // Menampilkan seluruh data pada list setelah menerima inputan
    show_1301204173(L);

    //Menerima inputan karakter yang dimana akan dicari frekuensi munculnya pada list
    cout << "Masukkan char yang akan dicari: ";
    cin >> x;

    //Menampilkan frekuensi dari karakter yang telah diinputkan, pada suatu list
    cout << endl << "Total karakter " << x <<" pada list adalah: " << countX_1301204173(L, x) << endl << endl;

    //Menghapus data dari paling akhir sebanyak 3 kali
    i = 0;
    while (i < 3){
        delete_last_1301204173(L, p);
        i++;
    }

    //Menampilkan seluruh data setelah dilakukan penghapusan data sebanyak 3 kali
    show_1301204173(L);
}
