#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	//definicion y asignacion de valores char
	char letra ;
	char vocal_may, vocal_min;
	char arro;
	char barr;
	letra='L';
	cout<<"imprimiendo la letra 'L':"<<letra<<endl;
	//letra="ll";//error por asignar mas de un caracter.
	//asignando valoeres numericos
	letra=65; //ASCII es la letra A.
	cout<<"imprimiendo ASCII '65':"<<letra<<endl;
	//imprimir en codigo ASCII las vocales may y min con acentos, @,\
	//vocales minusculas
	    vocal_min = 133; //ASCII es la à
			cout<<"imprimiendo la letra 'L':"<<vocal_min<<endl;
			vocal_min = 130; //ASCII es la è
			cout<<"imprimiendo la letra 'L':"<<vocal_min<<endl;
			vocal_min = 141; //ASCII es la ì			
			cout<<"imprimiendo la letra 'L':"<<vocal_min<<endl;
			vocal_min =149; //ASCII es la ò
			cout<<"imprimiendo la letra '149':"<<vocal_min<<endl;
			vocal_min = 151; //ASCII es la ù
			cout<<"imprimiendo la letra '151':"<<vocal_min<<endl;
			
			//imprimiendo las letras mayusculas
			
			vocal_may = 181; //ASCII es la À
			cout<<"imprimiendo la letra '181':"<<vocal_may<<endl;
			vocal_may = 212; //ASCII es la È
			cout<<"imprimiendo la letra '212':"<<vocal_may<<endl;
			vocal_may = 214; //ASCII es la Ì
			cout<<"imprimiendo la letra '214':"<<vocal_may<<endl;
			vocal_may = 227; //ASCII es la Ò
			cout<<"imprimiendo la letra '227':"<<vocal_may<<endl;
			vocal_may = 233; //ASCII es la Ù
			cout<<"imprimiendo la letra '233':"<<vocal_may<<endl;
			
			//imprimiendo el arroba "@"
			arro = 64; //ASCII es la @
			cout<<"imprimiendo la letra '64':"<<arro<<endl;
			
		// imprimiendo la barra invertido \
			arro = 92; //ASCII es la \
			cout<<"imprimiendo la letra '92':" <<arro<<endl;
			
			//declaracion de cadena de caracteres
			char nombre []="EDDY";// el char nombre es para mostrar nombre dentro de los corchetes
			cout<<"imprimiendo la NOMBRE :"<<nombre<<endl;
			cout<<"imprimiendo la nombre [0]:"<<nombre[0]<<endl;
			cout<<"imprimiendo la nombre [1]:"<<nombre[1]<<endl;
			cout<<"imprimiendo la nombre [2]:"<<nombre[2]<<endl;
			cout<<"imprimiendo la nombre [3]:"<<nombre[3]<<endl;
			
			
		return 0;
}
