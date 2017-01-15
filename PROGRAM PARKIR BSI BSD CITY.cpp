#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <iomanip.h>
struct
    { char noken[10];
      int menitm,detikm,menitk,detikk;
    } satu[5];

    char piken,*naken,ulangi;
    int i,total;
    double laja,jam,jamk;
info()
    {
      cout<<"      Untuk satu jam pertama biaya parkir MOTOR Rp. 1500. Untuk kelipatan\n";
      cout<<"     satu jam berikutnya dikenakan biaya tambahan sebesar Rp. 1000 per jam\n";
    }
info1()
    {
      cout<<"      Untuk satu jam pertama biaya parkir MOBIL Rp. 2000. Untuk kelipatan\n";
      cout<<"     satu jam berikutnya dikenakan biaya tambahan sebesar Rp. 1000 per jam\n";
    }
garis()
    {
      cout<<"\t\t\t===================================\n";
      cout<<"\t\t\t       PROGRAM TAGIHAN PARKIR      \n";
      cout<<"\t\t\t           KENDARAAN MOTOR         \n";
      cout<<"\t\t\t===================================\n";
    }
garis1()
    {
      cout<<"\t\t\t===================================\n";
      cout<<"\t\t\t       PROGRAM TAGIHAN PARKIR      \n";
      cout<<"\t\t\t           KENDARAAN MOBIL         \n";
      cout<<"\t\t\t===================================\n";
    }
inputm()
    {
    cout<<"\t\t\t       WAKTU MASUK KENDARAAN       "<<endl;
    cout<<"\n\t\t\tJenis Kendaraan         : "<<naken<<endl;
    cout<<"\t\t\tMasukan No. Kendaraan   : ";gets(satu[i].noken);
    cout<<"\t\t\tMasukan Jam             : ";cin>>jam;
    cout<<"\t\t\tMasukan Menit           : ";cin>>satu[i].menitm;
    cout<<"\t\t\tMasukan Detik           : ";cin>>satu[i].detikm;
    }
inputk()
    {
    cout<<"\t\t\t       WAKTU KELUAR KENDARAAN      "<<endl;
    cout<<"\n\t\t\tJenis Kendaraan         : "<<naken<<endl;
    cout<<"\t\t\tNo. Kendaraan           : "<<satu[i].noken<<endl;
    cout<<"\t\t\tMasukan Jam             : ";cin>>jamk;
    cout<<"\t\t\tMasukan Menit           : ";cin>>satu[i].menitk;
    cout<<"\t\t\tMasukan Detik           : ";cin>>satu[i].detikk;
    }
rincian()
    {
    cout<<"\t===============================================================\n";
    cout<<"\t         RINCIAN TAGIHAN JASA PARKIR KENDARAAN BERMOTOR        \n";
    cout<<"\t                       BSI BSD CITY                       \n";
    cout<<"\t===============================================================\n";
    cout<<"\t No |   Jenis   |   Nomor   | Masuk | Keluar |  Lama  |  Total \n";
    cout<<"\t    | Kendaraan | Kendaraan |  Jam  |  Jam   | Parkir |  Bayar \n";
    cout<<"\t===============================================================\n";
    }
perulangan()
 {
   for(i=1;i<=1;i++)
   {
    cout<<setiosflags(ios::right)<<setw(10)<<i<<"      ";
    cout<<setiosflags(ios::left)<<setw(10)<<naken;
    cout<<setiosflags(ios::left)<<setw(14)<<satu[i].noken;
      cout<<setiosflags(ios::left)<<setw(8)<<jam;
      cout<<setiosflags(ios::left)<<setw(9)<<jamk;
      cout<<setiosflags(ios::left)<<setw(7)<<laja;
      cout<<setiosflags(ios::left)<<setw(0)<<"Rp."<<total<<endl;
    cout<<"\t===============================================================\n"<<endl;
   }
  }
main()
{
    lagi:
    clrscr();
    cout<<"\n\n\n\n\t\t\t SELAMAT DATANG DI JASA PARKIR \n";
    cout<<"\t\t              BSI BSD CITY         \n";
    cout<<"\t\t\t================================       \n";
    cout<<"\n\t\t\t         PILIHAN INPUT               \n";
    cout<<"\t\t\t--------------------------------       \n";
    cout<<"\n\t\t\t1. MOTOR                             \n";
    cout<<"\n\t\t\t2. MOBIL                             \n";
    cout<<"\n\t\t\t3. LOG OUT                           \n";
    cout<<"\n\t\t\t================================     \n";
    cout<<"\t\t\tMasukan Pilihan Anda [1/2/3] = ";cin>>piken;
    clrscr();
    if(piken=='1')
{ { naken="MOTOR";
    for(i=1;i<=1;i++)
    {
    cout<<"\n\n";
    info();
    cout<<"\n\n";
    garis();
    inputm();
    clrscr();
    cout<<"\n\n";
    info();
    cout<<"\n\n";
    garis();
    inputk();
    } }
   laja=jamk-jam;
   if(laja>1)
   {
     total=((laja-1)*1000)+1500;
   }
   else if(laja<1)
   {
     total=0;
   }
   else
   {
     total=1500;
   }
    clrscr();
    cout<<"\n\n";
    info();
    cout<<"\n\n";
    rincian();
   perulangan();
   cout<<"\t\t    Anda Ingin Input Lagi ? [Y/T] = ";
    ulangi = getche();
    if (ulangi =='Y' || ulangi =='y')
       goto lagi;
    else
    cout<<"\n\n\n\t\t\t\t  TERIMA KASIH";
    getch();
}   else if(piken=='2')
{ { naken="MOBIL";
    for(i=1;i<=1;i++)
    {
    cout<<"\n\n";
    info1();
    cout<<"\n\n";
    garis1();
    inputm();
    clrscr();
    cout<<"\n\n";
    info1();
    cout<<"\n\n";
    garis1();
    inputk();
    } }
   laja=jamk-jam;
   if(laja>1)
   {
     total=((laja-1)*1000)+2000;
   }
   else if(laja<1)
   {
     total=0;
   }
   else
   {
     total=2000;
   }
    clrscr();
    cout<<"\n\n";
    info1();
    cout<<"\n\n";
    rincian();
   perulangan();
   cout<<"\t\t    Anda Ingin Input Lagi ? [Y/T] = ";
    ulangi = getche();
    if (ulangi =='Y' || ulangi =='y')
       goto lagi;
    else
    cout<<"\n\n\n\t\t\t\t  TERIMA KASIH";
    getch();
}   else if(piken=='3')
getch();
}
