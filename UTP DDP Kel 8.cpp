#include <iostream>
#include <cmath>
using namespace std;


void menu(){
	cout << "_____________________________________________"<<endl;cout<<endl;
	string menu[9]={"[1] Big Mc 1 ....................Rp 41000   |",
					"[2] Double Cheese Burger ........Rp 41000   |",
					"[3] Mc Double ...................Rp 36000   |",
					"[4] Mc Chicken ..................Rp 36000   |",
					"[5] Chicken Burger ..............Rp 33000   |",
					"[6] Mc Spicy ....................Rp 43000   |",
					"[7] Mc Nuggets ..................Rp 35000   |",
					"[8] Cheese Burger ...............Rp 33000   |"};
					
	cout << "List menu :                                 |" << endl;
	for(int i=0;i<8;i++){
		cout << menu[i] << endl;
	}
	cout << "_____________________________________________"<<endl;
}


int main(){
    string nama;
    int pesanan;
    float totalharga;
    float ongkir;
    int jarak;
    int bayar;
    int jawab;
    int a = 3000;
    int b = 10000;
    int c = 15000;
    int d;
	int harga [5]={43000, 41000, 36000, 35000, 33000};
					
    menu();
    cout<<endl;cout<<endl;
    cout<<"Masukan Nama Anda 	 	 	 	 : "; 
	cin>> nama;
    cout<<"Masukan Nomor Pesanan Anda 		 	 : "; 
	cin>> pesanan;
    cout<<"Masukan Jarak Rumah Anda Dari Outlet (km) 	 : "; 
	cin>> jarak;
	
	cout <<endl;cout<<endl;

    
   if(jarak<=10){ 
        if(pesanan==1){
            cout<<"Pesanan : Big Mc 1" << endl;
			cout<<"harga   : " << harga[1] << endl;
			bayar = harga[1];
			if(jarak<=2){
            cout<<"Ongkir  : " << a << endl;
            ongkir = a;
        }
        else if(jarak>2 && jarak<=5){
            cout<<"Ongkir  : " << b << endl;
            ongkir = b;
        }
        else if(jarak>5 && jarak<=10){
            cout<<"Ongkir  : " << c << endl;
            ongkir = c;
        }
        cout <<endl;
			cout << "Silahkan Cek Kembali Data Pesanan Anda" << endl;
	cout << "Ketik \"1\" Jika Sudah Benar Dan Ketik \"2\" Jika Ingin Mengisi Ulang" << endl;
    cin >> jawab;
    system("cls");
	   if(jawab == 1){
	   	totalharga = bayar + ongkir;
       cout << "Jadi Total Harga Yang Harus Anda Bayar Sejumlah Rp." <<  totalharga << endl;
       cout << "Driver Akan Mengantar Makanan Anda Segera" << endl;
       cout << "Terima Kasih Telah Berbelanja di McDonalds" << endl;
       cout << "SELAMAT MENIKMATI" << endl;
	   }
	   else if(jawab == 2){
	   	system("cls");
	   	main();
	   }
        }
        else if(pesanan==2){
            cout<<"Pesanan : Double Cheese Burger" << endl;
            cout<<"harga   : " << harga[1] << endl;
            bayar = harga[1];
            if(jarak<=2){
            cout<<"Ongkir  : " << a << endl;
            ongkir = a;
        }
        else if(jarak>2 && jarak<=5){
            cout<<"Ongkir  : " << b << endl;
            ongkir = b;
        }
        else if(jarak>5 && jarak<=10){
            cout<<"Ongkir  : " << c << endl;
            ongkir = c;
        }
        cout <<endl;
            cout << "Silahkan Cek Kembali Data Pesanan Anda" << endl;
	cout << "Ketik \"1\" Jika Sudah Benar Dan Ketik \"2\" Jika Ingin Mengisi Ulang" << endl;
    cin >> jawab;
    system("cls");
	   if(jawab == 1){
	   	totalharga = bayar + ongkir;
       cout << "Jadi Total Harga Yang Harus Anda Bayar Sejumlah Rp." <<  totalharga << endl;
       cout << "Driver Akan Mengantar Makanan Anda Segera" << endl;
       cout << "Terima Kasih Telah Berbelanja di McDonalds" << endl;
       cout << "SELAMAT MENIKMATI" << endl;
	   }
	   else if(jawab == 2){
	   	system("cls");
	   	main();
	   }
        }
        else if(pesanan==3){
            cout<<"Pesanan : Mc Double" << endl;
            cout<<"harga   : " << harga[2] << endl;
            bayar = harga[2];
            if(jarak<=2){
            cout<<"Ongkir  : " << a << endl;
            ongkir = a;
        }
        else if(jarak>2 && jarak<=5){
            cout<<"Ongkir  : " << b << endl;
            ongkir = b;
        }
        else if(jarak>5 && jarak<=10){
            cout<<"Ongkir  : " << c << endl;
            ongkir = c;
        }
        cout <<endl;
            cout << "Silahkan Cek Kembali Data Pesanan Anda" << endl;
	cout << "Ketik \"1\" Jika Sudah Benar Dan Ketik \"2\" Jika Ingin Mengisi Ulang" << endl;
    cin >> jawab;
    system("cls");
	   if(jawab == 1){
	   	totalharga = bayar + ongkir;
       cout << "Jadi Total Harga Yang Harus Anda Bayar Sejumlah Rp." <<  totalharga << endl;
       cout << "Driver Akan Mengantar Makanan Anda Segera" << endl;
       cout << "Terima Kasih Telah Berbelanja di McDonalds" << endl;
       cout << "SELAMAT MENIKMATI" << endl;
	   }
	   else if(jawab == 2){
	   	system("cls");
	   	main();
	   }
        }
        else if(pesanan==4){
             cout<<"Pesanan : Mc Chicken" << endl;
             cout<<"harga   : " << harga[2] << endl;
             bayar = harga[2];
             if(jarak<=2){
            cout<<"Ongkir   : " << a << endl;
            ongkir = a;
        }
        else if(jarak>2 && jarak<=5){
            cout<<"Ongkir   : " << b << endl;
            ongkir = b;
        }
        else if(jarak>5 && jarak<=10){
            cout<<"Ongkir   : " << c << endl;
            ongkir = c;
        }
        cout <<endl;
             cout << "Silahkan Cek Kembali Data Pesanan Anda" << endl;
	cout << "Ketik \"1\" Jika Sudah Benar Dan Ketik \"2\" Jika Ingin Mengisi Ulang" << endl;
    cin >> jawab;
    system("cls");
	   if(jawab == 1){
	   	totalharga = bayar + ongkir;
       cout << "Jadi Total Harga Yang Harus Anda Bayar Sejumlah Rp." <<  totalharga << endl;
       cout << "Driver Akan Mengantar Makanan Anda Segera" << endl;
       cout << "Terima Kasih Telah Berbelanja di McDonalds" << endl;
       cout << "SELAMAT MENIKMATI" << endl;
	   }
	   else if(jawab == 2){
	   	system("cls");
	   	main();
	   }
		}
        else if(pesanan==5){
            cout<<"Pesanan : Chicken Burger" << endl;
            cout<<"harga   : " << harga[4] << endl;
            bayar = harga[4];
            if(jarak<=2){
            cout<<"Ongkir  : " << a << endl;
            ongkir = a;
        }
        else if(jarak>2 && jarak<=5){
            cout<<"Ongkir  : " << b << endl;
            ongkir = b;
        }
        else if(jarak>5 && jarak<=10){
            cout<<"Ongkir  : " << c << endl;
            ongkir = c;
        }
        cout <<endl;
            cout << "Silahkan Cek Kembali Data Pesanan Anda" << endl;
	cout << "Ketik \"1\" Jika Sudah Benar Dan Ketik \"2\" Jika Ingin Mengisi Ulang" << endl;
    cin >> jawab;
    system("cls");
	   if(jawab == 1){
	   	totalharga = bayar + ongkir;
       cout << "Jadi Total Harga Yang Harus Anda Bayar Sejumlah Rp." <<  totalharga << endl;
       cout << "Driver Akan Mengantar Makanan Anda Segera" << endl;
       cout << "Terima Kasih Telah Berbelanja di McDonalds" << endl;
       cout << "SELAMAT MENIKMATI" << endl;
	   }
	   else if(jawab == 2){
	   	system("cls");
	   	main();
	   }
        }
        else if(pesanan==6){
            cout<<"Pesanan : Mc Spicy" << endl;
            cout<<"harga   : " << harga[0] << endl;
            bayar = harga[0];
            if(jarak<=2){
            cout<<"Ongkir  : " << a << endl;
            ongkir = a;
        }
        else if(jarak>2 && jarak<=5){
            cout<<"Ongkir  : " << b << endl;
            ongkir = b;
        }
        else if(jarak>5 && jarak<=10){
            cout<<"Ongkir  : " << c << endl;
            ongkir = c;
        }
        cout <<endl;
            cout << "Silahkan Cek Kembali Data Pesanan Anda" << endl;
	cout << "Ketik \"1\" Jika Sudah Benar Dan Ketik \"2\" Jika Ingin Mengisi Ulang" << endl;
    cin >> jawab;
    system("cls");
	   if(jawab == 1){
	   	totalharga = bayar + ongkir;
       cout << "Jadi Total Harga Yang Harus Anda Bayar Sejumlah Rp." <<  totalharga << endl;
       cout << "Driver Akan Mengantar Makanan Anda Segera" << endl;
       cout << "Terima Kasih Telah Berbelanja di McDonalds" << endl;
       cout << "SELAMAT MENIKMATI" << endl;
	   }
	   else if(jawab == 2){
	   	system("cls");
	   	main();
	   }
        }
        else if(pesanan==7){
            cout<<"Pesanan : Mc Nuggets" << endl;
            cout<<"harga   : " << harga[1] << endl;
            bayar = harga[1];
            if(jarak<=2){
            cout<<"Ongkir  : " << a << endl;
            ongkir = a;
        }
        else if(jarak>2 && jarak<=5){
            cout<<"Ongkir  : " << b << endl;
            ongkir = b;
        }
        else if(jarak>5 && jarak<=10){
            cout<<"Ongkir  : " << c << endl;
            ongkir = c;
        }
        cout <<endl;
            cout << "Silahkan Cek Kembali Data Pesanan Anda" << endl;
	cout << "Ketik \"1\" Jika Sudah Benar Dan Ketik \"2\" Jika Ingin Mengisi Ulang" << endl;
    cin >> jawab;
    system("cls");
	   if(jawab == 1){
	   	totalharga = bayar + ongkir;
       cout << "Jadi Total Harga Yang Harus Anda Bayar Sejumlah Rp." <<  totalharga << endl;
       cout << "Driver Akan Mengantar Makanan Anda Segera" << endl;
       cout << "Terima Kasih Telah Berbelanja di McDonalds" << endl;
       cout << "SELAMAT MENIKMATI" << endl;
	   }
	  else if(jawab == 2){
	   	system("cls");
	   	main();
	   }
        }
        else if(pesanan==8){
            cout<<"Pesanan : Cheese Burger" << endl;
            cout<<"harga   : " << harga[4] << endl;
            bayar = harga[4];
            if(jarak<=2){
            cout<<"Ongkir  : " << a << endl;
            ongkir = a;
        }
        else if(jarak>2 && jarak<=5){
            cout<<"Ongkir  : " << b << endl;
            ongkir = b;
        }
        else if(jarak>5 && jarak<=10){
            cout<<"Ongkir  : " << c << endl;
            ongkir = c;
        }
        cout <<endl;
            cout << "Silahkan Cek Kembali Data Pesanan Anda" << endl;
	cout << "Ketik \"1\" Jika Sudah Benar Dan Ketik \"2\" Jika Ingin Mengisi Ulang" << endl;
    cin >> jawab;
    system("cls");
	   if(jawab == 1){
	   	totalharga = bayar + ongkir;
       cout << "Jadi Total Harga Yang Harus Anda Bayar Sejumlah Rp." <<  totalharga << endl;
       cout << "Driver Akan Mengantar Makanan Anda Segera" << endl;
       cout << "Terima Kasih Telah Berbelanja di McDonalds" << endl;
       cout << "SELAMAT MENIKMATI" << endl;
	   }
	  else if(jawab == 2){
	   	system("cls");
	   	main();
	   }
    }
       
        
	}else{
			cout<<"Mohon Maaf Kami Tidak Menerima Pesanan Lebih dari 10 km"<<endl;
			cout<<"Karena Tidak Ada Driver Yang Dapat Menjangkau Jarak Sejauh itu"<<endl;
			cout<<"Sekali Lagi Mohon Maaf Dan Terima Kasih"<<endl;
	}
}
