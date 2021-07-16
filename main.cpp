#include <iostream>

using namespace std;

int main(int argc, char** argv) {
		int opcion, Areadelcirculo, Areadelrectangulo, metrosakilometros, centimetrosametros, n1, n2;
	
	cout<<"********************************"<<endl;
	cout<<"*            MENU              *"<<endl;
	cout<<"* 1. Area del circulo          *"<<endl;
	cout<<"* 2. Area del rectangulo       *"<<endl;
	cout<<"* 3. Kilometros a metros       *"<<endl;
	cout<<"* 4. centimetros a metros      *"<<endl;
	cout<<"* 5. Tabla de multiplicar         *"<<endl;
	cout<<"********************************"<<endl;
	cout<<"Escoja la opcion: ";
	cin>>opcion;
	
	switch(opcion) {
		case 1: 
		    system("cls");
		    cout<<"*************************/n";
		    cout<<"*     Areadelcirculo      *";
		    cout<<"*************************/n";
		    cout<<"    Ingrese el radio:      ";
		    cin>>n1;
		    cout<<"El area es: ";
		    cin>>n2;
		    
		    area = 3.1416 (n1*n1);
		    cout<<"el area es: "<<area<<endl;
		    break;
		    
		    case 2: 
		    system("cls");
		    cout<<"*************************/n";
		    cout<<"*   Area del rectangulo  *";
		    cout<<"*************************/n";
		    cout<<" Ingresar la base:  ";
		    cin>>n1;
		    cout<<" Ingresar altura: ";
		    cin>>n2;
		    
		    area = n1 * n2;
		    cout<<"el area es: "<<area<<endl;
		    break;
		    
		    case 3: 
		    system("cls");
		    cout<<"*************************/n";
		    cout<<"*  kilomertros a  metros  *";
		    cout<<"*************************/n";
		    cout<<" Ingresar Primer Numero:  ";
		    cin>>n1;
		    cout<<" Ingresar segundo Numero: ";
		    cin>>n2;
		    
		    kilometros = metros/1000;
		    cout<<"la respuesta es: "<<kilometros " Km "<<endl;
		    break;
		    
		     case 4: 
		    system("cls");
		    cout<<"*************************/n";
		    cout<<"*  centimetros a metros   *";
		    cout<<"*************************/n";
		    cout<<" Ingresar Primer Numero:  ";
		    cin>>n1;
		    cout<<" Ingresar segundo Numero: ";
		    cin>>n2;
		    
		    metro = cemtimetro/100;
		    cout<<"la respuesta es: "<<metros" M "<<endl;
		    break;
		    
		     case 5: 
		    system("cls");
		    cout<<"*************************/n";
		    cout<<"*  tablas de multiplicar   *";
		    cout<<"*************************/n";
		    cout<<" Ingresar un Numero:  ";
		    cin>>n1;
		    cout<<endl;
		    for(int i=0;i<=10;i++){
		    	cout<<n<<" x "<<i<<" = "<<n*i<<endl;
			}
		    break;
		    
		  
	return 0;
}
