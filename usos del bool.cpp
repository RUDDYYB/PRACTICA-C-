#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	//declaracion de uso de bool
	bool b0;
	b0=true;
	cout<<"variable con valor true:"<<b0<<endl;
	b0=false;
	cout<<"variable con valor FALSO:"<<b0<<endl;
	//aignacion de valores numericos.
	//si es cero es falso, si es diferente de ceo es verdadero.
	b0=0; //el valor se vera como false
	cout<<"variable con valor 0:"<<b0<<endl;
	b0=1;//el valor se vera como true
		cout<<"varaible con valor 1:"<<b0<<endl;
	b0=-100;//el valor se vera como verdadero o true
	cout<<"variable con valor 1:"<<b0<<endl;
	return 0;
	// aqui se esta haciendo la declaracion y usos del bool
	//si se le asigna el valor de 0 entonces la respuesta de la variable sera verdadero
	//bool solo se utiliza para demostra si es verdadero o falso el dato ingresado
	//cuando se demuestra lo contrario sera falso
}
