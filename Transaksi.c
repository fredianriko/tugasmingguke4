#include <stdio.h>


int main(){
    int pilih,telp;
    char *nama[255];
    char *email[255];
    char *alamat[255];

    printf("FORM PEMBAYARAN \n\n");
    printf("Nama          : ");
    scanf("%s",&nama);
    printf("\n\n");

    printf("Email         : ");
    scanf("%s",&email);
    printf("\n\n");

    printf("Alamat        : ");
    scanf("%s",&alamat);
    printf("\n\n");

    printf("Nomor Telepon : ");
    scanf("%i",&telp);
    printf("\n\n");


    printf("Pilih Metode Transaksi :\n\n");
    printf(" 1. Kredit  \n\n");
    printf(" 2. Tunai   \n\n");
    printf("Pilihan : ");
    scanf("%i",&pilih);
    switch(pilih);

    if(pilih == 1){
        printf(" 1. Cicilan 6x  \n\n");
        printf(" 2. Cicilan 9x  \n\n");
        printf(" 3. Cicilan 12x \n\n");
        printf("Pilihan : ");
        scanf("%i",&pilih);
        printf("Info pembayaran dikirim melalui email");

    }else if(pilih == 2){
        printf(" 1. Bank BNI     \n\n");
        printf(" 2. Bank BCA     \n\n");
        printf(" 3. Bank Mandiri \n\n");
        printf("Pilihan : ");
        scanf("%i",&pilih);
        printf("Info pembayaran dikirim melalui email");

    }

}

