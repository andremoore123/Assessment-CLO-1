#include "ADT.h"
#include <iostream>
#include <string>
using namespace std;
/*
Andre Eka Putra Simanjuntak
1301204173
IF-44-01
*/
void create_list_1301204173(listSingle &L){ // procedure membuat list kosong
     first(L) = NILL;
}

adrSingle alokasi_1301204173(infotype new_data){ // fungsi yang return address dari element yang akan dibuat
    adrSingle x;
    x = new elmtSingle;
    info(x) = new_data;
    next(x) = NILL;
    return x;
}

void show_1301204173(listSingle L){ // prosedur yang menampilkan seluruh data pada list, yang dimana jika list koosng, maka akan menampilkan "List Kosong"
    adrSingle p;
    p = first(L);
    cout << "Berikut isi dari list: " << endl;
    if (p != NILL){
        while (p != NILL){
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl << endl;
    } else {
        cout << "List Kosong" <<  endl;
    }
}

void insert_first_1301204173(listSingle &L, adrSingle New){ // prosedur yang menambah data pada awal list
    if (first(L) != NILL){
        next(New) = first(L);
        first(L) = New;
    } else {
        first(L) = New;
    }
}

void delete_last_1301204173(listSingle &L, adrSingle New){ // prosedur yang menghapus data terakhir pada list
    New = first(L);
    if (New != NILL){
        if (next(New) == NILL){
            first(L) = NILL;
        } else {
            while (next(next(New)) != NILL){
                New = next(New);
            }
            next(New) = NILL;
        }
    }
    else {
        cout << "List Kosong" << endl;
    }
}

int countX_1301204173(listSingle L, infotype x){ // fungsi yang mereturn bilangan bulat dari frekuensi munculnya suatu karakter pada list
    adrSingle z = first(L);
    int jumlah = 0;

    while (z != NILL){
        if (info(z) == x){
            jumlah++;
        }
        z = next(z);
    }
    return jumlah;
}
