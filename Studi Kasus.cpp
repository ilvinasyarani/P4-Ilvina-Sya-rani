#include <iostream>
#include<iomanip>
using namespace std;
int data_praktikan(){
	cout<<"Ilvina Sya'rani\n";
	cout<<"F1B019069\n";
	cout<<"============================================\n";
	cout<<"Program Perhitungan Nilai Akhir 12 Mahasiswa\n";
	cout<<"============================================\n\n";	
}
int main(){
	data_praktikan(); 
	string NIM = "F1B019069", pw = "F1B019069",NIM_in, pw_in;
	const int sks = 23,kehadiran = 10, tugas = 15, kuis = 20, UTS = 25, UAS = 30, mhs = 12;
	const string matkul[2] = {"Kalkulus","Robotik"};
	
	struct dataM{
	string nama, nim;
	int jumkehadiran, jumsks, ntugas, nkuis, nuts, nuas, na, NA;
	}dm[500];

	int pilmatkul,konf1;
	float h, t, k, uts, uas, NA;
	int no, i;
	
	cobalagi:
	cout << "=====Login=====\n";
	cout << "Masukkan NIM anda         : "; cin >> NIM_in;
	cout << "\nMasukkan Password anda  : "; cin >> pw_in; 
    if (NIM_in == NIM && pw_in == pw) {
    	system("cls");
    	cout<<"         Ketentuan Penilaian Akhir\n";
    	cout<<"============================================\n";
    	cout<<"\n\nJumlah Mahasiswa : "<<mhs;
    	cout<<"\nJumlah Pertemuan   : "<<"20";
    	cout<<"\nJumlah SKS         : "<<sks;
    	cout<<"\n\nMata Kuliah      : "<<matkul[0]<<" & "<<matkul[1];
    	cout<<"\n\nBobot Penilaian Akhir \n";
    	cout<<"\nKehadiran   = "<<kehadiran<<" %";
    	cout<<"\nTUGAS       = "<<tugas<<" %";
    	cout<<"\nQuis        = "<<kuis<<" %";
    	cout<<"\nUTS         = "<<UTS<<" %";
    	cout<<"\nUAS         = "<<UAS<<" %\n";
    	cout<<"\n\n 1. Kalkulus";
    	cout<<"\n 2. Robotika";
    	cout<<"\nPilih Mata Kuliah : ";cin>>pilmatkul;
    	switch(pilmatkul){
    		case 1: 
    			system("cls");
    			input_datak:
    			for(no = 1; no <= mhs; no++){	
    			cout<<"           Penilaian Akhir Kalkulus\n";
    			cout<<"============================================\n";
    			cout<<"\n\nMahasiswa Ke-"<<no;
    			cout<<"\n\nNama             : ";cin>>(dm[no].nama);
    			cout<<"\nNIM                : ";cin>>dm[no].nim;
    			cout<<"\nJumlah Kehadiran   : ";cin>>dm[no].jumkehadiran;
					h = dm[no].jumkehadiran / 10 * 100;
				cout<<"\nNilai Tugas        : ";cin>>dm[no].ntugas;
					t = dm[no].ntugas / 20 * 100;
				cout<<"\nNilai Kuis         : ";cin>>dm[no].nkuis;
					k = dm[no].nkuis / 20 * 100;
				cout<<"\nNilai UTS          : ";cin>>dm[no].nuts;
					uts = dm[no].nuts / 25 * 100;
				cout<<"\nNilai UAS          : ";cin>>dm[no].nuas;
					uas = dm[no].nuas / 25 * 100;
				dm[no].NA = (h+t+k+uts+uas)/20;
				}
				cout<<"\n\nYakin Data Yang Anda Masukan Benar ? 1. Ya / 2. Tidak\n";cin>>konf1;
    			switch(konf1){
    				case 1:
    					system("cls");
    					cout << "\n|=================================================================================|\n";
						cout << "|                           PENILAIAN AKHIR KALKULUS                              |\n";
						cout << "|=================================================================================|\n";
    					cout<<"| No "<<"|     Nama Mahasiswa     "<<"|   NIM   "<<"| Absen "<<"| Tugas "<<"| Kuis "<<"| UTS "<<"| UAS "<<"|  NA  "<<"|\n";
    					for(no = 1; no <= mhs; no++){
						cout << setiosflags(ios::left) << "| " << setw(3) << no;
						cout << setiosflags(ios::left) << "|" << setw(24) << dm[no].nama;
						cout << setiosflags(ios::left) << "|" << setw(9) << dm[no].nim;
						cout << setiosflags(ios::left) << "|" << setw(7) << dm[no].jumkehadiran;
						cout << setiosflags(ios::left) << "|" << setw(7) << dm[no].ntugas;
						cout << setiosflags(ios::left) << "|" << setw(6) << dm[no].nkuis;
						cout << setiosflags(ios::left) << "|" << setw(5) << dm[no].nuts;
						cout << setiosflags(ios::left) << "|" << setw(5) << dm[no].nuas;
						cout << setiosflags(ios::left) << "|" << setw(6) << dm[no].NA<< "|"; 
						cout << endl;}
    					break ;				
					case 2: 
						system("cls");
						goto input_datak;
						break ;	
				}
    		break ;	
    		case 2: 
    			system("cls");
    			input_datar:
    			for(no = 1; no <= mhs; no++){	
    			cout<<"          Penilaian Akhir Robotik\n";
    			cout<<"============================================\n";
    			cout<<"\n\nNama 			: ";cin>>dm[no].nama;
    			cout<<"\nJumlah Kehadiran 	: ";cin>>dm[no].jumkehadiran;
					h = dm[no].jumkehadiran / 10 * 100;
				cout<<"\nNilai Tugas		: ";cin>>dm[no].ntugas;
					t = dm[no].ntugas / 20 * 100;
				cout<<"\nNilai Kuis		: ";cin>>dm[no].nkuis;
					k = dm[no].nkuis / 20 * 100;
				cout<<"\nNilai UTS		: ";cin>>dm[no].nuts;
					uts = dm[no].nuts / 25 * 100;
				cout<<"\nNilai UAS		: ";cin>>dm[no].nuas;
uas = dm[no].nuas / 25 * 100;
				dm[no].NA = (h+t+k+uts+uas)/20;
				}
				cout<<"\n\nYakin Data Yang Anda Masukan Benar ? 1. Ya / 2. Tidak\n";cin>>konf1;
    			switch(konf1){
    				case 1:
    						system("cls");
    					cout << "\n|=================================================================================|\n";
						cout << "|                           PENILAIAN AKHIR ROBOTIK                               |\n";
						cout << "|=================================================================================|\n";
    					cout<<"| No "<<"|     Nama Mahasiswa     "<<"|   NIM   "<<"| Absen "<<"| Tugas "<<"| Kuis "<<"| UTS "<<"| UAS "<<"|  NA  "<<"|\n";
    					for(no = 1; no <= mhs; no++){
						cout << setiosflags(ios::left) << "| " << setw(3) << no;
						cout << setiosflags(ios::left) << "|" << setw(24) << dm[no].nama;
						cout << setiosflags(ios::left) << "|" << setw(9) << dm[no].nim;
						cout << setiosflags(ios::left) << "|" << setw(7) << dm[no].jumkehadiran;
						cout << setiosflags(ios::left) << "|" << setw(7) << dm[no].ntugas;
						cout << setiosflags(ios::left) << "|" << setw(6) << dm[no].nkuis;
						cout << setiosflags(ios::left) << "|" << setw(5) << dm[no].nuts;
						cout << setiosflags(ios::left) << "|" << setw(5) << dm[no].nuas;
						cout << setiosflags(ios::left) << "|" << setw(6) << dm[no].NA<< "|"; 
						cout << endl;}
    					break ;  					
					case 2: 
						system("cls");
						goto input_datar;
						break ;	
				}
			break ;	
		}	
	}else{
		system("cls");
		cout << "\n===========================\n";            
        cout << "Username / Password Salah! \n";
     	cout << "=============================\n\n";
		 goto cobalagi; 
	}	
}
