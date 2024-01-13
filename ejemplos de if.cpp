#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//solicitar un numero y verificar y si par o impar
	//MOD en C++ SE UTILIZA %
	int numero;
	cout<<"ingrese numero"<< endl;
	cin>>numero;
	
	if(numero %2 == 0)
	{
		cout << "es un numero par" << endl;
	}
	else
	{
		cout << "no es par" << endl;
	}
	return 0;
}

