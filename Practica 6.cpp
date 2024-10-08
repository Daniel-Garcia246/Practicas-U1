#include "iostream"
using namespace std;
int main()
{
//problema 1.1
//construya un programa que dado al costo de un producto y la cantidad de dinero pagado, calcule e imprima el cambio que se dbe entregar
float PRECIOPRODUCTO, DEVOLUCION;
float PAGO;
cout<<" Escriba el costo del articulo "<<"\n";
cin>>PRECIOPRODUCTO;
cout<<" Escribe cuanto fue el pago del articulo "<<"\n";
cin>>PAGO;
DEVOLUCION= PAGO-PRECIOPRODUCTO;
cout<<" El cambio del cliente es " <<DEVOLUCION;
return 0;
}
