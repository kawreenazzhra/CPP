#include "DLL.h"

void createList_103032300040(list &L){
    first(L) = NULL;
    last(L) = NULL;
}

bool isEmpty_103032300040(list L){
    if (first(L) == NULL && last(L) == NULL){
        return true;
    }else{
        return false;
    }
}
address createNewElmt_103032300040(infotype X){
    address P = new elmList;
    if(P!=NULL){
        info(P) = X;
        next(P) = NULL;
        prev(P) = NULL;
    }else {
        P = NULL;
    }
    return P;
}
void insertFirst_103032300040(list &L, address P){
    if (first(L)!=NULL && last(L)!=NULL){
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }else{
        first(L) = P;
        last(L) = P;
    }
}
void insertAfter_103032300040(list &L, address P, address Prec){
    next(P) = next(Prec);
    prev(P) = Prec;
    prev(next(Prec)) = P;
    next(Prec) = P;
}
void insertLast_103032300040(list &L, address P){
    if(first(L) != NULL && last(L) != NULL){
       prev(P) = last(L);
       next(last(L)) = P;
       last(L) = P;
    }else{
      first(L) = P;
      last(L) = P;
    }
}
void deleteFirst_103032300040(list &L, address P){
    P = first(L);
    first(L) = next(P);
    next(P) = NULL;
    prev(first(L)) = NULL;
}
void deleteAfter_103032300040(list &L, address Prec, address P){
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = Prec;
    prev(P) = NULL;
    next(P) = NULL;
}
void deleteLast_103032300040(list &L, address P){
    P = last(L);
    last(L) =prev(last(L));
    next(last(L)) = NULL;
}
void concat_103032300040(list L1, list L2, list &L3){
    address P;
    createList_103032300040(L3);

    P = first(L1);
    while(P!=NULL){
        address newElmt = createNewElmt_103032300040(info(P));
        insertLast_103032300040(L3, newElmt);
        P = next(P);
    }
    P = first(L2);
    while(P!=NULL){
        address newElmt = createNewElmt_103032300040(info(P));
        insertLast_103032300040(L3, newElmt);
        P = next(P);
    }
}
address findSong_103032300040(string Judul, list L){
    address P = first(L);
    while (P!= NULL){
        if (info(P).Judul == Judul){
            return P;
        }
        P = next(P);
    }
    return NULL;
}
void removeSong_103032300040(string Judul, list &L){
    address P = findSong_103032300040(Judul, L);
    if(P == NULL){
        cout << "lagu tdk ditemukan"<<endl;
    }
    if(P == first(L)){
        deleteFirst_103032300040(L, P);
    }else if(P == last(L)){
        deleteLast_103032300040(L, P);
    }else{
        address Prec = prev(P);
        deleteAfter_103032300040(L, Prec, P);
    }
    cout << "lagu sudah dihapus" << endl;
}

void songPlayList_103032300040(list L) {
    address P = first(L);
    if (isEmpty_103032300040(L)) {
        cout << "List is empty." << endl;
        return;
    }
    while (P != NULL) {
        cout << "Title: " << info(P).Judul << ", Band: " << info(P).Band << endl;
        P = next(P);
    }
}
