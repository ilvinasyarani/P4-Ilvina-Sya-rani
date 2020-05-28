#include <stdio.h>
#include <stdlib.h>
void loginad();
void kalkulus();
void robotika ();
struct loginad {
	char uadmin[100], padmin[100];
	}ab;

int main(){
	int a,b,c,d;
printf("Ilvina Sya'rani'\n");
printf("F1B019069\n");
printf("============================================\n");
printf("Program Perhitungan Nilai Akhir 12 Mahasiswa\n");
printf("============================================\n");
printf("=====Login=====\n");
printf("Masukan NIM anda\t=");gets(ab.uadmin);fflush(stdin);
printf("Masukan Password\t=");gets(ab.padmin);system ("cls");fflush(stdin);
			if ((strcmp(ab.uadmin,"F1B019069")==0) && (strcmp(ab.padmin,"F1B019069")==0))
			{
				fflush(stdin);
				printf ("\tLOGIN SUKSES !!\n\n");
				system ("pause");
				system ("cls");
				printf ("         Ketentuan Penilaian Akhir\n");
				printf ("============================================\n");
				printf ("\n\nJumlah Mahasiswa : 12");
				printf ("\nJumlah Pertemuan   : 20");
				printf ("\nJumlah SKS         : 23");
				printf ("\n\nMata Kuliah      : Kalkulus & Robotik");
				printf ("\n\nBobot Penilaian Akhir \n") ;
				printf ("\nKehadiran   = 10%%");
				printf ("\nTUGAS       = 15%%");
				printf ("\nQuis        = 20%%");
				printf ("\nUTS         = 25%%");
				printf ("\nUAS         = 30%%");
				printf ("\n\n 1. Kalkulus 3 SKS");
				printf ("\n 2. Robotika 2 SKS");
				printf ("\n 3. Exit");
				printf ("\nPilih Mata Kuliah : ");
				scanf ("%d",&a); fflush(stdin);
				switch (a) {
				    case 1 : {
				    	kalkulus();
						break;
					}
				    case 2 : {
				    	robotika ();
						break;
					}
				    default : {
				    	printf ("\n\n\t\t\t ##### TERIMA KASIH #####"); exit(1);
						break;
					}
				        }
				        exit(1);
			}
			else printf ("Login Gagal");getchar();
			system("cls");
			main();
}
void kalkulus(){
    struct kalkulus {
    char nama[100];
    int absen[50],ntugas[100],nim[20],nkuis[100],nuts[100],nuas[100];
    float NA[100];
}t[100];
 int i,n,na;
 printf("Jumlah Mahasiswa : ");
 scanf("%d",&n);
 for(i=0;i<=n-1;i++){
    system("cls");
    printf("Mahasiswa ke-%d\n",i+1);
    printf("Nama : ");fflush(stdin);
    gets(t[i].nama);
    printf("NIM : ");fflush(stdin);
    scanf("%s",&t[i].nim);
    printf("jumlah absen : ");fflush(stdin);
    scanf ("%s",&t[i].absen);
    printf("Nilai Tugas : ");
    scanf ("%s",&t[i].ntugas);
    printf("Nilai kuis : ");
    scanf ("%s",&t[i].nkuis);
    printf("Nilai UTS : ");
    scanf ("%s",&t[i].nuts);
    printf("Nilai UAS : ");
    scanf ("%s",&t[i].nuas);
 }
 printf("\n");
 printf ("\n|=================================================================================|\n");
 printf ("|                           PENILAIAN AKHIR KALKULUS                               |\n");
 printf ("|=====================================================================================|\n");
 printf("|no | Nama Mahasiswa    |         NIM         | absen | tugas | kuis | UTS | UAS | NA |\n");
 for(i=0;i<=n-1;i++){
  printf("| %d | %s           | %s                | %s  | %s    | %s   | %s  | %s  | %s  |\n",i+1,t[i].nama,t[i].nim,t[i].absen,t[i].ntugas,t[i].nkuis,t[i].nuts,t[i].nuas,na);
   }
}
void robotika (){
	struct robotika {
    char nama[20];
    int absen[50],ntugas[100],nim[20],nkuis[100],nuts[100],nuas[100];
};
 struct robotika t[1000];
 int i,n;
 float na ;
 printf("Jumlah Mahasiswa : ");
 scanf("%d",&n);
 for(i=0;i<=n-1;i++){
    system("cls");
    printf("Mahasiswa ke-%d\n",i+1);
    printf("Nama : ");fflush(stdin);
    gets(t[i].nama);
    printf("NIM : ");fflush(stdin);
    scanf ("%s",&t[i].nim);
    printf("jumlah absen : ");fflush(stdin);
    scanf ("%s",&t[i].absen);
    printf("Nilai Tugas : ");
    scanf ("%s",&t[i].ntugas);
    printf("Nilai kuis : ");
    scanf ("%s",&t[i].nkuis);
    printf("Nilai UTS : ");
    scanf ("%s",&t[i].nuts);
    printf("Nilai UAS : ");
    scanf ("%s",&t[i].nuas);
 }
 printf("\n");
 printf ("\n|=================================================================================|\n");
 printf ("|                           PENILAIAN AKHIR ROBOTIKA                              |\n");
 printf ("|=================================================================================|\n");
 printf("|no | Nama Mahasiswa |         NIM         | absen | tugas | kuis | UTS | UAS | NA |\n");
 for(i=0;i<=n-1;i++){
  printf("| %d | %s           | %s                | %s  | %s    | %s   | %s  | %s  | %s  |\n",i+1,t[i].nama,t[i].nim,t[i].absen,t[i].ntugas,t[i].nkuis,t[i].nuts,t[i].nuas,na);
   }

}
