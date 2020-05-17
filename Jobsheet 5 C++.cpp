#include <iostream>
using namespace std;
int main() {
	
	cout << "Ilvina sya'rani'\n";
  cout << "F1B019069\n";
  cout << "=====================\n";
  cout << "  Perkalian Matriks\n";
	
  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int i, j, k, m, n, p, q, jumlah = 0;
  cout << "Masukkan jumlah baris matriks pertama: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks pertama: ";
  cin >> n;
  cout << "Masukkan jumlah baris matriks kedua: ";
  cin >> p;
  cout << "Masukkan jumlah kolom matriks kedua: ";
  cin >> q;
  cout << "\n========================================\n";
  if(n != p){
    cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
  } else {
  	
    cout << "Masukkan elemen matriks pertama: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cin >> matriks1[i][j];  
      }
    }
    cout << "\n========================================\n";
    cout << "Masukkan elemen matriks kedua: \n";
    for(i = 0; i < p; i++){
      for(j = 0; j < q; j++){
        cin >> matriks2[i][j];
      }
    }
    cout << "\n========================================\n";
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "\n========================================\n";
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
  }
  
  return 0;
}
