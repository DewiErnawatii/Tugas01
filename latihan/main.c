#include <stdio.h>
#include <stdlib.h>
#include"header.h""
int main()
{

    Tree T;
   infotype data, data1=1 , data2=1 ,data3=1,data4=1,data5=1,data6=1,pilih=1;
   int i=0;
   int X;
   CreateTree(&T);
   int pilihan=0;
   while(pilihan!=8)
   {
       puts("1.Add Data ");
       puts("2.Print PreOrder Ganjil");
       puts("3.pOSToRDER punya anak di kanan");
       puts("4.cari tinggi sub kiri ");
       puts("5.tambah node terkiri");
       puts("6.hapus node terkanan");
       puts("7.jawab semua soal");
       puts("8.exit");

       if(pilih==0)
       {
           if(T==Nil)
           {


           pilih++;
           goto menu;

       }
       Soal_1(T);
       Soal_2(T);
       soal_3(T);
       printf("Soal 4 dan 5 perlu tindakan lakukan operasi\n");
       pilih++;
       }
   if (data1==0)
   {
       Show(T,X);
       printf("data yang dimasukan adalah %d",data);
       data1++;
   }
   if(data2==0)
   {
       printf("PreOrder Ganjil : ");
       Soal_1(T);
       Show(T,X);
       data2++;

   }
   if(data3==0)
   {
       Soal_2(T);
       Show(T,X);
       data3++;
   }
   if(data4==0)
   {
       soal_3(T);
       Show(T,X);
       data4++;
   }
   if(data5==0)
   {
       Show(T,X);
       printf("data yang dimasukan adalah %d",data);
       data5++;
   }
   if(data6==0)
   {
       if(Right(T)==Nil)

       {
           goto menu;
       }
       soal_5(&T);
       Show(T,X);
       data6++;

   }
   if(T==Nil && data6==0)
   {
       menu:
           printf("Data tidak ada");
           data6++;
   }
   if(T!=Nil)
   {
       printf("Kondisi Terisi");
   }
   else

   {
       printf("kondisi kosong");
   }
   printf("Masukan pilihan : ");
   scanf("%d",&pilihan);

   switch(pilihan)
   {
   case 1:
    data1*=0;
    printf("Masukan data : ");scanf("%d",&data);
    if(data3==0)
    {
        X=data;
        add_tree(&T,data,X);
        data3++;
        i++;

    }
    else
    {

        add_tree(&T,data,X);
    }
    break;
   case 2:
    data2*=0;
    system("cls");
    break;
   case 3:
     data3*=0;
    system("cls");
    break;
   case 4:
     data4*=0;
    system("cls");
    break;
   case 5:
    printf("Masukan Data");scanf("%d",&data);
    Soal_4(&T,data,X);
    i++;
    data5*=0;
    system("cls");
    break;
   case 6:
     data6*=0;
    system("cls");
    break;
   case 7:
    pilih*=0;
    system("cls");
    break;
   case 8:

    system("cls");
   exit(0);
   default:
    system("cls");
   }
   }
    return 0;
}
