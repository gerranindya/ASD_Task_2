/**
    KELAS     : IF39-01
    KELOMPOK  : 12
    NAMA(NIM) : Rismada Gerra Nindya(1301154561), M. Rezky Alpin Gumay (1301154155),Baginda Praka G(1301154113)
**/


#ifndef ORANG_H_INCLUDED
#define ORANG_H_INCLUDED

#include "tanggal.h"

struct orang {
    //=================================================
    // YOUR CODE STARTS HERE
    string nama;
    tanggal tgl_lahir;

    // YOUR CODE ENDS HERE
    //=================================================
};

orang create_orang(string nama, int tgl,int bln,int thn);
int hitung_umur(orang org);
void show_orang(orang org);


#endif // ORANG_H_INCLUDED
