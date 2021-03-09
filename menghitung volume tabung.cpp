#include<iostream>
using namespace std;
int main()
{
	float volume, phi=3.14;
	int r,t;
	cout<<"perhitungan volume tabung "<<endl<<"\n";
	
	cout<<"masukkan panjang jari-jari alas tabung = ";
	cin>>r;
	cout<<"masukkan tinggi tabung = ";
	cin>>t;

	volume=phi*r*r*t;
	cout<<"volume tabung adalah = "<<volume<<endl<<"\n";
	
	return 0;
}
