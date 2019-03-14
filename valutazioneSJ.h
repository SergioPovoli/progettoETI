#ifndef __valutazioneSJ_h__
#define __valutazioneSJ_h__

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class ValutazioneSJ{
private:
    vector<pair<double,float>> deltadist_zenit;
    vector<double> duratamovimentimodello_zenit;
	vector<double> duratamovimentipaziente_zenit;
    vector<pair<double,float>> deltatime_zenit;
    double media_deltadist_zenit;
    float media_deltadist_zenit_percento;
    double media_deltatime_zenit;
    float media_deltatime_zenit_percento;
    vector<pair<double,float>> deltadist_azimut;
    vector<double> duratamovimentimodello_azimut;
	vector<double> duratamovimentipaziente_azimut;
    vector<pair<double,float>> deltatime_azimut;
    double media_deltadist_azimut;
    float media_deltadist_azimut_percento;
    double media_deltatime_azimut;
    float media_deltatime_azimut_percento;
public:
    ValutazioneSJ();
    //Metodi valutazione spaziale
    void insert_deltadist_zenit(double _n, float _p);
    void insert_deltadist_azimut(double _n, float _p);
	void media_deltadist();
	double get_media_deltadist_zenit();
	double get_media_deltadist_azimut();
	//Metodi valutazione velocit�
	void insert_duratamovimentimodello_zenit(double _n);
	void insert_duratamovimentipaziente_zenit(double _n);
    void insert_duratamovimentimodello_azimut(double _n);
	void insert_duratamovimentipaziente_azimut(double _n);
    void insert_deltatime_zenit();
    void insert_deltatime_azimut();
   
	//Metodi di valutazione
	void elaboradati(); //funzione che in base ai vettori presenti in questa classe fornisce delle considerazioni
	void stampa();
};
#endif
