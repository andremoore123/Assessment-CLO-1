#ifndef ADT_H_INCLUDED
#define ADT_H_INCLUDED
#include <iostream>
using namespace std;
/*
Andre Eka Putra Simanjuntak
1301204173
IF-44-01
*/

#define info(p) (p)->info
#define next(p) (p)->next
#define first(L) ((L).first)
#define NILL NULL

typedef char infotype;
typedef struct elmtSingle*adrSingle;

struct elmtSingle{
    infotype info;
    adrSingle next;
};

struct listSingle{
    adrSingle first;
};

void create_list_1301204173(listSingle &L);
adrSingle alokasi_1301204173(infotype new_data);
void show_1301204173(listSingle L);
void insert_first_1301204173(listSingle &L, adrSingle New);
void delete_last_1301204173(listSingle &L, adrSingle New);
int countX_1301204173(listSingle L, infotype x);
#endif // ADT_H_INCLUDED
