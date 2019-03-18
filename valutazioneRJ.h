#ifndef __valutazioneRJ_h__
#define __valutazioneRJ_h__

#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

class ValutazioneRJ {

private:
	//ZENIT
	map<int, vector<double>> deltadistZenitRJ; //chiave tutti i joint meno quello indagato e vettori di scostamento tra max e min
	map<int,double> media_deltadist_zenit; //chiave numero joint, secondo elemento media discostamenti modello/paziente
	map<int, float> pesired_zenit; //Map che sarà popolata con la i pesi redistibuiti per ogni angolo.
    float mediapesata;
    //AZIMUT
	map<int, vector<double>> deltadistAzimutRJ;  
	map<int,double> media_deltadist_azimut;
    map<int,float> pesired_azimut;

public:
    //INSERT
    void insert_pesiredzenit(int _n, float _p);
    void insert_pesiredazimut(int _n, float _p);
    void insert_deltadist_zenit(int _joint, double _diff);
	void insert_deltadist_azimut(int _joint, double _diff);
    void calcola_mediapesata();
	//PROCESS
	void calcola_media_discostamento();
	//TEST
	void stampa();
};


#endif
