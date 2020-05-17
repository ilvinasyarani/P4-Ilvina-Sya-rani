#include <iostream>
#include <conio.h>
using namespace std;

int develop_data(){
	cout<<"Ilvina Sya'rani\n";
	cout<<"F1B019069\n";
	cout<<"============================================\n";
	cout<<"Program Perhitungan Nilai Akhir 12 Mahasiswa\n";
	cout<<"============================================\n\n";
	
}

int main(){
	
	//Awal
	develop_data(); 
	string NIM = "F1B019069";
	string pw = "F1B019069";
	string NIM_in;
	string pw_in;
	
	//Data Konstan
	const int sks = 23; //jumlah sks diambil
	const int kehadiran = 10; 
	const int tugas = 20; 
	const int kuis = 20; 
	const int UTS = 25; 
	const int UAS = 25;
	const int mhs = 11;
	const string matkul[2] = {"Kalkulus","Robotik"};
	
	//Data Mahasiswa
	string nama;
	int jumkehadiran;
	int jumsks;
	int ntugas;
	int nkuis;
	int nuts;
	int nuas;
	int na;
	
	//Menu
	int pilmatkul;
	int konf1;
	
	//Rumus
	float h;
	float t;
	float k;
	float uts;
	float uas;
	float NA;
	float grade;
	
	cobalagi:
	cout << "=====Login=====\n";
	cout << "Masukkan NIM anda : "; cin >> NIM_in;
	cout << "\nMasukkan Password anda : "; cin >> pw_in; 
    if (NIM_in == NIM && pw_in == pw) {
    	system("cls");
    	cout<<"         Ketentuan Penilaian Akhir\n";
    	cout<<"============================================\n";
    	cout<<"\n\nJumlah Mahasiswa : "<<mhs;
    	cout<<"\nJumlah Pertemuan : "<<"20";
    	cout<<"\nJumlah SKS : "<<sks;
    	cout<<"\n\nMata Kuliah : "<<matkul[0]<<" & "<<matkul[1];
    	
    	cout<<"\n\nBobot Penilaian Akhir \n";
    	cout<<"\nKehadiran 	 = "<<kehadiran<<" %";
    	cout<<"\nTUGAS		 = "<<tugas<<" %";
    	cout<<"\nQuis		 = "<<kuis<<" %";
    	cout<<"\nUTS 		 = "<<UTS<<" %";
    	cout<<"\nUAS		 = "<<UAS<<" %\n";
    
    	cout<<"\n\n 1. Kalkulus";
    	cout<<"\n 2. Robotika";
    	cout<<"\nPilih Mata Kuliah : ";cin>>pilmatkul;
    	switch(pilmatkul){
    		case 1: 
    			system("cls");
    			input_datak:
    			cout<<"          Penilaian Akhir Kalkulus\n";
    			cout<<"============================================\n";
    			cout<<"\n\nNama 			: ";cin>>nama;
    			cout<<"\nJumlah Kehadiran 	: ";cin>>jumkehadiran;
					h = jumkehadiran / 10 * 100;
				cout<<"\nNilai Tugas		: ";cin>>ntugas;
					t = ntugas / 20 * 100;
				cout<<"\nNilai Kuis		: ";cin>>nkuis;
					k = nkuis / 20 * 100;
				cout<<"\nNilai UTS		: ";cin>>nuts;
					uts = nuts / 25 * 100;
				cout<<"\nNilai UAS		: ";cin>>nuas;
					uas = nuas / 25 * 100;
				NA = (h+t+k+uts+uas)/20;
				
				cout<<"\n\nYakin Data Yang Anda Masukan Benar ? 1. Ya / 2. Tidak\n";cin>>konf1;
    			switch(konf1){
    				case 1:
    					system("cls");
    					cout<<"         Data Nilai Akhir Mahasiswa\n";
    					cout<<"============================================\n\n";
    					cout<<"========================================================\n";
    					cout<<"| No."<<" | Nama Mahasiswa "<<"| kehadiran "<<"| Tugas "<<"| Kuis "<<"| UTS "<<"| UAS "<<"| NA "<<"|\n";
    					cout<<"| 1	"<<" | Ilvina         "<<"|     20    "<<"| 92    "<<"| 87   "<<"| 90  "<<"| 80  "<<"| 89 "<<"|\n";
    					cout<<"| 2	"<<" | bakrie         "<<"|     17    "<<"| 80    "<<"| 70   "<<"| 85  "<<"| 79  "<<"| 75 "<<"|\n";
    					cout<<"| 3	"<<" | akbar an       "<<"|     19    "<<"| 83    "<<"| 75   "<<"| 79  "<<"| 90  "<<"| 80 "<<"|\n";
    					cout<<"| 4	"<<" | steven         "<<"|     20    "<<"| 78    "<<"| 86   "<<"| 80  "<<"| 85  "<<"| 85 "<<"|\n";
    					cout<<"| 5	"<<" | iqbal          "<<"|     19    "<<"| 78    "<<"| 87   "<<"| 82  "<<"| 85  "<<"| 85 "<<"|\n";
    					cout<<"| 6	"<<" | rindang        "<<"|     20    "<<"| 92    "<<"| 89   "<<"| 90  "<<"| 79  "<<"| 90 "<<"|\n";
    					cout<<"| 7	"<<" | azqa           "<<"|     20    "<<"| 79    "<<"| 83   "<<"| 85  "<<"| 80  "<<"| 80 "<<"|\n";
    					cout<<"| 8	"<<" | abdul          "<<"|     20    "<<"| 80    "<<"| 79   "<<"| 80  "<<"| 91  "<<"| 80 "<<"|\n";
    					cout<<"| 9	"<<" | wina           "<<"|     18    "<<"| 90    "<<"| 76   "<<"| 81  "<<"| 80  "<<"| 90 "<<"|\n";
    					cout<<"| 10	"<<" | hapis          "<<"|     19    "<<"| 92    "<<"| 80   "<<"| 91  "<<"| 82  "<<"| 79 "<<"|\n";
    					cout<<"| 11	"<<" | autar          "<<"|     19    "<<"| 90    "<<"| 91   "<<"| 86  "<<"| 80  "<<"| 80 "<<"|\n";
    					cout<<"| 12	"<<" | "<<nama<<"         |     "<<jumkehadiran<<"    | "<<ntugas<<"    | "<<nkuis<<"   | "<<nuts<<"  | "<<nuas<<"  | "<<NA<<" |";
    					

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
    			cout<<"          Penilaian Akhir Robotik\n";
    			cout<<"============================================\n";
    			cout<<"\n\nNama 			: ";cin>>nama;
    			cout<<"\nJumlah Kehadiran 	: ";cin>>jumkehadiran;
					h = jumkehadiran / 10 * 100;
				cout<<"\nNilai Tugas		: ";cin>>ntugas;
					t = ntugas / 20 * 100;
				cout<<"\nNilai Kuis		: ";cin>>nkuis;
					k = nkuis / 20 * 100;
				cout<<"\nNilai UTS		: ";cin>>nuts;
					uts = nuts / 25 * 100;
				cout<<"\nNilai UAS		: ";cin>>nuas;
					uas = nuas / 25 * 100;
				NA = (h+t+k+uts+uas)/20;
				
				cout<<"\n\nYakin Data Yang Anda Masukan Benar ? 1. Ya / 2. Tidak\n";cin>>konf1;
    			switch(konf1){
    				case 1:
    					system("cls");
    					cout<<"         Data Nilai Akhir Mahasiswa\n";
    					cout<<"============================================\n\n";
    					cout<<"========================================================\n";
    					cout<<"| No."<<" | Nama Mahasiswa "<<"| kehadiran "<<"| Tugas "<<"| Kuis "<<"| UTS "<<"| UAS "<<"| NA "<<"|\n";
    					cout<<"| 1	"<<" | Ilvina         "<<"|     20    "<<"| 90    "<<"| 89   "<<"| 90  "<<"| 85  "<<"| 90 "<<"|\n";
    					cout<<"| 2	"<<" | bakrie         "<<"|     20    "<<"| 100   "<<"| 96   "<<"| 90  "<<"| 95  "<<"| 100"<<"|\n";
    					cout<<"| 3	"<<" | akbar an       "<<"|     20    "<<"| 95    "<<"| 80   "<<"| 80  "<<"| 85  "<<"| 90 "<<"|\n";
    					cout<<"| 4	"<<" | steven         "<<"|     17    "<<"| 80    "<<"| 80   "<<"| 86  "<<"| 80  "<<"| 90 "<<"|\n";
    					cout<<"| 5	"<<" | iqbal          "<<"|     20    "<<"| 90    "<<"| 80   "<<"| 85  "<<"| 90  "<<"| 88 "<<"|\n";
    					cout<<"| 6	"<<" | rindang        "<<"|     20    "<<"| 90    "<<"| 85   "<<"| 85  "<<"| 88  "<<"| 90 "<<"|\n";
    					cout<<"| 7	"<<" | azqa           "<<"|     19    "<<"| 90    "<<"| 87   "<<"| 85  "<<"| 88  "<<"| 90 "<<"|\n";
    					cout<<"| 8	"<<" | abdul          "<<"|     20    "<<"| 85    "<<"| 89   "<<"| 80  "<<"| 85  "<<"| 85 "<<"|\n";
    					cout<<"| 9	"<<" | wina           "<<"|     20    "<<"| 85    "<<"| 85   "<<"| 90  "<<"| 85  "<<"| 88 "<<"|\n";
    					cout<<"| 10	"<<" | hapis          "<<"|     19    "<<"| 90    "<<"| 85   "<<"| 90  "<<"| 88  "<<"| 90 "<<"|\n";
    					cout<<"| 11	"<<" | autar          "<<"|     20    "<<"| 90    "<<"| 85   "<<"| 90  "<<"| 85  "<<"| 90 "<<"|\n";
    					cout<<"| 12	"<<" | "<<nama<<"         |     "<<jumkehadiran<<"    | "<<ntugas<<"    | "<<nkuis<<"   | "<<nuts<<"  | "<<nuas<<"  | "<<NA<<" |";
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
