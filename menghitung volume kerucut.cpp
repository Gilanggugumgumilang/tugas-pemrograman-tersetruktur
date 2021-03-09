#include<iostream>
using namespace std;
int main()
{
	float volume, phi=3.14;
	int r,t;
	cout<<"perhitungan volume kerucut "<<endl<<"\n";
	
	cout<<"masukkan panjang jari-jari kerucut = ";
	cin>>r;
	cout<<"masukkan tinggi kerucut = ";
	cin>>t;

	volume=(phi*r*r*t)/3;
	cout<<"volume kerucut adalah = "<<volume<<endl<<"\n";
	
	return 0;
}
