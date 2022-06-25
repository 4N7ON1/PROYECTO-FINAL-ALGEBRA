/*
Programa para resolver sistemas de ecuaciones usando el método de igualación
*/
#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
using namespace std;
//Primera ecuación:
int a1; //Coeficiente de X
int b1; //Coeficiente de Y
int c1; //La parte derecha del sistema
//Segunda ecuación:
int a2;
int b2;
int c2;
//Resultados:
float x;
float y;
/* Variables temporales */
int BDesp1;
int BDesp2;
int BDesp3;
int CDesp1;
int CMul1;
int CMul2;
int BMul1;
int BMul2;
int YCasi;
int CCasi;
int op1;

/* Fin Variables temporales*/

int obtenerX();
void display();

int main()
{
  do
  {
  cout <<" --Primera ecuacion " <<endl;
  cout <<" Ponga el coeficiente de X" <<endl;
  cout <<" ===> ";
  cin >> a1;
  cout <<" Ponga el coeficiente de Y" <<endl;
  cout <<" ===> ";
  cin >> b1;
  cout <<" Ponga la 'parte derecha' de la ecuacion" <<endl;
  cout <<" ===> ";
  cin >> c1;
  //Segunda ecuacion:
  cout <<" --Segunda ecuacion " <<endl;
  cout <<" Ponga el coeficiente de X" <<endl;
  cout <<" ===> ";
  cin >> a2;
  cout <<" Ponga el coeficiente de Y" <<endl;
  cout <<" ===> ";
  cin >> b2;
  cout <<" Ponga la 'parte derecha' de la ecuacion" <<endl;
  cout <<" ===> ";
  cin >> c2;
  //Despejamos la X (más o menos...)
  BDesp1 = b1 * -1;
  BDesp2 = b2 * -1;
  //Igualación de términos:
  CMul1 = c1*a2;
  CMul2 = c2*a1;
  BMul1 = BDesp1*a2;
  BMul2 = BDesp2*a1;
  //Despejar la Y:
  BDesp3 = BMul2*-1;
  CDesp1 = CMul1*-1;
  //Operaciones intermedias
  YCasi = BMul1 + BDesp3;
  CCasi = CMul2 + CDesp1;
  y = CCasi/YCasi;
  //Tenemos la Y!
  x = obtenerX(); //Tenemos la X a partir de la Y
  display();

  cout <<" Quieres repetir? (0/1)" <<endl;
  cout <<" 0 -> Salir" <<endl;
  cout <<" ===> ";
  cin >> op1;
  if(op1 == 0)
  {
    break;
  }
  else{
    continue;
  }
}
  while(true);
  system("PAUSE");
  return 0;
}

int obtenerX()
{
  int XCasi = y * BDesp1;
  int tempX = (c1 + XCasi)/a1;
  return tempX;
}

void display()
{
  cout <<" El sistema de ecuaciones planteado es el siguiente: " <<endl;
  cout <<a1 <<"x";
  if(b1 >= 0)
  {
    cout <<"+" <<b1 <<"y";
  }
  else{
    cout <<b1 <<"y";
  }
  cout <<"=" <<c1 <<endl;
  //Se muestra la primera ecuacion. Viene la segunda
  cout <<a2 <<"x";
  if(b2 >= 0)
  {
    cout <<"+" <<b2 <<"y";
  }
  else{
    cout <<b2 <<"y";
  }
  cout <<"=" <<c2 <<endl;
  //Se ha mostrado el sistema
  cout <<" Soluciones:" <<endl;
  cout <<" X = " <<x <<endl;
  cout <<" Y = " <<y <<endl;
  //Hemos terminado
  return;
}