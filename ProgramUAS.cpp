#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;
char nama[25],alamat[40],iden[20], no[15],jk;
int menu;

void judul();
void registrasi();
void tujuan();
void jenis();
void keberangkatan();
void tampilan();
void harga();
void akhir();

main(){
    int tj,jns,jam;
    int harga;
    char ulang;
    string kode;
    int bt;
    int admin,total;
    string jurusan;
    string jns_bus;

//getchar();
int i;
char ch;
cout << "============================\n";
cout << "Selamat Datang di Form Login \n";
cout << "============================\n";
    for (i=1; i<=3; i++) {
       string user = "";
       string pass = "";
       cout << "Username : "; cin >> user;
       cout << "Password : ";
            ch = _getch();
            while(ch != 13){
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
            }

       if (user == "admin" && pass == "123")
    {
    system("cls");
    judul();
    tampilan();
    tujuan();

    pilihan:
    cout<<"\n\t\tMasukkan Pilihan : ";cin>>tj;
    if (tj==1)
    {
        jurusan="Sukabumi-Bandung";
    }
    else if(tj==2)
    {
        jurusan="Jogja-Bandung";
    }
    else if(tj==3)
    {
        jurusan="Jogja-Sukabumi";
    }
    else if(tj==4)
    {
        jurusan="Jogja-Surabaya";
    }
    else if(tj==5)
    {
        jurusan="Bekasi-Cirebon";
    }
    else
    {
        cout<<"\n\t\t Masukkan Salah, ingin ulangi (Y/N) : "; cin>>ulang;
        if(ulang=='Y' || ulang=='y')
        {
            goto pilihan;
        }
        else
            return 0;
    }

    jns:
    system("cls");
    jenis();
    cout<<"\n\t\tMasukkan Pilihan : ";cin>>jns;
        if(jns==1)
        {
            cout<<"\n\t\tBatas Maksimum Kursi adalah 60\n";
            jns_bus="Ekonomi";
        }
        else if(jns==2)
        {
            cout<<"\n\t\tBatas Maksimum Kursi adalah 48\n";
            jns_bus="Patas";
        }
        else if(jns==3)
        {
            cout<<"\n\t\tBatas Maksimum Kursi adalah 32\n";
            jns_bus="Eksekutif";
        }
        else
        {
            cout<<"\n\t\tSalah memasukkan jenis bus";
            cout<<"\n\t\t Masukkan Salah, ingin ulangi (Y/N) : "; cin>>ulang;
                if(ulang=='Y' || ulang=='y')
                {
                    goto jns;
                }
            else
                return 0;
        }

    tiket:
    cout<<"\n\t\tJumlah tiket yang dibeli maksimum 5"<<endl;
    cout<<"\n\t\tJumlah tiket yang dibeli : "; cin>>bt;
            if(jns==1){
            if (bt>5){
                cout<<"Melebihi jumlah pembelian tiket";}}

            else if(jns==2){
                if (bt>5){
                cout<<"Melebihi jumlah pembelian tiket";}}

            else if(jns==3){
                if(bt>5){
                cout<<"Melebihi jumlah pembelian tiket";}}

            else{
                cout<<"\n\t\t Masukkan Salah, ingin ulangi (Y/N) : "; cin>>ulang;
                if(ulang=='Y' || ulang=='y')
                    goto tiket;
                else
                return 0;
            }

//perulangan dan array
    char nakur[bt][15];
    int nokur[bt];
        for(int i=1;i<=bt;i++){
            cout<<"\n\t\tNama di kursi \t\t: "; cin>>nakur[i];
            cekkursi:
            cout<<"\n\t\tNomor Kursi ke-"<<i<<" \t\t: "; cin>>nokur[i];
            for(int j=1;j<i;j++){
                if(nokur[i]==nokur[j]){
                    cout<<"\n\t\t Maaf kursi telah diisi,";
                    goto cekkursi;
                }
            }
            cout<<"\n\t\t----------------------------------------";}
    system("cls");


    keberangkatan();
    jam:
    cout<<"\n\t\tMasukkan Pilihan : ";cin>>jam;
    system("cls");

    if(jns==1){
    if(tj==1  && jam==1){
        harga=25000;
        kode="JM-eko1";}
        else if(tj==1  && jam==2){
            harga=30000;
            kode="JM-eko2";}
        else if(tj==2 && jam==1){
            harga=20000;
            kode="JS-eko1";}
        else if(tj==2 && jam==2){
            harga=15000;
            kode="JS-eko2";}
        else if(tj==3 &&jam==1){
            harga=50000;
            kode="JSe-eko1";}
        else if(tj==3 && jam==2){
            harga=40000;
            kode="JSe-eko2";}
        else if(tj==4 && jam==1){
            harga=80000;
            kode="JK-eko1";}
    }
    else if(jns==2){
        if(tj==1  && jam==1){
        harga=60000;
        kode="JM-pt1";}
        else if(tj==1  && jam==2){
            harga=50000;
            kode="JM-pt2";}
        else if(tj==2 && jam==1){
            harga=50000;
            kode="JS-pt1";}
        else if(tj==2 && jam==2){
            harga=45000;
            kode="JS-pt2";}
        else if(tj==3 &&jam==1){
            harga=80000;
            kode="JSe-pt1";}
        else if(tj==3 && jam==2){
            harga=70000;
            kode="JSe-pt2";}

    }
    else if(jns==3){
        if(tj==1  && jam==1){
        harga=90000;
        kode="JM-ex1";}
        else if(tj==1  && jam==2){
            harga=80000;
            kode="JM-ex2";}
        else if(tj==2 && jam==1){
            harga=80000;
            kode="JS-pt1";}
        else if(tj==2 && jam==2){
            harga=75000;
            kode="JS-ex2";}
        else if(tj==3 &&jam==1){
            harga=110000;
            kode="JSe-ex1";}
        else if(tj==3 && jam==2){
            harga=100000;
            kode="JSe-ex2";}
        else if(tj==4 && jam==1){
            harga=140000;
            kode="JK-ex1";}
        else if(tj==4 && jam==2){
            harga=130000;
            kode="JK-ex2";}
        else if(tj==5 && jam==1){
            harga=105000;
            kode="JP-ex1";}
        else if(tj==5 && jam==2){
            harga=95000;
            kode="JP-ex2";}
        }
    else
        {
            cout<<"\n\t\t Masukkan Salah, ingin ulangi (Y/N) : "; cin>>ulang;
            if(ulang=='Y' || ulang=='y')
            goto jam;
            else
            return 0;
        }


    admin=5000;
    total=bt*harga+admin;
    system("cls");

    judul();
    cout<<"\n\n\n\t\tTiket Informasi";
    cout<<"\n\t\t------------------------------------------------";
    cout<<"\n\t\t------------------------------------------------";

cout<<"\n\t\tNama Pemesan\t\t  : "<<nama;
cout<<"\n\t\tJenis Bus\t\t  : "<<jns_bus;
cout<<"\n\t\tKode Bus\t\t  : "<<kode;
cout<<"\n\t\tJurusan\t\t\t  : "<<jurusan;
for(int i=1;i<=bt;i++)
{
    cout<<"\n\t\tNo. Tempat Duduk ke-"<<i<<"  : "<<nokur[i];
    cout<<"\n\t\t Nama Tempat Duduk  : "<<nakur[i];
}
cout<<"\n\t\tHarga Tiket\t\t  : Rp "<<harga;
cout<<"\n\t\tJumlah Tiket\t\t  : "<<bt;
cout<<"\n\t\tBiaya Administrasi\t  : Rp "<<admin;
cout<<"\n\t\tTotal Bayar\t\t  : Rp "<<total;
cout<<"\n\t\t------------------------------------------------";


    return 0;
      } else {
         cout << "\n\nMaaf Username & Password anda masukan salah.\n\n";
      }
   }
   while (i <= 5);

   cout << "Anda telah 3x memasukan Username & Password yang salah.\n";
   cout << "Mohon maaf akun anda kami blokir untuk sementara. \n";
   cout << "Silahkan hubungi kami melalui e-mail support@email.com, Terima Kasih..";



}

void judul()
{
cout<<"\n\t            ======================================";
cout<<"\n\t          ==========================================";
cout<<"\n\t        ==============================================";
cout<<"\n\t      ==================================================";
cout<<"\n\t    ======================================================";
cout<<"\n\t\t\t AGEN TIKET BUS 'Terminal Sukabumi' ";
cout<<"\n\n\t\t       Jl. Lingkar No.114, telp. 0032468";
cout<<"\n\t\t    Bekasi, Bandung, Sukabumi, Bogor";
cout<<"\n\t\t =============================================";
cout<<"\n\t\t================================================";
}

void registrasi()
{
    //char nama[25],alamat[40],iden[20], no[15];
    string mail,nakur,nana;
    int nokur;
    cin.ignore();
cout<<"\n\n\n\n\t\tForm Registrasi calon penumpang";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\tNama Pemesan\t\t: "; gets(nama);
cout<<"\n\t\tAlamat\t\t\t: "; gets(alamat);
cout<<"\n\t\tIdentitas\t\t: "; gets(iden);
jenkel:
cout<<"\n\t\tJenis Kelamin(L/P)\t: "; cin>>jk;
if(jk == 76 or jk ==80 or jk == 108 or jk ==112)
goto lanjut;
else
goto jenkel;
lanjut:
cout<<"\n\t\tNo. HP\t\t\t: "; cin>>no;
cout<<"\n\t\tE-Mail\t\t\t: "; cin>>mail;
cout<<"\n\t\t------------------------------------------------";

system("cls");
}

void tujuan()
{
cout<<"\n\n\n\n\t\tSilahkan Pilih jurusan bus yang anda inginkan";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\t\tNo.|  jurusan    |";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\t\t1.|  Sukabumi-Bandung   |";
cout<<"\n\t\t\t2.|  jogja-bekasi       |";
cout<<"\n\t\t\t3.|  jogja-bogor  |";
cout<<"\n\t\t\t4.|  jogja-Bandung    |";
cout<<"\n\t\t\t5.|  jogja-Bogor  |";
cout<<"\n\t\t------------------------------------------------";
}

void jenis()
{
cout<<"\n\n\n\n\t\tSilahkan Pilih jenis bus yang anda inginkan";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\tNo.    |Kode Bus  |     Jenis Bus    |";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\t1.    |Eko.    |     Ekonomi     |";
cout<<"\n\t\t2.     |Pt.    |     Patas      |";
cout<<"\n\t\t3.    |Eks.    |     Eksekutif    |";
cout<<"\n\t\t------------------------------------------------";
}

void keberangkatan()
{
cout<<"\n\n\n\n\t\tSilahkan Pilih jenis bus yang anda inginkan";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\tNo    | Waktu Keberangkatan    | ";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\t1.    |     Pagi        | ";
cout<<"\n\t\t2.    |    Malam        |";
cout<<"\n\t\t------------------------------------------------";
}

void tampilan()
{

    cout<<"\n\n\t\t 1.Pemesanan Tiket Bus";
    cout<<"\n\t\t 2.Info Harga Tiket ";
    cout<<"\n\t\t 3.Keluar ";
    cout<<"\n\t\t Masukkan Pilihan : ";
    cin>>menu;
    if(menu==1)
    {
        system("cls");
        judul();
        registrasi();
    }
    else if(menu==2)
    {
        system("cls");
        judul();
        harga();
    }
    else if(menu==3)
    {
        system("cls");
        akhir();
    }
    else
    {
        cout<<"\n\t\tInputan Salah, silahkan kembali ke menu !";
        cin.ignore();
        system("cls");
        tampilan();
    }

}

void harga()
{
    char a;
    cout<<"\n\t 1.Ekonomi";
    cout<<"\n\t    - Siang Hari : ";
    cout<<"\n\t        - Jogja-Magelang  : Rp 30.000 ";
    cout<<"\n\t        - Jogja-Solo      : Rp 20.000 ";
    cout<<"\n\t        - Jogja-Bandung : Rp 50.000";
    cout<<"\n\t        - Jogja-Surabaya  : Rp 80.000";
    cout<<"\n\t        - Jogja-Cirebon   : Rp 45.000";
    cout<<"\n\t    - Malam Hari : ";
    cout<<"\n\t        - Jogja-Magelang  : Rp 20.000 ";
    cout<<"\n\t        - Jogja-Sukabumi     : Rp 100.000 ";
    cout<<"\n\t        - Jogja-Cilacap   : Rp 40.000";
    cout<<"\n\t        - Jogja-Surabaya  : Rp 70.000";
    cout<<"\n\t        - Jogja-Cirebon   : Rp 35.000";
    cout<<"\n\t 2.Eksekutif";
    cout<<"\n\t    - Siang Hari : ";
    cout<<"\n\t        - Jogja-Sukabumi  : Rp 90.000 ";
    cout<<"\n\t        - Jogja-Bandung      : Rp 80.000 ";
    cout<<"\n\t        - Jogja-Depok  : Rp 110.000";
    cout<<"\n\t        - Jogja-Bogor  : Rp 140.000";
    cout<<"\n\t        - Jogja-Cirebon   : Rp 105.000";
    cout<<"\n\t    - Malam Hari : ";
    cout<<"\n\t        - Jogja-Bandung  : Rp 80.000 ";
    cout<<"\n\t        - Jogja-Sukabumi      : Rp 75.000 ";
    cout<<"\n\t        - Jogja-Bogor   : Rp 100.000";
    cout<<"\n\t        - Jogja-Depok  : Rp 130.000";
    cout<<"\n\t        - Jogja-Cirebon   : Rp 95.000";
    cout<<"\n\t kembali ke menu (Y/N) : ";
    cin>>a;
    if(a=='y' || a=='Y')
    {
        system("cls");
        judul();
        tampilan();
    }
    else
    {
        system("cls");
        akhir();
    }

}

void akhir()
{
    system("pause");
}
