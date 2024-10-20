#include <iostream>
#include "DLL.h"

using namespace std;

int main() {
    list L1, L2, L3;
    infotype song;
    int choice;

    createList_103032300040(L1);
    createList_103032300040(L2);
    createList_103032300040(L3);

    do {
        cout << "Menu: "<<endl;
        cout << "1. tambahkan lagu pada list 1"<<endl;
        cout << "2. tambahkan lagu pada list 2"<<endl;
        cout << "3. daftar playlist 1"<<endl;
        cout << "4. daftar playlist 2"<<endl;
        cout << "5. hapus lagu pada list 1"<<endl;
        cout << "6. hapus lagu pada list 2"<<endl;
        cout << "7. gabungkan lagu di list 1 dan 2"<<endl;
        cout << "8. daftar lagu gabungan list 1 dan 2"<<endl;
        cout << "9. keluar"<<endl;
        cout << "Choose an option: "<<endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "judul lagu: ";
                cin >> song.Judul;
                cout << "nama band: ";
                cin >> song.Band;
                insertLast_103032300040(L1, createNewElmt_103032300040(song));
                break;

            case 2:
                cout << "judul lagu: ";
                cin >> song.Judul;
                cout << "nama band: ";
                cin >> song.Band;
                insertLast_103032300040(L2, createNewElmt_103032300040(song));
                break;

            case 3:
                cout << "list 1:\n";
                songPlayList_103032300040(L1);
                break;

            case 4:
                cout << "list 2:\n";
                songPlayList_103032300040(L2);
                break;

            case 5:
                cout << "judul lagu yang ingin dihapus: ";
                cin >> song.Judul;
                removeSong_103032300040(song.Judul, L1);
                break;

            case 6:
                cout << "judul lagu yang ingin dihapus: ";
                cin >> song.Judul;
                removeSong_103032300040(song.Judul, L2);
                break;

            case 7:
                concat_103032300040(L1, L2, L3);
                cout << "list sudah digabung" << endl;
                break;

            case 8:
                cout << "list gabungan: ";
                songPlayList_103032300040(L3);
                break;

            case 9:
                cout << "anda telah keluar dari program" << endl;
                break;

            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}
