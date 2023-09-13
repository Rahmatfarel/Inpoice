#include <iostream>
#include <string>
using namespace std;

int main(){
	
	//deklarasi variabel
	
	int pilih[100],jumlah[100],sub_total[100],harga[100];
	string menu[100];
	int total_bayar;
	int i=0;
	bool selesai=false;

	
	cout<<"*********DAFTAR MENU MAKANAN & MINUMAN WARTEG SUKSES***********"<<endl;
    cout<<"1. Kopi Hitam 			Rp. 3000"<<endl;
    cout<<"2. Kopi Indocafe		Rp. 3000"<<endl;
    cout<<"3. Indomie Rebus/Goreng		Rp. 7000"<<endl;
    cout<<"4. Pake Telur			Rp. 3000"<<endl;
    cout<<"5. Esteh                        Rp. 5000"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    
	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
    
    while(selesai==false){
    	
    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];
    	
    	if (pilih[i]<=5){
    		
    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="Kopi Hitam        "; harga[i]=3000; break;
		    		case 2 : menu[i]="Kopi Indocafe     "; harga[i]=3000; break;
		    		case 3 : menu[i]="Indomie Rebus/Goreng  "; harga[i]=7000; break;
		    		case 4 : menu[i]="Pake telur         "; harga[i]=3000; break;
		    		case 5 : menu[i]="Esteh                 "; harga[i]=5000; break;
		    		default : menu[i]="";harga[i]=0;
				}
				
				cout<<"Jumlah Porsi "<<menu[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;
		    	
		    	sub_total[i]=jumlah[i]*harga[i];
		    	
		    	total_bayar+=sub_total[i];
	    		i++;
			}
		} else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}
    
	}
	
	cout<<endl;
	cout<<"                 INVOICE PEMBELIAN WARKOP SUKSES"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;
	
