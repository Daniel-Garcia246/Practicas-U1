#include "iostream"
#include "iostream"
using namespace std;
int main()
{ //problema 1.3 longitud, peso y nombre de dinosaurios
string NOMBRE;
float PESOLIBRAS, LONGITUDPIES;
float PESOKILOS, LONGITUDMETROS;

cout<<" Escribe el nombre del dinosaurio "<<"\n";
cin>> NOMBRE;
cout<<" Escribe el peso del dinosaurio en libras "<<"\n";
cin>>PESOLIBRAS;
cout<<" Escribe la longitu del dinosaurio en pies "<<"\n";
cin>>LONGITUDPIES;

PESOKILOS=PESOLIBRAS*1000;
LONGITUDMETROS=LONGITUDPIES*0.3047;

cout<<" El peso en kilos del dinosaurio "<< NOMBRE<< " es " <<PESOKILOS<<" y la longitud en metros es " <<LONGITUDMETROS<<"\n";
return 0;
}
