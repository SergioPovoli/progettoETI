#ifndef __ANGOLO_H__
#define __ANGOLO_H__

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "coordinata.h"
#include "utility.h"
#define PI 3.14159265

using namespace std;

class Angolo{
	private:
		double zenit; //Altezza (Y-Z)
		double azimut; //Posizione (X-Y)
	public:
    Angolo(Coordinata& c1,Coordinata& c2,Coordinata& c3);
    double get_zenit()const;
    double get_azimut()const;
    
    friend ostream& operator << (ostream& os,const Angolo& _angolo);
};

ostream& operator << (ostream& os,const Angolo& _angolo);





#endif
