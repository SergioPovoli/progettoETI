#include "Frame.h"

Frame::Frame(int _numeroframe){
    numeroframe=_numeroframe;
}

int Frame::get_numeroframe()const{
    return numeroframe;
}

Coordinata Frame::get_coordinata(int _numerojoint){
    Coordinata c(0,0,0);
    map<int,Coordinata>::iterator iter=coordinatejoint.find(_numerojoint);
    if(iter!=coordinatejoint.end()){
        c=iter->second;
    }
    return c;
}

void Frame::insert_coordinata(int _numerojoint, double _x, double _y, double _z){
    coordinatejoint.insert(pair<int,Coordinata> (_numerojoint, Coordinata(_x,_y,_z)));
    
}

void Frame::insert_angolo(string joint,int a,int b,int c){
    map<int,Coordinata>::iterator itera;
    map<int,Coordinata>::iterator itera2;
    map<int,Coordinata>::iterator itera3;
	Coordinata c1,c2,c3;
	
	itera=coordinatejoint.find(a);
	if(itera!=coordinatejoint.end()){
		c1=itera->second;
	}
	itera2=coordinatejoint.find(b);
	if(itera2!=coordinatejoint.end()){
		c2=itera2->second;
	}
	itera3=coordinatejoint.find(c);
	if(itera3!=coordinatejoint.end()){
		c3=itera3->second;
	}

    if(itera!=coordinatejoint.end() && itera2!=coordinatejoint.end() && itera3!=coordinatejoint.end()){
        angolijoint.insert(pair<string,Angolo> (joint,Angolo(c1,c2,c3,numeroframe)));
    }
	
}


map<string,Angolo> Frame::get_angolijoint()const{
    return angolijoint;
}

void Frame::completa_angoli(){
	insert_angolo("3",4,3,2);
	insert_angolo("2",3,2,1);
	insert_angolo("1a",2,1,0);
	insert_angolo("1b",0,1,5);
	insert_angolo("1c",0,1,11);
	insert_angolo("1d",2,1,8);
	insert_angolo("1e",2,1,0);
	insert_angolo("6",5,6,7);
	insert_angolo("8",1,8,9);
	insert_angolo("11",1,11,12);
	insert_angolo("9",8,9,10);
	insert_angolo("12",11,12,13);
	insert_angolo("5",0,5,6);	
}

ostream& operator <<(ostream& os, const Frame& f){
    os<<"Frame: "<<f.numeroframe<<endl;
    map<int,Coordinata>::const_iterator iter;
    for(iter=f.coordinatejoint.begin();iter!=f.coordinatejoint.end();++iter){
        os<<iter->first<<": "<<iter->second<<endl;
    }
    os<<endl;
    map<string,Angolo>::const_iterator iteran;
    for(iteran=f.angolijoint.begin();iteran!=f.angolijoint.end();++iteran){
        os<<iter->first<<": "<<iter->second<<endl;
    }
    return os;
}
    
    