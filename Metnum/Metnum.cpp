#include <stdio.h>
#include <conio.h>
#include <windows.h>

main(){
   int X,Y,hasil = 0;
   int pilih;
   int i;
   home:
   system("cls");
   printf("    KALKULATOR\n");
   printf("    Aritmatika\n");
   printf("\n");
   printf("1. Menghitung X + Y :\n");
   printf("2. Menghitung X - Y :\n");
   printf("3. Menghitung X * Y :\n");
   printf("4. Menghitung X ^ Y :\n");
   printf("5. Menghitung F(x) = 3x^2+x-1 :\n");
   printf("6. keluar\n");
   printf("Pilih : ");scanf(" %d",&pilih);
   if(pilih==1){
      goto tambah;
   }
      else if(pilih==2){
       	goto kurang;
      }
         else if(pilih==3){
             goto kali;
         }
            else if(pilih==4){
               goto pangkat;
            }
               else if(pilih==5){
               	  goto fungsi;
               }
                  else if (pilih==6){
               	     goto exit;
                  }
               	      else{
            		printf("inputan salah !");
               	      }
   getch();
   tambah:
   printf("Masukan Nilai x : ");scanf("%d",&X);
   printf("Masukan Nilai y : ");scanf("%d",&Y);
   hasil = X + Y;
   printf("hasil : %d",hasil);
   getch();
   goto home;
   kurang:
   printf("Masukan Nilai x : ");scanf("%d",&X);
   printf("Masukan Nilai y : ");scanf("%d",&Y);
   hasil = X - Y;
   printf("hasil : %d",hasil);
   getch();
   goto home;
   kali:
   printf("Masukan Nilai x : ");scanf("%d",&X);
   printf("Masukan Nilai y : ");scanf("%d",&Y);
   hasil = Y * X;
   printf("hasil : %d",hasil);
   getch();
   goto home;
   pangkat:
   printf("Masukan Nilai x : ");scanf("%d",&X);
   printf("Masukan Nilai y : ");scanf("%d",&Y);
   hasil = X;
   for(i=1;i<Y;i++){
   hasil = hasil * X;
   }
   printf("hasil : %d",hasil);
   getch();
   goto home;
   fungsi:
   printf("Masukan Nilai x :");scanf("%d",&X);
   printf("Masukan Nilai y :");scanf("%d",&Y);
   for(i=X;i<=Y;i++){
      hasil = (2*(i*i))+((3*i)-1);
      printf("hasil : %d\n",hasil);
   }
   getch();
   goto home;
exit:
return 0;
}
