#include <stdio.h>
int main() {
    float a,b,c,ab,ca,bc,xx,x,y,z,kuadrat,kuadratx, k=0.001;
    char ch='y';
    while (ch=='y'){
        printf("Masukkan nilai :\n");
        printf("a = ");scanf("%f",&a);
        printf("b = ");scanf("%f",&b);
        printf("c = ");scanf("%f",&c);
        printf("Segitiga yang dapat dibangun ADALAH\n >> ");
    /*cek ketelitian*/
        ab = a-b;
        bc = b-c;
        ca = c-a;
        if (ab<0){
            ab=ab*-1;
        }if (bc<0){
            bc=bc*-1;
        }if (ca<0){
            ca=ca*-1;
        }
   // printf("\n\n\n\n\nselisih nya \n\n\n\n\n a dan b = %f \n\n\n\n\n b dan c = %f\n\n\n\n\n c dan a = %f\n", ab,bc,ca);
        if (ab<k) {
            a=b;
            if (ca<(2*k)){
                c=a;
            }
        }else if (bc<k){
            b=c;
            if (ca<(2*k)){
                a=b;}
        }else if (ca<k){
            c=a;
            if (bc<(2*k)){
                b=c;
        }
    }
    /*variabel baru sesuai urutan*/{
        if ((a>=b) && (a>=c)){
            if (b>=c){
                x=a;y=b;z=c;}
            if(c>=b){
                x=a;y=c;z=b;}
        }if ((b>=a) && (b>=c)){
            if (a>=c){
                x=b;y=a;z=c;}
            if(c>=a){
                x=b;y=c;z=a;}
        }if ((c>=b) && (c>=a)){
            if (b>=a){
                x=c;y=b;z=a;}
            if(a>=b){
                x=c;y=a;z=b;}
        }else{ printf("");}
        }

   /*dilakukan penjumlahan kedua sisi*/{
   //    printf("\n\n\n\n\nurutanya adalah %f %f %f\n",x,y,z);
        xx = y+z;
        kuadrat = y*y + z*z;
        kuadratx = x*x;
   }
   /*pembangun segitiga*/{
        if ((a<=0) || (b<=0) || (c<=0) || (x>xx)){
            printf("tidak ada");
        }else if ((x==y) && (y==z) && (z==x)){
            printf("segitiga sama sisi");
        }else if (((x==y)) || ((y==z)) || ((z==x))){
            printf("segitiga sama kaki");
        }else if (kuadrat==kuadratx){
            printf("segitiga Siku");
        }else{
            printf("segitiga bebas");
        }
    printf(" <<");
    }

    printf("\n\nlagi ? (y/N) : ");scanf("%s",&ch);
    printf("==========================\n");
    }
     printf("\n\nSelesai\n");
    getchar();
    return 0;
    }
