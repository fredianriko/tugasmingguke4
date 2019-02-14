#include<stdio.h>

int main(){
    int pilih;
    char choose, Y, y, N, n;
    printf("\n\n");
    printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t      Selamat  Datang  di\n");
    printf("\t\t\t     PT Otomotif Indonesia\n");
    printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n\n");

    printf("\t\t 1. Japstyle Imut\n\t\t Rp 30.000.000,- \n\t\t cocok untuk dibawa santai di dalam kota\n\n");
    printf("\t\t 2. Japstyle Menawan\n\t\t Rp 65.000.000,- \n\t\t cocok untuk kalian yang suka dengan motor modifikasi simple bermesin garang\n\n");
    printf("\t\t 3. Japstyle Garang\n\t\t Rp 120.000.000,- \n\t\t cocok untuk kalian yang suka penampilan garang dalam mengendarai motor\n\n");
    printf("\t\t\t Masukan Pilihan: ");
    scanf("%i",&pilih);

    if(pilih>3 || pilih<1){ {system("cls");}
        }else if(pilih == 1){ {system("cls");}
            printf("\n\n\t\t ---SPESIFIKASI JAPSTYLE IMUT--- \n\n");
            printf("\t\t Tipe Mesin : 4 Langkah, DOHC – 4 Katup\n\t\t Kapasitas Mesin:149.16 cc \n\t\t Sistem Pendingin Mesin:Liquid Cooled with Auto Fan \n\t\t Sistem Suplai Bahan Bakar:PGM-FI \n");
            printf("\t\t Diameter x Langkah:57.3 x 57.8 mm \n\t\t Perbandingan Kompresi:11.3:1 \n\t\t Daya Maksimum:12.4 kW (16.9 PS) / 9,000 rpm \n\t\t Torsi Maksimum:13.8 Nm (1.41 kgf.m) / 7,000 rpm \n");
            printf("\t\t Pola Perpindahan Gigi:1 – N – 2 – 3 – 4 – 5 – 6 (manual) \n\t\t Starting System:Pedal & Elektrik \n\t\t Tipe Kopling:Multiple Wet Clutch Coil Spring \n\t\t Sistem Pelumasan:Wet \n\n");
            printf("\t\t\t Ingin Membeli Produk Ini? [Y/N] : ");
            scanf("%i",&choose);
            }else if(pilih == 2){ {system("cls");}
                printf("\n\n\t\t ---SPESIFIKASI JAPSTYLE MENAWAN--- \n\n");
                printf("\t\t Tipe:DOHC, liquid-cooled, 4-stroke, single-cylinder \n\t\t Kapasitas:249 cc \n\t\t Diameter x Langkah:76mm x 55mm \n\t\t Rasio Kompresi:10.7:1 \n\t\t Tenaga Maksimal:18,2Kw /8.500 rpm\n");
                printf("\t\t Torsi Maksimal:22,6 Nm / 6750 rpm \n\t\t Transmisi:6 percepatan \n\t\t Suplai Bahan Bakar:PGM-FI \n\t\t Sistem Kopling:Multi-plate hydraulic \n\t\t Kapasitas Oli:1.8 Liter \n\t\t Starter:Electric \n\n ");
                printf("\t\t\t Ingin Membeli Produk Ini? [Y/N] : ");
                scanf("%i",&choose);
                    }else if(pilih == 3){ {system("cls");}
                        printf("\n\n\t\t ---SPESIFIKASI JAPSTYLE GARANG--- \n\n");
                        printf("\t\t Tipe:DOHC Parallel Twin Cylinders 4-stroke 8-valve \n\t\t Kapasitas:471,0 cc \n\t\t Karburasi:PGM-FI(Programmed Fuel Injection \n\t\t Bore x Stroke:67 mm x 66.8 mm \n\t\t Rasio Kompresi:10.7 : 1 \n");
                        printf("\t\t Tenaga Maksimum:35 kW/8,500 rpm \n\t\t Torsi Maksimum:43 Nm/7,000 rpm \n\t\t Tipe Starter:Electric Starter \n\t\t Sistem Pendingin:Liquid Cooled \n\t\t Kapasitas Oli:3,2L \n\n");
                        printf("\t\t\t Ingin Membeli Produk Ini? [Y/N] : ");
                        scanf("%i",&choose);
                    }
}


