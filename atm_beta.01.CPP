#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip.h>
#include <cstring.h>
#include <string.h>
#include <windows.h>


//---untuk menamipilkan warna. header windows.h
setcolor(unsigned short color)
{
HANDLE hCon =
GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(hCon,color);
}
//end koding warna

main()
{
   string nama1[15]={"ARIE","BUDI","CHEPY"};
   string bank1[15]={"BCA","MANDIRI"};
   string bank,bank2,nama,cetak_token;
   int saldo_111,saldo_222,saldo_333;
	int username[10]={111,222,333};
   int password[6]={111111,222222,333333};
   int no_token1[8]={11111111,11111112,11111113};
   char lagi;
   int i,pass,user,menu,saldo_akhir,saldo_awal,pindah,transfer_ke,jml_transfer,total,ppn;
   int jml_tarik,input_tarik,tarik;
   int jml_token,no_token;
// ppn1 = cas tarik tunai di ATM BSI,
// ppn2 = cas tranfer sesama bank,
// ppn3 = cas tranfer lain bank,
// ppn4 = cas pembayaran listrik,kuliah,dll
   int ppn1,ppn2,ppn3,ppn4;
   clrscr();
//------------------------------------------------------------------------------------------------------------------------- login:
   login:
   setcolor(2);
 	cout << "\t\t|-------------------------------------------------------\n";
 	cout << "\t\t|     SELAMAT DATANG DI ATM BINA SARANA INFORMATIKA   |\n";
   cout << "\t\t|               KAMI SIAP MELAYANI ANDA               |\n";
   cout << "\t\t|                     ATM BERSAMA                     |\n";
 	cout << "\t\t-------------------------------------------------------\n\n";
   cout << "\t\t             SILAKAN MASUKAN ID DAN PIN ANDA \n\n";
   cout << "\t\t               JAGA KERAHASIAAN PIN ANDA \n\n\n";



   i = 1;
    do {
    setcolor(2);
    cout << "\t\t\tNO REKENING : "; cin >> user;
    cout << "\n\\t\t\tPASSWORD    : "; cin >> pass;


    	if (user == username[0] && pass == password[0])
      {
         saldo_awal = 1000000;
         bank = bank1[0];
         clrscr();
         goto menu;
       } else if (user == username[1] && pass == password[1]) {
         saldo_awal = 2000000;
         bank = bank1[1];
         clrscr();
         goto menu;
       } else if (user == username[2] && pass == password[2]) {
         saldo_awal = 3000000;
         bank = bank1[0];
         clrscr();
         goto menu;
       } else {
         setcolor(4);
			cout << "\n\t\t\t\t\t---------------------------\n";
         cout << "\t\t\t\t\t Maaf ID & PASSWORD Salah!\n";
         cout << "\t\t\t\t\t---------------------------\n\n";
         i = i +1;
       }
    }
    while (i <= 3);
		cout << "\t\t\t\tAnda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";
    	cout << "\t\t\t\tMohon Maaf Akun Anda Kami Blockir, Terima Kasih..";
    getch();
    return 0;
//------------------------------------------------------------------------------------------------------------------------- menu:
menu:
//bank bca
if (bank == bank1[0]){
   	ppn1 = 2000;   	//tarik tunai
   	ppn2 = 1000;      //transfer sesama
      ppn3 = 5000;      //transfer ke bank lain
      ppn4 = 3000;      //listrik,pulsa,kuliah,dll
//bank mandiri
   }else if (bank == bank1[1]){
      ppn1 = 5000;      //tarik tunai
   	ppn2 = 2000;      //transfer sesama
      ppn3 = 7000;      //transfer ke bank lain
      ppn4 = 3500;      //listrik,pulsa,kuliah,dll
   }else {
   cout<< "BANK ANDA TIDAK TERDAFTAR";
   }

	setcolor(6);
   cout << "\n\n";
	cout << "\t\t\t\t------------------------------------------\n";
 	cout << "\t\t\t\t              MENU UTAMA \n";
   cout << "\t\t\t\t       SILAKAN PILIH TRANSAKSI \n";
 	cout << "\t\t\t\t------------------------------------------\n";
   cout << "\t\t\t\t                         REKENING : "<<bank;

   cout << "\n\n\n";
   cout << "\t\t\t 1> INFORMASI SALDO              4> PEMBELIAN TOKEN\n\n\n";
   cout << "\t\t\t 2> TRANSFER                     \n\n\n";
   cout << "\t\t\t 3> TARIK TUNAI                  \n\n\n";
   cout << "\t\t\t\t\t   PRESS C TO CENCLE\n\n\n";

   cout << "\t\tPILIH MENU 1.2.3.4.5 > " ;
   menu = getche();

switch (menu)
	{
   case '1':
   goto cetaksaldo;
	break;

	case '2':
	goto transfer;
	break;

   case '3':
	goto tarik_tunai;
   break;

   case '4':
	goto token;
   break;

   default:
   clrscr();
	goto login ;
	}


//-------------------------------------------------------------------------------------------------------------------------- quest:
quest:
cout << "\n\n\n\n\n\t\t\t        APAKAH ANDA INGIN MELAKUKAN TRANSAKSI LAINNYA? ";
cout << "\n\n\t\t\t\t Y> YA";
cout << "\n\n\t\t\t\t T> TIDAK\n";
cout << "\n\n\t\t\t\t C> CANCEL\n";
cout << "\n\n\t\t\t\t"; lagi=getche();
	if(lagi=='Y'||lagi=='y'){
      clrscr();
		goto menu;
   }else
   clrscr();
   cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t     TERIMAKASI TELAH BERTRANSAKSI DI ATM BSI";
   cout << "\n\t\t\t\t         SENANG BERTRANSAKSI DEANGAN ANDA";
   cout << "\n\n\t\t\t\t  'CEK BARANG ANDA SEBELUM MENINGALKAN MESIN ATM'";

   getch();
   clrscr();
   goto login;




//--------------------------------------------------------------------------------------------------------------------------- tarik_tunai:
tarik_tunai:
clrscr();
//SALDO AWAL------------------------------------
   if (saldo_akhir==0){
   saldo_akhir = saldo_awal;
   }else{
   saldo_akhir = saldo_akhir;
   }

cout << "\n\n";
	cout << "\t\t\t\t------------------------------------------\n";
 	cout << "\t\t\t\t             TARIK TUNAI \n";
   cout << "\t\t\t\t        SILAKAN PILIH NOMINAL \n";
 	cout << "\t\t\t\t------------------------------------------\n";
   cout << "\t\t\t\t                         REKENING : "<<bank;

   cout << "\n\n\n";
   cout << "\t\t\t 1> 50.000              		4> 500.000\n\n\n";
   cout << "\t\t\t 2> 100.000             		5> 1000.000\n\n\n";
   cout << "\t\t\t 3> 250.000             		6> LAINNYA\n\n\n";
   cout << "\t\t\t\t\t   PRESS C TO CENCLE\n\n\n";

   cout << "\t\t\tPILIH MENU 1.2.3.4.5 > " ;
   menu = getche();

switch (menu)
	{
   case '1':
   jml_tarik = 50000;
	break;

	case '2':
	jml_tarik = 100000;
	break;

   case '3':
	jml_tarik = 250000;
   break;

   case '4':
	jml_tarik = 500000;
   break;

   case '5':
	jml_tarik = 1000000;
   break;

   case '6':
	goto input_jml_tarik;
   break;

   default:
   clrscr();
	goto menu;
	}
   clrscr();
   cout << "\n\n\t\t\t\t ANDA AKAN MELAKUKAN PENARIKAN TUNAI\n\n";
   cout << "\n\n\t\t\t\t JUMLAH    : "<<jml_tarik;
   cout << "\n\n\t\t\t\t CAS       : "<<ppn1;

//------------------------------------------------------------------------------------------------------------------------ quest_tarik_tunai:
quest_tarik_tunai:
   cout << "\n\n\t\t\t\t Y> BENAR";
	cout << "\n\n\t\t\t\t T> SALAH";
	cout << "\n\n\t\t\t\t C> CANCEL\n";
	cout <<"\t\t\t\t";   lagi=getche();

   if(lagi=='y'||lagi=='Y'){
   	if ((jml_tarik%50000==0)&&(saldo_akhir-jml_tarik>50000))
      {
		clrscr();
   	saldo_akhir = saldo_akhir - ppn1 - jml_tarik;
   	goto sisa;
		}else if((jml_tarik%50000==0)&&(saldo_akhir-jml_tarik<50000)){
   	clrscr();
		cout << "\n\n\n\n\t\t\t\t        MAAF SALDO ANDA TIDAK CUKUP     \n";
   	goto menu;
      }else if(jml_tarik%50000!=0){
      clrscr();
   	cout << "\n\n\n\n\t\t\t\t MAAF JUMLAH TARIK HARUS KELIPATAN 50.000     \n";
   	getch();
   	goto input_jml_tarik;
      }
   }else if (lagi=='t'||lagi=='T'){
   clrscr();
   goto tarik_tunai;
   }else if (lagi=='c'||lagi=='C'){
   clrscr();
   goto menu;
   }else {
   clrscr();
   cout << "\n\n\n\n\t\t\t\t WRONG KEY BUNG     \n";
   getch();
   goto tarik_tunai;
   }
//------------------------------------------------------------------------------------------------------------------------ input_jml_tarik:
input_jml_tarik:
clrscr();
cout << "\n\n";
	cout << "\t\t\t\t------------------------------------------\n";
 	cout << "\t\t\t\t             TARIK TUNAI \n";
   cout << "\t\t\t\t        SILAKAN PILIH NOMINAL \n";
 	cout << "\t\t\t\t------------------------------------------\n";
   cout << "\t\t\t\t                         REKENING : "<<bank;

   cout << "\n\n\n\t\t\t\t MASUKAN JUMLAH : ";cin>>jml_tarik;
   cout << "\n\n\t\t\t\t CAS            : "<<ppn1;
	goto quest_tarik_tunai;


//--------------------------------------------------------------------------------------------------------------------------- transfer:
transfer:
clrscr();
cout << "\n\n\n\t\t\t\t-----------------------------------------------\n";
cout << "\t\t\t\t                ATM BERSAMA BSI \n\n";
cout << "\t\t\t\t              TRANSFER KE REK BSI     \n";
cout << "\t\t\t\t-----------------------------------------------\n\n\n";
cout << "\t\t\t\t\t ID ATAU NO REK : "; cin >> transfer_ke;
cout << "\n\n\t\t\t\t\t JUMLAH         : "; cin >> jml_transfer;

//SALDO AWAL------------------------------------
   if (saldo_akhir==0){
   saldo_akhir = saldo_awal;
   }else{
   saldo_akhir = saldo_akhir;
   }


if ( transfer_ke == username[0]){
   bank2 = bank1[0];
	cout << "\n\n\t\t\t\t ANDA AKAN MENTRANFER KE REKENING ATAS NAMA\n\n";
   cout << "\t\t\t\t NAMA      : "<<nama1[0];
   cout << "\n\n\t\t\t\t JUMLAH    : "<<jml_transfer;
   cout << "\n\n\t\t\t\t BANK      : "<<bank2;
   	if (bank == bank2){
      cout << "\n\n\t\t\t\t CAS       : "<<ppn2;
      ppn=ppn2;
      }else{
      cout << "\n\n\t\t\t\t ANDA MELAKUKAN TRANSFER ANTAR BANK\n";
      cout << "\t\t\t\t AKAN DIKENAKAN CAS SESUAI BANK "<<bank1[1];
      cout << "\n\n\t\t\t\t CAS       : "<<ppn3;
      ppn=ppn3;
      }
   }else if ( transfer_ke == username[1]){
   bank2 = bank1[1];
	cout << "\n\n\t\t\t\t ANDA AKAN MENTRANFER KE REKENING ATAS NAMA\n\n";
   cout << "\t\t\t\t NAMA      : "<<nama1[1];
   cout << "\n\n\t\t\t\t JUMLAH    : "<<jml_transfer;
   cout << "\n\n\t\t\t\t BANK      : "<<bank2;
   	if (bank == bank2){
      cout << "\n\n\t\t\t\t CAS       : "<<ppn2;
      ppn=ppn2;
      }else{
      cout << "\n\n\t\t\t\t ANDA MELAKUKAN TRANSFER ANTAR BANK\n";
      cout << "\t\t\t\t AKAN DIKENAKAN CAS SESUAI BANK "<<bank;
      cout << "\n\n\t\t\t\t CAS       : "<<ppn3;
      ppn=ppn3;
      }
   }else if ( transfer_ke == username[2]){
   bank2 = bank1[0];
	cout << "\n\n\t\t\t\t ANDA AKAN MENTRANFER KE REKENING ATAS NAMA\n\n";
   cout << "\t\t\t\t NAMA      : "<<nama1[2];
   cout << "\n\n\t\t\t\t JUMLAH    : "<<jml_transfer;
   cout << "\n\n\t\t\t\t BANK      : "<<bank2;
   	if (bank == bank2){
      cout << "\n\n\t\t\t\t CAS       : "<<ppn2;
      ppn=ppn2;
      }else{
      cout << "\n\n\t\t\t\t ANDA MELAKUKAN TRANSFER ANTAR BANK\n";
      cout << "\t\t\t\t AKAN DIKENAKAN CAS SESUAI BANK "<<bank;
      cout << "\n\n\t\t\t\t CAS       : "<<ppn3;
      ppn=ppn3;
      }
   }else {
   cout << "\n\n\t\t\t\t ANDA AKAN MENTRANFER KE REKENING ATAS NAMA\n\n";
   cout << "\t\t\t\t NAMA      : noname\n\n";
   cout << "\n\n\t\t\t\t JUMLAH    : "<<jml_transfer;"\n\n";

   }

cout << "\n\n\t\t\t\t Y> BENAR";
cout << "\n\n\t\t\t\t T> SALAH";
cout << "\n\n\t\t\t\t C> CANCEL\n";
cout <<"\t\t\t\t";   lagi=getche();


    if(lagi=='y'||lagi=='Y'){
   	if ((jml_transfer%10000==0)&&(saldo_akhir-jml_transfer>50000))
      {
		clrscr();
   	saldo_akhir = saldo_akhir - ppn - jml_transfer;
   	goto sisa;
		}else if((jml_transfer%10000==0)&&(saldo_akhir-jml_transfer<50000)){
      saldo_akhir = saldo_akhir;
   	clrscr();
		cout << "\n\n\n\n\t\t\t\t        MAAF SALDO ANDA TIDAK CUKUP     \n";
   	goto menu;
      }else if(jml_transfer%10000!=0){
      saldo_akhir = saldo_akhir;
      clrscr();
   	cout << "\n\n\n\n\t\t\t\t MAAF JUMLAH TARIK HARUS KELIPATAN 10.000     \n";
   	getch();
   	goto transfer;
      }
   }else if (lagi=='t'||lagi=='T'){
   saldo_akhir = saldo_akhir;
   clrscr();
   goto transfer;
   }else if (lagi=='c'||lagi=='C'){
   saldo_akhir = saldo_akhir;
   clrscr();
   goto menu;
   }else {
   saldo_akhir = saldo_akhir;
   clrscr();
   cout << "\n\n\n\n\t\t\t\t WRONG KEY BUNG     \n";
   getch();
   goto transfer;
   }



//--------------------------------------------------------------------------------------------------------------------------- token:
token:
clrscr();

//SALDO AWAL------------------------------------
   if (saldo_akhir==0){
   saldo_akhir = saldo_awal;
   }else{
   saldo_akhir = saldo_akhir;
   }



cout << "\n\n\n\t\t\t\t-----------------------------------------------\n";
cout << "\t\t\t\t                  ATM BERSAMA  \n";
cout << "\n\t\t\t\t             PEMBELIAN TOKEN LISTRIK \n";
cout << "\t\t\t\t-----------------------------------------------\n\n\n";

	cout << "\t\t\t\t\tNO  TOKEN : "; cin >> no_token;
   cout << "\n\n\t\t\t\t\tJUMLAH      : "; cin >> jml_token;

   if (no_token == no_token1[0]){
   nama = "DONO";
   cetak_token="5098 1172 8902 5588";
   }else if (no_token == no_token1[1]){
   nama = "KASINO";
   cetak_token="1192 8302 3388 9087";
   }else if (no_token == no_token1[2]){
   nama = "INDRO";
   cetak_token="2202 3128 2211 7898";
   }else{
   nama = "BAMBANG";
   cetak_token= "2333 3451 5647 4432";
   }

   cout << "\n\n\t\t\t\t        ANDA AKAN MEMBELI TOKEN ATAS NAMA\n\n";
   cout << "\t\t\t\t NAMA      : "<<nama;
   cout << "\n\n\t\t\t\t JUMLAH    : "<<jml_token;
   cout << "\n\n\t\t\t\t CAS       : "<<ppn4;

cout << "\n\n\t\t\t\t Y> BENAR";
cout << "\n\n\t\t\t\t T> SALAH";
cout << "\n\n\t\t\t\t C> CANCEL\n";
cout <<"\t\t\t\t";   lagi=getche();

if ((lagi=='y'||lagi=='Y')&&(saldo_akhir-jml_token>50000)&&(jml_token%10000==0)){
	saldo_akhir = saldo_akhir - ppn4 - jml_token ;
   clrscr();
   cout << "\n\n\n\t\t\t\t-----------------------------------------------\n";
	cout << "\t\t\t\t                  ATM BERSAMA  \n";
	cout << "\n\t\t\t\t             PEMBELIAN TOKEN LISTRIK \n";
	cout << "\t\t\t\t-----------------------------------------------\n\n\n\n\n";

	cout << "\t\t\t\t NO TOKEN ANDA ";
   cout << "\n\n\t\t\t\t "<<cetak_token;
   getch();
   }else if((lagi=='y')&&(saldo_akhir-jml_token<50000)){
   saldo_akhir = saldo_akhir;
   clrscr();
	cout << "\n\n\n\n\t\t\t\t        MAAF SALDO ANDA TIDAK CUKUP     \n";
   getch();
   clrscr();
   goto menu;
   }else if(lagi=='t'){
   goto token;
   }else{
   clrscr();
	cout << "\n\n\n\n\t\t\t\t      MAAF JUMLAH HARUS KELIPATAN 10 RIBU     \n";
   getch();
   clrscr();
   goto token;
   }


//-------------------------------------------------------------------------------------------------------------------------- saldo_akhir/sisa:
sisa:
clrscr();
   	cout << "\n\n\n\t\t\t\t         SISA SALDO ANDA : "<<saldo_akhir;
   	goto quest;
//--------------------------------------------------------------------------------------------------------------------------- cek saldo:
cetaksaldo:
clrscr();
cout << "\n\n\n\t\t\t\t-----------------------------------------------\n";
cout << "\t\t\t\t                ATM BERSAMA BSI \n";
cout << "\n\t\t\t\t             INFORMASI SALDO ANDA \n";
cout << "\t\t\t\t-----------------------------------------------\n\n\n\n\n";


pindah = saldo_akhir;

if (user == username[0]){
   saldo_111=pindah;
	if (saldo_111!=0){
   cout << "\t\t\t\t\t       TOTAL SALDO : RP "<<saldo_111;
	goto quest;
	}else
	cout << "\t\t\t\t\t       TOTAL SALDO : RP "<<saldo_awal;
   goto quest;
}else if(user == username[1]){
   saldo_222=pindah;
	if (saldo_222!=0){
   cout << "\t\t\t\t\t       TOTAL SALDO : RP "<<saldo_222;
   goto quest;
	}else
   cout << "\t\t\t\t\t       TOTAL SALDO : RP "<<saldo_awal;
   goto quest;
}else if(user == username[2]){
   saldo_333=pindah;
	if (saldo_333!=0){
   cout << "\t\t\t\t\t       TOTAL SALDO : RP  "<<saldo_333;
   goto quest;
	}else
   cout << "\t\t\t\t\t       TOTAL SALDO : RP "<<saldo_awal;
   goto quest;
}






getch();
}
