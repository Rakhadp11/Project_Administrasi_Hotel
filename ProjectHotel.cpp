#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

string pemesan, no_identitas, hp, nama_jalan;
string kel, kec, kota, pilihan;
int  no_rumah, kamar, bed, no_kamar, checkin, checkout, lama, jp;
float harga_kamar, total, uang_muka, kurang, kembali;
char yn, kb;

void satu() {	
	cout<<"\n\t====================================================================";
	cout<<"\n\t                  SELAMAT DATANG DI HOTEL JAGAKARSA                    ";
	cout<<"\n\t      JL. Yang Lurus & Benar, Sukamulyo Rumpin, Bogor, jawa Barat      ";
	cout<<"\n\t         Telp. (021) 7992455 | Email : hotel.jagakrsa@gmail.com        ";
	cout<<"\n\t====================================================================";
	cout<<"\n\t====================================================================";

	cout<<"\n\n\n\n\t\tSilahkan Isi Form Berikut ini : ";
	cout<<"\n\t\t=============================";cout<<endl;
    cout<<"\t\tNama Pemesan          : "; cin>>pemesan;
    cout<<"\t\tNomor Identitas (KTP) : "; cin>>no_identitas;
    cout<<"\t\tNomor Telepon/HP      : "; cin>>hp;
    cout<<endl;
    cout<<"\t\tAlamat "<<endl;
    cout<<"\t\tNama Jalan            : "; cin>>nama_jalan;
    cout<<"\t\tNomor Rumah           : "; cin>>no_rumah;
    cout<<"\t\tKelurahan             : "; cin>>kel;
    cout<<"\t\tKecamatan             : "; cin>>kec;
    cout<<"\t\tKota                  : "; cin>>kota;
}
    
void dua () {
    system ("cls");
    			cout<<"\n\n\t\tSilahkan Pilih Tipe Kamar Yang Anda Inginkan";
                cout<<"\n\t\t============================";
                cout<<"\n\t\t1. Standart";
                cout<<"\n\t\t2. Premium";
                cout<<"\n\t\t3. Deluxe";
                cout<<"\n\t\t4. Suite";
                cout<<"\n\t\t5. Presidential";
                cout<<"\n\t\t============================";
                cout<<"\n\tMasukan pilihan Anda untuk melihat informasi fasilitas [1/2/3/4/5]= ";
				cin>>kamar;

	system ("cls");

 	switch (kamar)

 	{

  	case 1:

   	cout<<"-Standard Room-"<<endl <<endl;

	cout<<"Fasilitas Ruangan:" <<endl <<"-AC" <<endl <<"-Televisi" <<endl <<"-Kamar mandi" <<endl;

   	cout<<"-DVD player" <<endl <<"-Lemari es" <<endl <<"-Wifi" <<endl <<endl;

 	break;

  	case 2:

   	cout<<"-Premium Room-"<<endl <<endl;
   	
   	cout<<"Fasilitas Ruangan:" <<endl <<"-AC" <<endl <<"-Televisi" <<endl <<"-Bathub dan shower air panas" <<endl;

   	cout<<"-Minibar" <<endl <<"-Teras Pribadi" <<endl<<"-Wifi" <<endl <<"-DVD player" <<endl <<"-Kulkas" <<endl <<endl;

  	break;

  	case 3:

   	cout<<"-Deluxe Room-"<<endl <<endl;

   	cout<<"Fasilitas Ruangan:" <<endl <<"-AC" <<endl <<"-Televisi" <<endl <<"-Bathub dan shower air panas" <<endl;

   	cout<<"-Minibar" <<endl <<"-Teras Pribadi" <<endl <<"-Wifi " <<endl <<"-DVD player" <<endl <<"-Kulkas" <<endl <<"-Ruang santai" <<endl <<endl;

  	break;

  	case 4:

   	cout<<"-Suite Room-"<<endl <<endl;

  	cout<<"Fasilitas Ruangan:" <<endl <<"-AC" <<endl <<"- 2 buah Televisi" <<endl <<"-Bathub dan shower air panas pribadi terpisah" <<endl <<"-Teras Pribadi" <<endl;

   	cout<<"-Minibar" <<endl <<"-Wifi" <<endl <<"-Sambugan telpon IDD" <<endl <<"-DVD player" <<endl <<"-Kulkas" <<endl <<"-Ruang santai" <<endl <<endl;
	

 	break;
	
  	case 5:

   	cout<<"-Presidential Room-"<<endl <<endl;

   	cout<<"Fasilitas Ruangan:" <<endl <<"-AC" <<endl <<"- 2 buah Televisi" <<endl <<"-Bathub dan shower air panas pribadi terpisah" <<endl;

   	cout<<"-Minibar" <<endl <<"-Wifi" <<endl <<"-DVD player" <<endl <<"-Sambugan telpon IDD" <<endl <<"-Kulkas" <<endl <<"-Ruang santai" <<endl ;

   	cout<<"-Balkon pribadi" <<endl <<"-Pelayanan pribadi 24 Jam"<<endl <<"-Teras Pribadi"<<endl <<endl;

 	break;
 	
 	default : 
	cout << "\t\t*** Angka yang dimasukan salah, harus 1-5 ***"; 
	cout<<endl;
	cout << "\t\t   *** Silakan klik [k] untuk kembali ***  ";
	getch();
	dua();
	break;

 }

 cout<<"\nApakah ingin kembali atau memesan kamar?"<<endl;

 cout<<"[k] Kembali [b] Booking = "; cin>>kb;
 if (kb=='k')
 {
	dua();

 }
}

                
 void tiga (){  
 		system ("cls");           
        		cout<<"\n\n\t\tSilahkan Pilih Tipe Bed Yang Anda Inginkan";
                cout<<"\n\t\t============================";
                cout<<"\n\t\t1. Single";
                cout<<"\n\t\t2. Double";
                cout<<"\n\t\t============================";
                cout<<"\n\t\tMasukan Pilihan : ";cin>>bed;cout<<endl;
            
                cout<<"\n\n\t\tJumlah pesanan kamar = ";
				cin>>jp;
				for (int i=0; i<jp; i++){
				
				if(kamar==1 && bed==1)
                {
                	cout<<"\n\t\tAnda Memilih Kamar Tipe Standart Dengan Ranjang Single";
                	pilihan="Standart Dengan Single Bed";
                	harga_kamar=300000;
                    std::cout << std::fixed;
					std::cout << std::setprecision(2);
                }
                else if(kamar==1 && bed==2)
                {
                	cout<<"\n\t\tAnda Memilih Kamar Tipe Standart Dengan Ranjang Double";
                	pilihan="Standart Dengan Double Bed";
                	harga_kamar=400000;  
				    std::cout << std::fixed;
					std::cout << std::setprecision(2);                
                }
                else if(kamar==2 && bed==1)
                {
                	cout<<"\n\t\tAnda Memilih Kamar Tipe Premium Dengan Ranjang single";
            		pilihan="Premium Dengan Single Bed";
                    harga_kamar=600000;
					std::cout << std::fixed;
					std::cout << std::setprecision(2);                  
                }
                else if(kamar==2 && bed==2)
                {
                	cout<<"\n\t\tAnda Memilih Kamar Tipe Premium Dengan Ranjang Double";
                	pilihan="Premium Dengan Double Bed";
                    harga_kamar=700000;  
				    std::cout << std::fixed;
					std::cout << std::setprecision(2);                
                }
                else if(kamar==3 && bed==1)
                {
                	cout<<"\n\t\tAnda Memilih Kamar Tipe Deluxe Dengan Ranjang single";
                	pilihan="Deluxe Dengan Single Bed";
                    harga_kamar=900000;  
					std::cout << std::fixed;
					std::cout << std::setprecision(2);                
                }
                else if(kamar==3 && bed==2)
                {
                	cout<<"\n\t\tAnda Memilih Kamar Tipe Deluxe Dengan Ranjang Double";
                	pilihan="Deluxe Dengan Double Bed";
                    harga_kamar=1000000; 
					std::cout << std::fixed;
					std::cout << std::setprecision(2);                 
                }
                else if(kamar==4 && bed==1)
                {
            		cout<<"\n\t\tAnda Memilih Kamar Tipe Suite Dengan Ranjang single";
                	pilihan="Suite Dengan Single Bed";
                	harga_kamar=1200000;  
				    std::cout << std::fixed;
					std::cout << std::setprecision(2);              
                }
                else if(kamar==4 && bed==2)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe Suite Dengan Ranjang Double";
                    pilihan="Suite Dengan Double Bed";
                    harga_kamar=1300000;   
				    std::cout << std::fixed;
					std::cout << std::setprecision(2);             
                }
                else if(kamar==5 && bed==1)
                { 
                    cout<<"\n\t\tAnda Memilih Kamar Tipe Presidential Dengan Ranjang single";
                    pilihan="Presidential Dengan Single Bed";
                    harga_kamar=1500000; 
				    std::cout << std::fixed;
					std::cout << std::setprecision(2);               
                }
                else if(kamar==5 && bed==2)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe Presidential Dengan Ranjang Double";
                    pilihan="Presidential Dengan Double Bed";
                    harga_kamar=1600000;      
				    std::cout << std::fixed;
					std::cout << std::setprecision(2);          
                }
                else
                {
                    cout<<"\n\t\t\t    Maaf Pilihan Anda Tidak Tersedia ";
                    cout<<"\n\t\t\t       Silakan Isi Data Dari Awal ";
                    cout<<endl;
                    getch();
            		satu();
            		dua();	
            		tiga();
            	}
			}
			getch();
		}
			   				
void empat () {
    system("cls");
	cout<<"\n\n\n\t\tSilahkan Mengisi Form Berikut";
    cout<<"\n\t\t=============================";
    cout<<"\n\t\tPilih Nomor Kamar [1-50] : "; cin>>no_kamar;
    if (no_kamar <=50){
    	cout<<"\t\t--- Kamar tersedia ---";
	}
	else
	{
		cout<<"\n\t\t** Maaf Kamar Tidak Tersedia **";
		cout<<"\n\t\t** Silakan Ganti Nomor Kamar **";
		getch();
		tiga();
	}
	getch();
    	cout<<endl;
    	cout<<endl;
		cout<<"\t\tTanggal Checkin [DDMMYY]  : ";
		cin>>checkin;
		cout<<"\t\tTanggal Checkout [DDMMYY] : ";
		cin>>checkout;
    	cout<<"\t\tLama menginap : "; cin>>lama;
	
	system ("cls");
    cout<<"\n\n\n\n\t\tRincian Data & Pesanan";
    cout<<"\n\t\t==============================="<<endl;
    cout<<"\n\t\tNama Pemesan	       : "<<pemesan;
    cout<<"\n\t\tNomor Identitas (KTP)  : "<<no_identitas;
    cout<<"\n\t\tNomor Telepon/HP       : "<<hp;
    cout<<"\n\t\tAlamat";
    cout<<"\n\t\tNama Jalan             : "<<nama_jalan;
    cout<<"\n\t\tNomor Rumah            : "<<no_rumah;
    cout<<"\n\t\tKelurahan              : "<<kel;
    cout<<"\n\t\tKecamatan              : "<<kec;
    cout<<"\n\t\tKota                   : "<<kota;
    cout<<"\n\t\tTipe kamar & bed       : "<<pilihan;
    cout<<"\n\t\tJumlah Pesanan Kamar   : "<<jp<<" Kamar";
    cout<<"\n\t\tNomor Kamar            : "<<no_kamar;
    cout<<"\n\t\tTanggal Checkin        : "<<checkin;
    cout<<"\n\t\tTanggal Checkout       : "<<checkout;
    cout<<"\n\t\tLama Sewa Menginap     : "<<lama<<" Hari";
    cout<<"\n\t\tHarga Sewa Perhari     : Rp. "<<harga_kamar;
    cout<<"\n\t\t=============================";
    	total=harga_kamar*lama*jp;
    cout<<"\n\t\tBiaya Total	   : Rp. "<<total;
    cout<<"\n\t\tUang Muka          : Rp. ";cin>>uang_muka;
                kurang=total-uang_muka;
                kembali=kurang*(-1);
                if(total>=uang_muka)
                {
                                cout<<"\n\t\tKekurangan         : Rp. "<<kurang;
                }
                else
                {
                                cout<<"\n\t\tKembali            : Rp. "<<kembali;
                }
    cout<<"\n\t\t=============================";
    cout<<"\n\n\t\tTerima Kasih Telah Mengunjungi Hotel Jagakarsa";
    cout<<"\n\t\t    Sebagai Tempat Peristirahatan Nyaman Anda"   ;
                cout<<endl;
                cout<<"\n\n\t\tApakah Anda Ingin Memesan Sebuah Kamar Lagi ? [Y/N]";cin>>yn;
                if(yn== 'Y' )
                {
            	satu();
            	dua();
            	tiga();
            	empat();
               	 
                }
                else
                {
                                cout<<"\n\n\t\tTerima Kasih Atas Kunjungannya";
                }
            }
        
            int main(){
            	satu();
            	dua();
            	tiga();
            	empat();
            }
