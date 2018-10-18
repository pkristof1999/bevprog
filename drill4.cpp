#include "std_lib_facilities.h"

int main() 
{
	double  lk, ln, ertek, ossz, darab;
	ossz = 0;
	darab = 0;
	lk = numeric_limits<double>::max();
	ln = numeric_limits<double>::min();
	string i = "";
	vector<double> ertekek;
	bool elutasitas = false;

	while(true)
	{
		cout<<"Adjon meg egy értéket ('|' karakter megszakítja a ciklust): \n\n";
		cin>>i;
		if (i == "|")
		{
			cout<<"Ciklus megszakítva!\n\n";
			break;
		}
		ertek = stod(i);
		cout<<"Válasszon az alábbiak közül: 'cm, in, ft, m': \n\n";
		cin>>i;
		switch (i[0])
		{
			case 'c':
			ertek = ertek/100;
			break;
			case 'i':
			ertek = ertek*2.54/100;
			break;
			case 'f':
			ertek = ertek*12*2.54/100;
			break;
			case 'm':
			break;
		}
		if(i != "cm" && i != "in" && i != "ft" && i != "m")
		{
			cout<<"Olyan mértékegységet adott meg amely nem szerepel a felsoroltak között!\n\n";
			elutasitas = true;
		}
		if (elutasitas != true)
		{
			cout<<"A megadott érték (méterben): "<<ertek<<" m\n";
			if (lk > ertek)
			{
				lk = ertek;
			}
			if (ln < ertek)
			{
				ln = ertek;
			}
		cout<<"Az eddigi legkisebb érték (méterben): "<<lk<<" m\n";
		cout<<"Az eddigi legnagyobb érték (méterben): "<<ln<<" m\n\n";
		ossz+=ertek;
		darab++;
		ertekek.push_back(ertek);
		}
		elutasitas = false;
	}
	cout<<"Legkisebb szám (méterben): "<<lk<<" m\n";
	cout<<"Legnagyobb szám (méterben): "<<ln<<" m\n";
	cout<<"Helyesen megadott adatok darabszáma: "<<darab<<"\n";
	cout<<"Értékek összege (méterben): "<<ossz<<" m\n\n";
	sort(ertekek);
	for (int z = 0; z < ertekek.size(); z++)
	{
		cout<<"Megadott érték (méterben): "<<ertekek[z]<<" m\n";
	}
}
/* első while
while(i != "|"){
		cout<<"Adja meg az első számot! \n";
		cin>>i;
		if(i == "|")
			{
			cout<<"Ciklus megszakítva!\n";
			break;
			}
		ertek_1=stod(i);
		cout<<"Adja meg a második számot! \n";
		cin>>j;
		if(j == "|")
			{
			cout<<"Ciklus megszakítva!\n";
			break;
			}
		ertek_2=stod(j);
		if(ertek_1<ertek_2)
			{
			ksz = ertek_1;
			nsz = ertek_2;
			cout<<"A nagyobbik szám: "<<nsz<<", a kisebbik pedig: "<<ksz<<"\n";
			if((ksz+1.0/100)>nsz)
				cout<<"A számok közel egyenlőek!\n";
			}
		if(ertek_1>ertek_2)
			{
			nsz = ertek_1;
			ksz = ertek_2;
			cout<<"A nagyobbik szám: "<<nsz<<", a kisebbik pedig: "<<ksz<<"\n";
			if((ksz+1.0/100)>nsz)
				cout<<"A számok közel egyenlőek!\n";
			}
		if(ertek_1==ertek_2)
		cout<<"A számok megegyeznek.\n";
		}
*/
