#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	short int numero_entero_p;// 16 bits, limte maximo 32767 minimo -32768
	unsigned short int numero_entero_p1 ;// 16 bits rango limite de 65535, rango minimo 0
	int numero_entero; // 32 bits, rango limite 2147483647 rango minimo -2147483648
	float numero_decimal;// 32 bits rango limite de 3.4E*38, rango minimo 1.7E-308
	double numero_decimal_g;// 64 bits
	//asignando valoreslimites de los tipos de datos
	numero_entero_p=32767;//valor limite del dato
	cout <<"numero entero pequeño :"<<numero_entero_p<<endl;
	numero_entero_p1=-65535;//valor fuera del rango
	cout <<"numero entero pequeño :"<<numero_entero_p<<endl;
	
	//Asignando valores limite de los tipos de datos
	numero_entero_p=32767; //valor limite del tipo de dato
	cout <<"Numero entero pequeño:" <<numero_entero_p<<endl;
	numero_entero_p1=-6; //valor limite del tipo de dato 65535 65530
	cout <<"Numero entero pequeño positivo:" <<numero_entero_p1<<endl;
	
	//Asignando valores maximos para unsigned int y int
	numero_entero=2147483647; //valor limite del tipo de dato
	cout <<"Numero entero:" <<numero_entero<<endl;
	numero_entero_s=4294967295; //valor limite del tipo de dato
	cout <<"Numero entero positivo:" <<numero_entero_s<<endl;
	
	//Aignacion entre variables 
	numero_entero_p1=numero_entero_p; //los valores son correctos al asignar??. no es correcta!.
	cout <<"Numero entero pequeño 1ra asignacion :" <<numero_entero_p1<<endl;
	//rango de datos short int -32768 al 32767
	numero_entero_p=32769//el valor esta fuera del rango de valores permitidos
		numero_entero_p1=numero_entero_p;//
	cout <<"Numero entero pequeño 2da asignacion:" <<numero_entero_p1<<endl;
}
