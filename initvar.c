/* File : initvar.c */
/* Penulis : Fikri Abdi Putra, email: fikriabdiputra21@gmail.com */
/* Mengisi variabel i yang bertype in dengan nilai */
#include <stdio.h>

int main()
{ /* kamus */
  int bebek = 10; /* deklarasi dan inisialisasi nilai variabel bebek dengan nilai 10 */
  float luas = 2.5; /* nilai luas kebun sebesar 2.5 hektar*/
  float keliling = 2*3.14*5.5; /* nilai keliling lingkaran dengan jari-jari 5.5*/

/* Algoritma */
  printf("Ini jumlah bebekku : %d \n", bebek); /*untuk mengamati dampak inisialisasi*/
  printf("kebunku di desa seluas : %f \n", luas);
  printf("jumlah nilai keliling lingkaran sebesar: %f \n", keliling);
  return 0;
}


/* untuk eksekusi variabel int menggunakan %d, sedangkan untuk eksekusi variabel float menggunakan %f */
