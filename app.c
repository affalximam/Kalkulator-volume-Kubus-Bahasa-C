#include <stdio.h>
#include <stdlib.h>

void clear(){
    // linux
    // system("clear");
    
    // windows
    system("cls");
}

int main(){
    float sisi, hasil;
    char ulang;
    top:
    clear();
    printf("\n-----------------------------------\n");
    printf("Kalkulator menghitung Volume Kubus\n");
    printf("By : AFFALXIMAM\n");
    printf("-----------------------------------\n\n");

    printf("Masukan panjang sisi (cm) : ");
    scanf(" %f", &sisi);

    hasil = sisi * sisi * sisi;
    printf("Volume Kubus adalah (cm) : %.0f \n\n", hasil);

    cek:
    printf("Apakah ingin mengulang ? (y/t) : ");
    scanf(" %c", &ulang);
    if(ulang == 'y'){
        clear();
        goto top;
    }
    if(ulang == 't'){
        printf("\nProgram Selesai");
    }
    else{
        goto cek;
    }
    return 0;
}