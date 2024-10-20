#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
#include <iostream>
#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last

using namespace std;
struct lagu{
    std::string Judul;
    std::string Band;
};
typedef lagu infotype;
typedef struct elmList *address;
struct elmList{
    infotype info;
    address prev;
    address next;
};
struct list{
    address first;
    address last;
};

void createList_103032300040(list &L);
bool isEmpty_103032300040(list L);
address createNewElmt_103032300040(infotype X);
void insertFirst_103032300040(list &L, address P);
void insertAfter_103032300040(list &L, address P, address Prec);
void insertLast_103032300040(list &L, address P);
void deleteFirst_103032300040(list &L, address P);
void deleteAfter_103032300040(list &L, address Prec, address P);
void deleteLast_103032300040(list &L, address P);
void concat_103032300040(list L1, list L2, list &L3);
address findSong_103032300040(string Judul, list L);
void removeSong_103032300040(string Judul, list &L);
void songPlayList_103032300040(list L);
#endif // DLL_H_INCLUDED
