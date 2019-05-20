//                                                                              Fica Mihai gr 212
#include<iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

class vehicul
{
protected:
	bool defectiuneCapitala;
	int roti;
public:
	vehicul();
	vehicul(bool b, int c);
	vehicul(vehicul &a);
	~vehicul();
	vehicul& operator=(vehicul &a);
	virtual void reparatie() = 0;
	virtual void meniu() = 0;
};

vehicul::vehicul()
{
	defectiuneCapitala = 0;
	roti = 0;
}

vehicul::vehicul(bool b, int c)
{
	defectiuneCapitala = b;
	roti = c;
}

vehicul::vehicul(vehicul &a)
{
	defectiuneCapitala = a.defectiuneCapitala;
	roti = a.roti;
}

vehicul::~vehicul()
{
    defectiuneCapitala = 0;
	roti = 0;
}

vehicul& vehicul::operator =(vehicul &a)
{
	defectiuneCapitala = a.defectiuneCapitala;
	roti = a.roti;
}


class motocicleta :public vehicul
{
protected:
	bool placute_fata, placute_spate, ulei, ghidon, vechi;
	int arcuri, amortizoare, discuri, bujii;
public:
	motocicleta();
	motocicleta(motocicleta&a);
	~motocicleta();
	motocicleta& operator = (motocicleta&);
	void reparatie();
	void meniu();
};

motocicleta::motocicleta()
{
	defectiuneCapitala = 0;
	roti = 0;
	placute_fata = 0;
	placute_spate = 0;
	ulei = 0;
	ghidon = 0;
	vechi = 0;
	arcuri = 0;
	amortizoare = 0;
	discuri = 0;
	bujii = 0;
}

motocicleta::motocicleta(motocicleta &a)
{
	defectiuneCapitala = a.defectiuneCapitala;
	roti = a.roti;
	placute_fata = a.placute_fata;
	placute_spate = a.placute_spate;
	ulei = a.ulei;
	ghidon = a.ghidon;
	vechi = a.vechi;
	arcuri = a.arcuri;
	amortizoare = a.amortizoare;
	discuri = a.discuri;
	bujii = a.bujii;
}

motocicleta::~motocicleta()
{
	defectiuneCapitala = 0;
	roti = 0;
	placute_fata = 0;
	placute_spate = 0;
	ulei = 0;
	ghidon = 0;
	vechi = 0;
	arcuri = 0;
	amortizoare = 0;
	discuri = 0;
	bujii = 0;
}

motocicleta& motocicleta::operator=(motocicleta &a)
{
	defectiuneCapitala = a.defectiuneCapitala;
	roti = a.roti;
	placute_fata = a.placute_fata;
	placute_spate = a.placute_spate;
	ulei = a.ulei;
	ghidon = a.ghidon;
	vechi = a.vechi;
	arcuri = a.arcuri;
	amortizoare = a.amortizoare;
	discuri = a.discuri;
	bujii = a.bujii;
	return *this;
}

void motocicleta::reparatie()
{
	int nr_ore = 0, garnituri = 0, suruburi = 0, pret = 0, tpret = 0, tsuruburi = 0, tgarnituri = 0, tnr_ore = 0;
	if (defectiuneCapitala == 0)
	{
		cout << "Motocicleta nu mai poate fi reparata\n";
	}
	else
	{
		if (placute_fata)
		{
			nr_ore = 2;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = 2;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 4;
			tsuruburi = tsuruburi + suruburi;
			pret = garnituri * 5 + suruburi * 1 + nr_ore * 5 + placute_fata * 30;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea placutelor din fata s-au folosit : " << placute_fata << " placute de frana la pretul de 30 de euro\n";
			cout << "                                                     " << garnituri << " garnituri la pretul de 5 euro\n";
			cout << "                                                     " << suruburi << " suruburi la pretul de 1 euro\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (placute_spate)
		{
			nr_ore = 2;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = 2;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 4;
			tsuruburi = tsuruburi + suruburi;
			pret = garnituri * 5 + suruburi * 1 + nr_ore * 5 + placute_spate * 30;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea placutelor din spate s-au folosit : placute de frana la pretul de 30 de euro\n";
			cout << "                                                    " << garnituri << " garnituri la pretul de 5 euro\n";
			cout << "                                                    " << suruburi << " suruburi la pretul de 1 euro\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n ";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (discuri)
		{
			nr_ore = 2 * discuri;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = discuri;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 3 * discuri;
			tsuruburi = tsuruburi + suruburi;
			pret = garnituri * 5 + suruburi * 1 + nr_ore * 5 + discuri * 25;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea discurilor s-au folosit : " << discuri << " discuri la pretul de 25 de euro/disc\n";
			cout << "                                            " << garnituri << " garnituri la pretul de 5 euro/garnitura\n";
			cout << "                                            " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n ";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (arcuri)
		{
			nr_ore = 2 * arcuri;
			tnr_ore = tnr_ore + nr_ore;
			suruburi = 4 * arcuri;
			tsuruburi = tsuruburi + suruburi;
			pret = suruburi * 1 + nr_ore * 5 + arcuri * 15;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea arcurilor s-au folosit : " << arcuri << " arcuri la pretul de 15 de euro/arc\n";
			cout << "                                           " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore \n\n";
			nr_ore = 0;
			suruburi = 0;
			pret = 0;
		}
		if (amortizoare)
		{
			nr_ore = amortizoare;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = amortizoare;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 2 * amortizoare;
			tsuruburi = tsuruburi + suruburi;
			pret = pret + garnituri * 5 + suruburi * 1 + nr_ore * 5 + amortizoare * 25;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea amortizoarelor s-au folosit : " << amortizoare << " amortizoare la pretul de 25 de euro/amortizor\n";
			cout << "                                                " << garnituri << " garnituri la pretul de 5 euro/garnitura\n";
			cout << "                                                " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore \n\n";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (ulei)
		{
			nr_ore = 1;
			tnr_ore = tnr_ore + nr_ore;
			pret = 25 * ulei + nr_ore * 5;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea uleiului s-a folosit un ulei la pretul de 25 de euro\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro \n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << "de ore\n\n";
			nr_ore = 0;
			pret = 0;
		}
		if (bujii)
		{
			nr_ore = bujii;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = (garnituri + 1)*bujii;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 4 * bujii;
			tsuruburi = tsuruburi + suruburi;
			pret = pret + garnituri * 5 + suruburi * 1 + nr_ore * 5 + bujii * 10;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea bujiilor s-au folosit : " << bujii << " bujii la pretul de 10 de euro/bujii\n";
			cout << "                                          " << garnituri << " garnituri la pretul de 5 euro/garnitura\n";
			cout << "                                          " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore \n\n";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (ghidon)
		{
			nr_ore = 1;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = 2;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 8;
			tsuruburi = tsuruburi + suruburi;
			pret = garnituri * 5 + suruburi * 1 + nr_ore * 5 + ghidon * 50;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea ghidonului s-a folosit: un ghidon la pretul de 50 de euro\n";
			cout << "                          " << garnituri << " garnituri la pretul de 5 euro/garnitura\n";
			cout << "                          " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n ";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (roti)
		{
			nr_ore = roti;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = roti;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 5 * roti;
			tsuruburi = tsuruburi + suruburi;
			pret = garnituri * 5 + suruburi * 1 + nr_ore * 5 + roti * 100;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea rotilor s-au folosit : " << roti << " roti la pretul de 100 de euro/roata\n";
			cout << "                                         " << garnituri << " garnituri la pretul de 5 euro/garnitura\n";
			cout << "                                         " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		cout << "Motocicleta poate fi ridicata dupa : " << tnr_ore << " de ore\n\n";
		cout << "...........................................Factura..........................................\n";
		cout << "Pretul total este de : " << tpret << " de euro\n";
		if (tsuruburi)
			cout << "Suriburi : " << tsuruburi << " cu pretul de " << tsuruburi << " de euro\n";
		if (tgarnituri)
			cout << "Garnituri : " << tgarnituri << " cu pretul de " << tgarnituri * 5 << " de euro\n";
		if (roti)
			cout << "Roti : " << roti << " cu pretul de " << roti * 100 << " de euro\n";
		if (ghidon)
			cout << "Ghidon : " << ghidon << " cu pretul de " << ghidon * 50 << " de euro\n";
		if (bujii)
			cout << "Buji : " << bujii << " cu pretul de " << bujii * 10 << " de euro\n";
		if (ulei)
			cout << "O sticla de ulei cu pretul de " << ulei * 25 << " de euro\n";
		if (amortizoare)
			cout << "Amortizoare : " << amortizoare << " cu pretul de " << amortizoare * 25 << " de euro\n";
		if (arcuri)
			cout << "Arcuri : " << arcuri << " cu pretul de " << arcuri * 15 << " de euro\n";
		if (discuri)
			cout << "Discuri : " << discuri << " cu pretul de " << discuri * 25 << " de euro\n";
		if (placute_fata)
			cout << "Placute de frane pentru fata cu pretul de 30 de euro\n";
		if (placute_spate)
			cout << "Placute de frane pentru spate cu pretul de 30 de euro\n";
	}
	tpret = 0;
	tsuruburi = 0;
	tgarnituri = 0;
	tnr_ore = 0;
}

void motocicleta::meniu()
{
	int a;
	cout << "Alegeti cum vreti sa fie introduse datele:\n";
	cout << "1.Manual\n";
	cout << "2.Autodiagnoza\n";
	cin >> a;
	switch (a)
	{
	case 1:
		cin >> defectiuneCapitala;
		cin >> placute_fata;
		cin >> placute_spate;
		cin >> discuri;
		cin >> arcuri;
		cin >> amortizoare;
		cin >> ulei;
		cin >> bujii;
		cin >> ghidon;
		cin >> roti;
		break;
	case 2:
		srand(time(0));
		defectiuneCapitala = rand() % 2;
		placute_fata = rand() % 2;
		placute_spate = rand() % 2;
		discuri = rand() % 3;
		arcuri = rand() % 3;
		amortizoare = rand() % 3;
		ulei = rand() % 2;
		bujii = rand() % 3;
		ghidon = rand() % 2;
		roti = rand() % 3;
		break;
	}
}


class bicicleta :public vehicul
{
protected:
	bool ghidon, lant;
public:
	bicicleta();
	bicicleta(bicicleta &a);
	~bicicleta();
	bicicleta& operator=(bicicleta &a);
	void reparatie();
	void meniu();
};

bicicleta::bicicleta()
{
	defectiuneCapitala = 0;
	roti = 0;
	ghidon = 0;
	lant = 0;
}

bicicleta::bicicleta(bicicleta &a)
{
	defectiuneCapitala = a.defectiuneCapitala;
	roti = a.roti;
	ghidon = a.ghidon;
	lant = a.lant;
}

bicicleta::~bicicleta()
{
	defectiuneCapitala = 0;
	roti = 0;
	ghidon = 0;
	lant = 0;
}

bicicleta& bicicleta::operator=(bicicleta &a)
{
	defectiuneCapitala = a.defectiuneCapitala;
	roti = a.roti;
	ghidon = a.ghidon;
	lant = a.lant;
	return *this;
}

void bicicleta::reparatie()
{
	int nr_ore = 0, garnituri = 0, suruburi = 0, pret = 0, tpret = 0, tsuruburi = 0, tgarnituri = 0, tnr_ore = 0;
	if (defectiuneCapitala == 0)
	{
		cout << "Bicicleta nu mai poate fi reparata\n";
	}
	else
	{
		if (roti)
		{
			nr_ore = roti;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = roti;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 5 * roti;
			tsuruburi = tsuruburi + suruburi;
			pret = garnituri * 5 + suruburi * 1 + nr_ore * 5 + roti * 50;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea rotilor s-au folosit : " << roti << " roti la pretul de 50 de euro/roata\n";
			cout << "                                         " << garnituri << " garnituri la pretul de 5 euro/garnitura\n";
			cout << "                                         " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (ghidon)
		{
			nr_ore = 1;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = 2;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 8;
			tsuruburi = tsuruburi + suruburi;
			pret = garnituri * 5 + suruburi * 1 + nr_ore * 5 + ghidon * 30;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea ghidonului s-a folosit: un ghidon la pretul de 30 de euro\n";
			cout << "                          " << garnituri << " garnituri la pretul de 5 euro/garnitura\n";
			cout << "                          " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n ";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (lant)
		{
			nr_ore = 1;
			tnr_ore = tnr_ore + nr_ore;
			pret = nr_ore * 5 + lant * 20;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea lantului s-a folosit: un lant la pretul de 20 de euro\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n ";
			nr_ore = 0;
			pret = 0;
		}
		cout << "Bicicleta poate fi ridicata dupa : " << tnr_ore << " de ore\n\n";
		cout << "...........................................Factura..........................................\n";
		cout << "Pretul total este de : " << tpret << " de euro\n";
		if (tsuruburi)
		cout << "Suriburi : " << tsuruburi << " cu pretul de " << tsuruburi << " de euro\n";
		if (tgarnituri)
			cout << "Garnituri : " << tgarnituri << " cu pretul de " << tgarnituri * 5 << " de euro\n";
		if (roti)
			if (roti)
            cout << "Roti : " << roti << " cu pretul de " << roti * 50 << " de euro\n";
		if (ghidon)
			cout << "Ghidon : " << ghidon << " cu pretul de " << ghidon * 30 << " de euro\n";
		if (lant)
			cout << "Lant : " << lant << " cu pretul de " << lant * 20 << " de euro\n";
	}
	tpret = 0;
	tsuruburi = 0;
	tgarnituri = 0;
	tnr_ore = 0;
}

void bicicleta::meniu()
{
	cout << "Introduceti datele manual :\n";
	cin >> defectiuneCapitala;
	cin >> ghidon;
	cin >> roti;
	cin >> lant;
}


class reparatii
{
protected:
	bool vops, schimb;
public:
	reparatii();
	reparatii(bool a, bool b);
	reparatii(reparatii &a);
	~reparatii();
	bool vopsire();
	bool schimbare();
	reparatii& operator =(reparatii &a);
	friend ostream& operator<<(ostream &in, reparatii &a);
	friend istream& operator>>(istream &ou, reparatii &a);
};

istream& operator>>(istream& in, reparatii &a)
{
	in >> a.vops;
	in >> a.schimb;
	return in;
}

ostream& operator<<(ostream& ou, reparatii &a)
{
	ou << a.vops;
	ou << a.schimb;
	return ou;
}

reparatii::reparatii()
{
	vops = 0;
	schimb = 0;
}

reparatii::reparatii(bool a, bool b)
{
	vops = a;
	schimb = b;
}

reparatii::reparatii(reparatii &a)
{
	vops = a.vops;
	schimb = a.schimb;
}

reparatii::~reparatii()
{
	vops = 0;
	schimb = 0;
}

bool reparatii::vopsire()
{
	return vops;
}

bool reparatii::schimbare()
{
	return schimb;
}

reparatii& reparatii::operator=(reparatii &a)
{
	vops = a.vops;
	schimb = a.schimb;
	return *this;
}


class masina :public vehicul
{
protected:
	bool placute_fata, placute_spate, ulei, carburator, vechi;
	int arcuri, amortizoare, discuri, bujii;
	reparatii bara_fata, bara_spate, capota, plafon, portbagaj, usa, aripa;
public:
	masina();
	masina(masina &a);
	~masina();
	masina& operator=(masina &a);
	void reparatie();
	void meniu();
};

masina::masina() :vehicul()
{
	defectiuneCapitala = 0;
	roti = 0;
	placute_fata = 0;
	placute_spate = 0;
	ulei = 0;
	carburator = 0;
	vechi = 0;
	arcuri = 0;
	amortizoare = 0;
	discuri = 0;
	bujii = 0;
	reparatii r;
	bara_fata = r;
	bara_spate = r;
	capota = r;
	plafon = r;
	portbagaj = r;
	aripa = r;
	usa = r;
}
masina::masina(masina &a)
{
	defectiuneCapitala = a.defectiuneCapitala;
	roti = a.roti;
	placute_fata = a.placute_fata;
	placute_spate = a.placute_spate;
	ulei = a.ulei;
	carburator = a.carburator;
	vechi = a.vechi;
	arcuri = a.arcuri;
	amortizoare = a.amortizoare;
	discuri = a.discuri;
	bara_fata = a.bara_fata;
	bara_spate = a.bara_spate;
	capota = a.capota;
	plafon = a.plafon;
	portbagaj = a.portbagaj;
	aripa = a.aripa;
	usa = a.usa;
	bujii = a.bujii;
}
masina::~masina()
{
	defectiuneCapitala = false;
	roti = 0;
	defectiuneCapitala = false;
	roti = 0;
	reparatii r;
	bara_fata = r;
	bara_spate = r;
	capota = r;
	plafon = r;
	portbagaj = r;
	aripa = r;
	usa = r;
	placute_fata = false;
	placute_spate = false;
	ulei = false;
	carburator = false;
	vechi = false;
	arcuri = 0;
	amortizoare = 0;
	discuri = 0;
	bujii = 0;
}

masina& masina::operator=(masina &a)
{
	defectiuneCapitala = a.defectiuneCapitala;
	roti = a.roti;
	placute_fata = a.placute_fata;
	placute_spate = a.placute_spate;
	ulei = a.ulei;
	carburator = a.carburator;
	vechi = a.vechi;
	arcuri = a.arcuri;
	amortizoare = a.amortizoare;
	discuri = a.discuri;
	bara_fata = a.bara_fata;
	bara_spate = a.bara_spate;
	capota = a.capota;
	plafon = a.plafon;
	portbagaj = a.portbagaj;
	aripa = a.aripa;
	usa = a.usa;
	bujii = a.bujii;
	return (*this);
}
void masina::reparatie()
{
	int nr_ore = 0, garnituri = 0, suruburi = 0, pret = 0, tpret = 0, tsuruburi = 0, tgarnituri = 0, tnr_ore = 0;
	if (defectiuneCapitala == 0)
	{
		cout << "Masina nu mai poate fi reparata\n";
	}
	else
	{
		if (placute_fata)
		{
			nr_ore = 2;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = 2;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 4;
			tsuruburi = tsuruburi + suruburi;
			pret = garnituri * 5 + suruburi * 1 + nr_ore * 5 + placute_fata * 25;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea placutelor din fata s-au folosit : " << placute_fata << " placute de frana la pretul de 25 de euro\n";
			cout << "                                                     " << garnituri << " garnituri la pretul de 5 euro\n";
			cout << "                                                     " << suruburi << " suruburi la pretul de 1 euro\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (placute_spate)
		{
			nr_ore = 2;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = 2;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 4;
			tsuruburi = tsuruburi + suruburi;
			pret = garnituri * 5 + suruburi * 1 + nr_ore * 5 + placute_spate * 25;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea placutelor din spate s-au folosit : placute de frana la pretul de 25 de euro\n";
			cout << "                                                    " << garnituri << " garnituri la pretul de 5 euro\n";
			cout << "                                                    " << suruburi << " suruburi la pretul de 1 euro\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (discuri)
		{
			nr_ore = 3 * discuri;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = discuri;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 3 * discuri;
			tsuruburi = tsuruburi + suruburi;
			pret = garnituri * 5 + suruburi * 1 + nr_ore * 5 + discuri * 50;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea discurilor s-au folosit : " << discuri << " discuri la pretul de 50 de euro/disc\n";
			cout << "                                            " << garnituri << " garnituri la pretul de 5 euro/garnitura\n";
			cout << "                                            " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n ";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (arcuri)
		{
			nr_ore = 3 * arcuri;
			tnr_ore = tnr_ore + nr_ore;
			suruburi = 10 * arcuri;
			tsuruburi = tsuruburi + suruburi;
			pret = suruburi * 1 + nr_ore * 5 + arcuri * 70;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea arcurilor s-au folosit : " << arcuri << " arcuri la pretul de 70 de euro/arc\n";
			cout << "                                           " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore \n\n";
			nr_ore = 0;
			suruburi = 0;
			pret = 0;
		}
		if (amortizoare)
		{
			nr_ore = 5 * amortizoare;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = amortizoare;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 5 * amortizoare;
			tsuruburi = tsuruburi + suruburi;
			pret = pret + garnituri * 5 + suruburi * 1 + nr_ore * 5 + amortizoare * 50;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea amortizoarelor s-au folosit : " << amortizoare << " amortizoare la pretul de 50 de euro/amortizor\n";
			cout << "                                                " << garnituri << " garnituri la pretul de 5 euro/garnitura\n";
			cout << "                                                " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore \n\n";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (ulei)
		{
			nr_ore = 1;
			tnr_ore = tnr_ore + nr_ore;
			pret = 50 * ulei + nr_ore * 5;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea uleiului s-a folosit un ulei la pretul de 50 de euro\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro \n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << "de ore\n\n";
			nr_ore = 0;
			pret = 0;
		}
		if (bujii)
		{
			nr_ore = bujii;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = (garnituri + 1)*bujii;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 4 * bujii;
			tsuruburi = tsuruburi + suruburi;
			pret = pret + garnituri * 5 + suruburi * 1 + nr_ore * 5 + bujii * 10;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea bujiilor s-au folosit : " << bujii << " bujii la pretul de 10 de euro/bujii\n";
			cout << "                                          " << garnituri << " garnituri la pretul de 5 euro/garnitura\n";
			cout << "                                          " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore \n\n";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (carburator)
		{
			nr_ore = 5;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = 4;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 12;
			tsuruburi = tsuruburi + suruburi;
			pret = garnituri * 5 + suruburi * 1 + nr_ore * 5 + carburator * 200;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea carburator s-a folosit: un carburator la pretul de 200 de euro\n";
			cout << "                                         " << garnituri << " garnituri la pretul de 5 euro/garnitura\n";
			cout << "                                         " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n ";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (roti)
		{
			nr_ore = roti;
			tnr_ore = tnr_ore + nr_ore;
			garnituri = roti;
			tgarnituri = tgarnituri + garnituri;
			suruburi = 5 * roti;
			tsuruburi = tsuruburi + suruburi;
			pret = garnituri * 5 + suruburi * 1 + nr_ore * 5 + roti * 150;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea rotilor s-au folosit : " << roti << " roti la pretul de 150 de euro/roata\n";
			cout << "                                         " << garnituri << " garnituri la pretul de 5 euro/garnitura\n";
			cout << "                                         " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			garnituri = 0;
			suruburi = 0;
			pret = 0;
		}
		if (bara_fata.vopsire())
		{
			nr_ore = 5;
			tnr_ore = tnr_ore + nr_ore;
			pret = nr_ore * 5 + bara_fata.vopsire() * 150;
			tpret = tpret + pret;
			cout << "Pentru vopsirea barei fata s-a folosit vopsea avand  pretul de 150 de euro\n";
			cout << "Pretul pentru vopisire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			pret = 0;
		}
		if (bara_fata.schimbare())
		{
			nr_ore = 4;
			tnr_ore = tnr_ore + nr_ore;
			suruburi = 7 * bara_fata.schimbare();
			tsuruburi = tsuruburi + suruburi;
			pret = suruburi * 1 + nr_ore * 5 + bara_fata.schimbare() * 110;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea barei fata s-au folosit : " << bara_fata.schimbare() << " bara fata la pretul de 110 de euro/\n";
			cout << "                                            " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			suruburi = 0;
			pret = 0;
		}
		if (bara_spate.vopsire())
		{
			nr_ore = 5;
			tnr_ore = tnr_ore + nr_ore;
			pret = nr_ore * 5 + bara_spate.vopsire() * 150;
			tpret = tpret + pret;
			cout << "Pentru vopsirea barei spate s-a folosit vopsea avand  pretul de 150 de euro\n";
			cout << "Pretul pentru vopisire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			pret = 0;
		}
		if (bara_spate.schimbare())
		{
			nr_ore = 5;
			tnr_ore = tnr_ore + nr_ore;
			suruburi = 7 * bara_spate.schimbare();
			tsuruburi = tsuruburi + suruburi;
			pret = suruburi * 1 + nr_ore * 5 + bara_spate.schimbare() * 130;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea barei spate s-au folosit : " << bara_spate.schimbare() << " bara spate la pretul de 130 de euro\n";
			cout << "                                             " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			suruburi = 0;
			pret = 0;
		}
		if (capota.vopsire())
		{
			nr_ore = 3;
			tnr_ore = tnr_ore + nr_ore;
			pret = nr_ore * 5 + capota.vopsire() * 200;
			tpret = tpret + pret;
			cout << "Pentru vopsirea capotei s-a folosit vopsea avand  pretul de 200 de euro\n";
			cout << "Pretul pentru vopisire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			pret = 0;
		}
		if (capota.schimbare())
		{
			nr_ore = 6;
			tnr_ore = tnr_ore + nr_ore;
			suruburi = 4 * capota.schimbare();
			tsuruburi = tsuruburi + suruburi;
			pret = suruburi * 1 + nr_ore * 5 + capota.schimbare() * 250;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea capotei s-au folosit : " << capota.schimbare() << " capota la pretul de 250 de euro/roata\n";
			cout << "                                             " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			suruburi = 0;
			pret = 0;
		}
		if (plafon.vopsire())
		{
			nr_ore = 4;
			tnr_ore = tnr_ore + nr_ore;
			pret = nr_ore * 5 + plafon.vopsire() * 100;
			tpret = tpret + pret;
			cout << "Pentru vopsirea plafon s-a folosit vopsea avand  pretul de 100 de euro\n";
			cout << "Pretul pentru vopisire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			pret = 0;
		}
		if (plafon.schimbare())
		{
			nr_ore = 5;
			tnr_ore = tnr_ore + nr_ore;
			suruburi = 7 * plafon.schimbare();
			tsuruburi = tsuruburi + suruburi;
			pret = suruburi * 1 + nr_ore * 5 + plafon.schimbare() * 140;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea plafonului s-au folosit : " << plafon.schimbare() << " plafon la pretul de 140 de euro\n";
			cout << "                                             " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			suruburi = 0;
			pret = 0;
		}
		if (portbagaj.vopsire())
		{
			nr_ore = 5;
			tnr_ore = tnr_ore + nr_ore;
			pret = nr_ore * 5 + portbagaj.vopsire() * 100;
			tpret = tpret + pret;
			cout << "Pentru vopsirea portbagajului s-a folosit vopsea avand  pretul de 100 de euro\n";
			cout << "Pretul pentru vopisire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			pret = 0;
		}
		if (portbagaj.schimbare())
		{
			nr_ore = 4;
			tnr_ore = tnr_ore + nr_ore;
			suruburi = 7 * portbagaj.schimbare();
			tsuruburi = tsuruburi + suruburi;
			pret = suruburi * 1 + nr_ore * 5 + portbagaj.schimbare() * 240;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea portbagajului s-au folosit : " << portbagaj.schimbare() << " portbagaj la pretul de 240 de euro\n";
			cout << "                                             " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			suruburi = 0;
			pret = 0;
		}
		if (usa.schimbare())
		{
			nr_ore = 5;
			tnr_ore = tnr_ore + nr_ore;
			suruburi = 10 * usa.schimbare();
			tsuruburi = tsuruburi + suruburi;
			pret = suruburi * 1 + nr_ore * 5 + usa.schimbare() * 260;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea usii s-au folosit : " << usa.schimbare() << " usa la pretul de 260 de euro\n";
			cout << "                                             " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			suruburi = 0;
			pret = 0;
		}
		if (usa.vopsire())
		{
			nr_ore = 7;
			tnr_ore = tnr_ore + nr_ore;
			pret = nr_ore * 5 + usa.vopsire() * 130;
			tpret = tpret + pret;
			cout << "Pentru vopsirea usii s-a folosit vopsea avand  pretul de 130 de euro\n";
			cout << "Pretul pentru vopisire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			pret = 0;
		}
		if (aripa.vopsire())
		{
			nr_ore = 6;
			tnr_ore = tnr_ore + nr_ore;
			pret = nr_ore * 5 + aripa.vopsire() * 70;
			tpret = tpret + pret;
			cout << "Pentru vopsirea aripii s-a folosit vopsea avand  pretul de 70 de euro\n";
			cout << "Pretul pentru vopisire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			pret = 0;
		}
		if (aripa.schimbare())
		{
			nr_ore = 5;
			tnr_ore = tnr_ore + nr_ore;
			suruburi = 15 * aripa.schimbare();
			tsuruburi = tsuruburi + suruburi;
			pret = suruburi * 1 + nr_ore * 5 + aripa.schimbare() * 100;
			tpret = tpret + pret;
			cout << "Pentru inlocuirea aripii s-au folosit : " << usa.schimbare() << " usa la pretul de 100 de euro\n";
			cout << "                                             " << suruburi << " suruburi la pretul de 1 euro/surubul\n";
			cout << "Pretul pentru inlocuire este de : " << pret << " de euro\n";
			cout << "Numarul de ore petrecute de mecanic este de : " << nr_ore << " ore\n\n";
			nr_ore = 0;
			suruburi = 0;
			pret = 0;
		}

		cout << "Masina poate fi ridicata dupa : " << tnr_ore << " de ore\n\n";
		cout << "...........................................Factura..........................................\n";
		cout << "Pretul total este de : " << tpret << " de euro\n";
		if (tsuruburi)
			cout << "Suriburi : " << tsuruburi << " cu pretul de " << tsuruburi << " de euro\n";
		if (tgarnituri)
			cout << "Garnituri : " << tgarnituri << " cu pretul de " << tgarnituri * 5 << " de euro\n";
		if (roti)
			cout << "Roti : " << roti << " cu pretul de " << roti * 150 << " de euro\n";
		if (carburator)
			cout << "Carburator : " << carburator << " cu pretul de " << carburator * 200 << " de euro\n";
		if (bujii)
			cout << "Buji : " << bujii << " cu pretul de " << bujii * 10 << " de euro\n";
		if (ulei)
			cout << "O sticla de ulei cu pretul de " << ulei * 50 << " de euro\n";
		if (amortizoare)
			cout << "Amortizoare : " << amortizoare << " cu pretul de " << amortizoare * 50 << " de euro\n";
		if (arcuri)
			cout << "Arcuri : " << arcuri << " cu pretul de " << arcuri * 70 << " de euro\n";
		if (discuri)
			cout << "Discuri : " << discuri << " cu pretul de " << discuri * 50 << " de euro\n";
		if (placute_fata)
			cout << "Placute de frane pentru fata cu pretul de 25 de euro\n";
		if (placute_spate)
			cout << "Placute de frane pentru spate cu pretul de 25 de euro\n";
		if (portbagaj.schimbare())
			cout << "Portbagaj cu pretul de 240 de euro\n";
		if (portbagaj.vopsire())
			cout << "Vopsea pentru portbagaj cu pretul de 100 de euro\n";
		if (plafon.schimbare())
			cout << "Plafon cu pretul de 140 de euro\n";
		if (plafon.vopsire())
			cout << "Vopsea pentru plafon cu pretul de 100 de euro\n";
		if (capota.vopsire())
			cout << "Vopsea pentru capota cu pretul de 200 de euro\n";
		if (capota.schimbare())
			cout << "Capota cu pretul de 250 de euro\n";
		if (bara_fata.schimbare())
			cout << "Bara fata cu pretul de 110 de euro\n";
		if (bara_spate.schimbare())
			cout << "Bara spate cu pretul de 130 de euro\n";
		if (bara_fata.vopsire())
			cout << "Vopsea pentru bara fata cu pretul de 150 de euro\n";
		if (bara_spate.vopsire())
			cout << "Vopsea pentru bara spate cu pretul de 150 de euro\n";
		if (usa.vopsire())
			cout << "Vopsea pentru usi cu pretul de 130 de euro\n";
		if (usa.schimbare())
			cout << "Usa cu pretul de 260 de euro\n";
		if (aripa.schimbare())
			cout << "Aripa cu pretul de 100 de euro\n";
		if (aripa.vopsire())
			cout << "Vopsea pentru aripa cu pretul de 70 de euro\n";
	}
	tpret = 0;
	tsuruburi = 0;
	tgarnituri = 0;
	tnr_ore = 0;
}


void masina::meniu()
{
	int a;
	cout << "Alegeti cum vreti sa fie introduse datele:\n";
	cout << "1.Manual\n";
	cout << "2.Autodiagnoza\n";
	cin >> a;
	switch (a)
	{
	case 1:
		cin >> defectiuneCapitala;
		cin >> placute_fata;
		cin >> placute_spate;
		cin >> discuri;
		cin >> arcuri;
		cin >> amortizoare;
		cin >> ulei;
		cin >> bujii;
		cin >> carburator;
		cin >> roti;
		cin >> portbagaj;
		cin >> capota;
		cin >> plafon;
		cin >> bara_fata;
		cin >> bara_spate;
		cin >> usa;
		cin >> aripa;
		break;
	case 2:
		srand(time(0));
		defectiuneCapitala = rand() % 2;
		placute_fata = rand() % 2;
		placute_spate = rand() % 2;
		discuri = rand() % 5;
		arcuri = rand() % 5;
		amortizoare = rand() % 5;
		ulei = rand() % 2;
		bujii = rand() % 8;
		carburator = rand() % 2;
		roti = rand() % 4;
		reparatii b_fata(rand() % 2, rand() % 2), b_spate(rand() % 2, rand() % 2), plaf(rand() % 2, rand() % 2), cap(rand() % 2, rand() % 2), us(rand() % 2, rand() % 2);
		reparatii arip(rand() % 2, rand() % 2), port(rand() % 2, rand() % 2);
		bara_fata = b_fata;
		bara_spate = b_spate;
		plafon = plaf;
		capota = cap;
		usa = us;
		aripa = arip;
		portbagaj = port;
		break;
	}
}


int main()
{
	int b;
	motocicleta a;
	bicicleta c;
	masina d;
	cout << "Alegeti un tip de vehicul:\n";
	cout << "1.Motocicleta\n";
	cout << "2.Masina\n";
	cout << "3.Bicicleta\n";
	cin >> b;
	switch (b)
	{
	case 1:
		a.meniu();
		a.reparatie();
		break;
	case 2:
		d.meniu();
		d.reparatie();
		break;
	case 3:
		c.meniu();
		c.reparatie();
		break;
	}
	return 0;
}
