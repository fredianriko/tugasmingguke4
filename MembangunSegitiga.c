#include <stdio.h>
int main() {
    float a,b,c,ab,ca,bc,xx,x,y,z,kuadrat,kuadratx, k=0.01;
    char ch; ch='y';
    while (ch=='y'){
        printf("Masukan nilai ke variabel\n");
        printf("a = ");scanf("%f",&a);
        printf("b = ");scanf("%f",&b);
        printf("c = ");scanf("%f",&c);
        printf("\nSegitiga yang dapat dibangun ADALAH \n ");
    /*cek ketelitian*/{
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
    printf("selisih nya \n a dan b = %f \n b dan c = %f\n c dan a = %f\n", ab,bc,ca);
        if (ab<k) {
            a=b;

        }if (bc<k){
            b=c;
        }if (ca<k){
            c=a;
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
        printf("\nurutanya adalah %0.2f %0.2f %0.2f\n",x,y,z);
        xx = y+z;
        kuadrat = y*y + z*z;
        kuadratx = x*x;
   }
   /*pembangun segitiga*/{
        if ((a<=0) || (b<=0) || (c<=0)){
            printf("\ntidak ada.");
        }else if ((x>xx)){
            printf("\ntidak ada .");
        }else if ((a==b) && (b==c) && (c==a)){
            printf("\nsegitiga sama sisi");
        }else if ((a==b) || (b==c) || (c==a)){
            printf("\nsegitiga sama kaki");
        }else if (kuadrat==kuadratx){
            printf("\nsegitiga Siku");
        }else{
            printf("\nsegitiga bebas");
        }
    }
    printf("\n\nSelesai\n");
    printf("lagi ? (y/N) \n");scanf("%s",&ch);
    }
    getchar();
    return 0;
}
