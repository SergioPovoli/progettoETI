#ifndef __UTILITY_H__
#define __UTILITY_H__

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "coordinata.h"
#define PI 3.14159265
using namespace std;



double angolo_azimut(const Coordinata& c1, const Coordinata& c2, const Coordinata& c3);
//La cordianta c2 deve essere la coordinata in comune alle due rette.

double angolo_zenit(double _x, double _z );



double angolo_XY(Coordinata &c1,Coordinata &c2){
	if((c2.get_x()-c1.get_x())==0)
		return 90;
	double m=(c2.get_y()-c1.get_y())/(c2.get_x()-c1.get_x());
	return atan(m)*180/PI;
}

double angolo_XZ(Coordinata &c1,Coordinata &c2){
	if((c2.get_x()-c1.get_x())==0)
		return 90;	
	double m=(c2.get_z()-c1.get_z())/(c2.get_x()-c1.get_x());
	return atan(m)*180/PI;
}

double d_angolo(double &a1,double &a2){
	if(a1>0)
		return 180-a1+a2;
	else
		return 180+a1-a2;
}

#endif
