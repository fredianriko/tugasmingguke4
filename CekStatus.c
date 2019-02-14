#include <stdio.h>
#include <stdlib.h>
main(){
    int ketemu;
    long cariStatus;
    int i;
    char ch;
    ch='y';

//TIPE DATA BENTUKAN//
    typedef struct{
        int n_tran;
        char n_pel[10];
        char n_pro[10];
        int jml_pro;
        long t_pemb;
        char status[10];
    }trans;
    trans tran[4];
//printf("\ntes1\n");
    tran[1].n_tran =2019010101;
    strcpy(tran[1].n_pel,"dewi");
    strcpy(tran[1].n_pro,"imut");
    tran[1].jml_pro =2;
    tran[1].t_pemb =100000000;
    strcpy(tran[1].status,"proses");
//printf("\ntes2\n");
    tran[2].n_tran =2019010102;
    strcpy(tran[2].n_pel,"rani");
    strcpy(tran[2].n_pro,"garang");
    tran[2].jml_pro =3;
    tran[2].t_pemb =300000000;
    strcpy(tran[2].status,"proses");
//printf("\ntes3\n");
    tran[3].n_tran =2019010103;
    strcpy(tran[3].n_pel,"astri");
    strcpy(tran[3].n_pro,"top");
    tran[3].jml_pro =10;
    tran[3].t_pemb =500000000;
    strcpy(tran[3].status,"done");
//printf("\ntes4\n");

    while (ch=='y'){
//printf("\ntes5\n");
        printf("Masukkan no Transaksi yang dicari = ");
        scanf("%d",&cariStatus);
        i=0;
        ketemu=0;
//printf("=%ld=\n",cariStatus);
        while (i<5 && ketemu!=1){
//printf("=%ld=\n",cariStatus);
            if (tran[i].n_tran==cariStatus){
//printf("=%ld=\n",cariStatus);
                ketemu=1;
            }else{
//printf("==%ld==\n",cariStatus);
                i++;
            }
//printf("===%ld===\n",cariStatus);
        }
//printf("cek i = %i\n",i);
//printf("%s\n",tran[i].n_pel);
        if(ketemu==1){
            printf("\n\nNo Transaksi %d TERDAFTAR\n",cariStatus );
            printf("======STATUS PEMESANAN======\n");
            printf("========%d========\n",cariStatus);
            printf("Nama Pelanggan     : %s",tran[i].n_pel);
            printf("\nNama Produk      : %s",tran[i].n_pro );
            printf("\nJumlah Produk    : %d",tran[i].jml_pro );
            printf("\nTotal Pembayaran : %ld",tran[i].t_pemb);
            printf("\nStatus Produk    : %s", tran[i].status);
        }else{
            printf("No Transaksi = %d TIDAK TERDAFTAR\n",cariStatus );
        }
        printf("\n\nlakukan pengecekan status dengan no transaksi lainnya? (y/N) : ");scanf("%s",&ch);
    }
    getchar();
    printf("\n\nTerima Kasih");
}
