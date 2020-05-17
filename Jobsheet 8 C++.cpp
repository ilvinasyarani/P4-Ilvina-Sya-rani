#include <iostream>
using namespace std;
int main(){
  int x[9],i;
  for(i=0;i<9;i++){
  	cout<<"Masukan Nilai "<<i+1<<" : ";
  	cin>>x[i];
  }
  cout<<endl;
  for(i=0;i<9;i++){
  	cout<<"Nilai Ke - "<<i+1<<" = "<<x[i]<<endl;
  }
  cout<<endl;
  return 0;
}
