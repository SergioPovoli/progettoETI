#ifndef __UTILITY_H__
#define __UTILITY_H__

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "coordinata.h"
#define PI 3.14159265
using namespace std;



double angolo_azimut(Coordinata& c1, Coordinata& c2, Coordinata& c3);
//La cordianta c2 deve essere la coordinata in comune alle due rette.

double angolo_zenit(Coordinata& c1, Coordinata& c2, Coordinata& c3);



double angolo_XY(Coordinata &c1,Coordinata &c2);

double angolo_XZ(Coordinata &c1,Coordinata &c2);

#endif