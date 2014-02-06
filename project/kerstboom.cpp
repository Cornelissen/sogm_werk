#include <iostream>
#include "kerstboom.h"

using namespace std;



int main()		 // haakjes achter main laten zien dat het een object is
{
int aantalKerstbomen=0;	 // variables - unsigned int, alleen maar positieve getallen 
int naastKerstbomen=0;
			 		//- signed positief en negatief maar wel met een minder groot bereik in het positieve domein 
 cout << "hoeveel kerstbomen onder elkaar?" << endl;
 cin >> aantalKerstbomen;

 cout << "Aantal kerstbomen: " <<aantalKerstbomen << endl;
 
 cout << "hoeveel kerstbomen naast elkaar?" << endl;
 cin >> naastKerstbomen;
 cout << "kerstbomen naast elkaar: " <<naastKerstbomen << endl;


// int i=0; //intialistatie
//  while(i<aantalKerstbomen) //test
//  {
//    cout << I << endl;
//    ++i; //increment i + 1
//  }


for(int boom=0; boom<aantalKerstbomen; ++boom) { // while en for zijn uitwisselbaar ze werken allebei met een loop.
	for(int rij=0; rij<HOOGTE; ++rij) {
		for(int naast=0; naast<naastKerstbomen; ++naast) {
			for(int spatie=HOOGTE; spatie>rij; --spatie) {
				cout << " ";
			}
			for(int ster=0; ster<rij*2+1; ++ster) {
				cout << "*";
			} 
			for(int spatie=HOOGTE; spatie>rij; --spatie) {
				cout << " ";
			}
		}
			cout << endl;
	}


	for(int stamRij=0; stamRij<HOOGTE*0.2; ++stamRij){
		for(int naast=0; naast<naastKerstbomen; ++naast) {
	
			for(int stamSpatie=0; stamSpatie<HOOGTE - ((HOOGTE*0.2)*0.5); ++stamSpatie) {
				cout << " ";
			}	 
			for(int stam=0; stam<HOOGTE*0.2+1; ++stam){
				cout << "|"; 
			}
			for(int stamSpatie=0; stamSpatie<HOOGTE - ((HOOGTE*0.2)*0.5); ++stamSpatie) {
				cout << " ";
			}
		}
		cout <<endl;
	}
}


	return 0;
} 			// deze gekrulde haakjes zijn de body van 't object, het uitvoerbare}
