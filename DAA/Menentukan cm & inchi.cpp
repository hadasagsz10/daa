#include <iostream>
using namespace std;

int main()
{
	float m, cm, inchi;
	system("cls");
	
	cout<<"masukan ukuran meter"<<endl;
	cin>>m;
	
	cm = m * 100;
	inchi = m * 100 / 2.54;
	
	cout<<"masukan ukuran dalam cm = "<<cm<<endl;
	cout<<"masukan ukuran dalam inchi = "<<inchi<<endl;
}
