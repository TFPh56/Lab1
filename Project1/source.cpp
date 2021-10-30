#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void zdanie1() { //Wypisz zdanie czytałem "Pana Tadeusza", tak, by tytuł książki był w cudzysłowiu
	cout << "czytałem 'Pana Tadeusza'" << endl << endl;
}

void zdanie2() { //Zadeklaruj zmienne do przechowania swojego: wieku, wzrostu (w m, np 1.85), symbolu grupy i wypisz zdanie.
	int age, gr = 0;
	float height = 0;

	cout << "podaj wiek: ";
	cin >> age;

	cout << "podaj wzrost: ";
	cin >> height;

	cout << "podaj symbolu grupy: ";
	cin >> gr;
	
	cout << "twój wiek - " << age << ". twój wzrost - " << height << ". twój symbol grupy - " << gr << endl << endl;
}

void zdanie3() { //Wczytaj swój wzrost, wiek i symbol klasy i wypisz zdanie
	zdanie2();
}

void zdanie4() { //Wczytaj bok kwadratu i oblicz pole, obwód i przekątną. Wypisz wyniki
	float bok, P, S, D = 0;

	cout << "prosze podać bok kwadratu: ";
	cin >> bok;
	
	P = bok * 4;
	S = bok * bok;
	D = bok * sqrt(2);

	cout << "pole - " << S << endl << "obwód - " << P << endl << "przekątna - " << D << endl << endl;
}

void zdanie5() { //Wczytaj 3 boki trójkąta i oblicz i wypisz obwód
	float bok1, bok2, bok3, P = 0;

	cout << "prosze podać 1 bok trójkąta: ";
	cin >> bok1;
	cout << "prosze podać 2 bok trójkąta: ";
	cin >> bok2;
	cout << "prosze podać 3 bok trójkąta: ";
	cin >> bok3;

	P = bok1 + bok2 + bok3;

	cout << "obwód trójkąta - " << P << endl << endl;
}

void zdanie6() { //Wczytaj 2 liczby całkowite i znajdź • ich sumę • różnicę (pierwsza  -  druga) • iloczyn • reszta z dzielenia całkowitego (pierwsza przez drugą) • wynik dzielenia całkowitego (pierwsza przez drugą) • wynik dzielenia rzeczywistego (pierwsza przez drugą) • kwadrat liczby pierwszej
	int p, d, sum, roz, ilo, res, kwa = 0;
	float wyn, rze = 0;

	cout << "prosze podać 1 liczbę: ";
	cin >> p;
	cout << "prosze podać 2 liczbę: ";
	cin >> d;

	sum = p + d;
	roz = p - d;
	ilo = p * d;
	res = p % d;
	wyn = p / d;
	float pf = p;
	float df = d;
	rze = pf / df;
	kwa = p * p;

	cout << "suma - " << sum << endl << "różnicę - " << roz << endl << "iloczyn - " << ilo << endl << "reszta z dzielenia całkowitego - " << res << endl << "wynik dzielenia całkowitego - " << wyn << endl << "wynik dzielenia rzeczywistego - " << rze << endl << "kwadrat liczby pierwszej - " << kwa << endl << endl;
}

void zdanie7() { //Wczytaj liczbę, zwiększ ją o 1 i wypisz ją, następnie zmniejsz o 1 i wypisz ją.
	float l = 0;
	cout << "prosze podać liczbę: ";
	cin >> l;
	float lw = 0;
	lw = l - 1;
	float lm = 0;
	lm = l + 1;
	cout << "zwiększona liczba - " << lw << endl << "zmniejszona liczba - " << lm << endl << endl;
}

void zdanie8() { //Sprawdź, czy jest dodatnia, czy nie jest dodatnia
	int l = 0;

	cout << "prosze podać liczbę: ";
	cin >> l;

	if (l > 0) {
		cout << "liczba jest dodatnia." << endl << endl;
	}
	else {
		cout << "liczba nie jest dodatnia." << endl << endl;
	}
}

void zdanie9() { //Sprawdź, czy jest parzysta
	int l = 0;

	cout << "prosze podać liczbę: ";
	cin >> l;

	if (l % 2 == 0) {
		cout << "liczba jest parzysta." << endl << endl;
	}
	else {
		cout << "liczba nie jest parzysta." << endl << endl;
	}
}

void zdanie10() { //Wczytaj drugą liczbę i sprawdź czy jest taka sama
	int p, d = 0;

	cout << "prosze podać 1 liczbę: ";
	cin >> p;
	cout << "prosze podać 2 liczbę: ";
	cin >> d;

	if (p == d) {
		cout << "liczba a jest taka sama jak b." << endl << endl;
	}
	else{
		cout << "liczba a nie jest taka sama jak b." << endl << endl;
	}
}

void zdanie11() { //Potraktuj pierwszą liczbę jako bok kwadratu, znajdź jego pole i obwód i wypisz wyniki. Pamiętaj, że bok kwadratu jest liczbą dodatanią
	float bok, P, S = 0;

	cout << "prosze podać liczbę: ";
	cin >> bok;
	
	if (bok > 0) {
		P = bok * 4;
		S = bok * bok;

		cout << "pole - " << S << endl << "obwód - " << P << endl << endl;
	}
	else{
		cout << "bok kwadratu nie może być mniejsza od zera" << endl << endl;
	}
}

void zdanie12() { //Znajdź liczbę odwrotną do wczytanej, pamiętaj, że nie można odwracać zera
	int l = 0;

	cout << "prosze podać liczbę: ";
	cin >> l;
	
	if (l!=0) {
		l *= -1;
		cout << "liczba odwrotną do podanej:" << l << endl << endl;
	}
	else{
		cout << "liczba jest zero" << endl << endl;
	}
}

void zdanie13() { //Sprawdź, czy wczytana liczba jest dodatnia, ujemna czyjest zerem - program wykonaj optymalnie
	int l = 0;

	cout << "prosze podać liczbę: ";
	cin >> l;

	if (l > 0) {
		cout << "liczba jest dodatnia." << endl << endl;
	}
	else if (l<0){
		cout << "liczba jest negatywna." << endl << endl;
	}
	else {
		cout << "liczba jest zero." << endl << endl;
	}
}

void zdanie14() { //Dla dwóch wczytanych liczb sprawdź, która z nich jest większa
	int p, d = 0;

	cout << "prosze podać 1 liczbę: ";
	cin >> p;
	cout << "prosze podać 2 liczbę: ";
	cin >> d;

	if (p == d) {
		cout << "liczba a jest taka sama jak b." << endl << endl;
	}
	else if (p > d) {
		cout << "liczba a jest większa od b." << endl << endl;
	}
	else {
		cout << "liczba b jest większa od a." << endl << endl;
	}
}

void zdanie15() { //Sprawdź, czy liczba należy do przedziału (-5, 5)
	int l = 0;

	cout << "prosze podać liczbę: ";
	cin >> l;

	if (-5 < l && l < 5) {
		cout << "liczba należy do przedziału (-5, 5)" << endl << endl;
	}
	else {
		cout << "liczba nie należy do przedziału (-5, 5)" << endl << endl;
	}
}

void zdanie16() { //Sprawdź, czy liczba należy do przedziału (-niesk, 5) suma < 10; +niesk)
	/*
	
	//Nie wiem dlaczego to nie działa

	int l = 0;

	cout << "prosze podać liczbę: ";
	cin >> l;

	if (l > 5 && l < 10) {
		cout << "liczba nie należy do przedziału (-niesk, 5) suma (10; +niesk)" << endl << endl;
	}
	else {
		cout << "liczba należy do przedziału (-niesk, 5) suma (10; +niesk)" << endl << endl;
	}
	*/

	int l = 0;

	cout << "prosze podać liczbę: ";
	cin >> l;

	if (l > 5) {
		if (l < 10) {
			cout << "liczba nie należy do przedziału (-niesk, 5) suma (10; +niesk)" << endl << endl;
		}
		else {
			cout << "liczba należy do przedziału (-niesk, 5) suma (10; +niesk)" << endl << endl;
		}
	}
	else {
		cout << "liczba należy do przedziału (-niesk, 5) suma (10; +niesk)" << endl << endl;
	}
}

void zdanie17() { //Napisz program, który wczytuje 3 liczby a, b,c. • jeżeli liczba a jest równa jeden sumuje liczby b oraz c i wypisuje wynik • jeżeli liczba a jest równa trzy, to wypisuje wartość liczby c na ekranie • jeżeli c jest liczbą parzystą, to wypisuje wartość liczby a naekranie • jeżeli c nie jest liczbą parzystą, to wypisuje wartość dzielenia liczby b przez a
	float a, b, c;
	float r1 = 0;
	float r2 = 0;
	int cI = 0;

	cout << "prosze podać a: ";
	cin >> a;
	cout << "prosze podać b: ";
	cin >> b;
	cout << "prosze podać c: ";
	cin >> c;

	cI = c;

	if (a == 1) {
		r1 = b + c;
	}
	else if (a == 3) {
		r1 = c;
	}

	if (cI % 2 == 0) {
		r2 = a;
	}
	else if (cI % 2 != 0) {
		r2 = b / a;
	}

	cout << r1 << endl << r2 << endl << endl;
}

void zdanie18() { //Napisz program, który zamienia cyfry na słowa. Użytkownik podaje cyfrę np. 3, a program wypisuje  zdanie: Podałeś liczbę trzy.

	//funkcja może konwertować liczby od 0 do 10000 na słowa

	int z, a, b, c, d = 0;
	string perR[10] = {"zero", "jeden", "dwa", "trzy", "cztery", "pięć", "sześć", "siedem", "osiem", "dziewięć"};
	string dwuR1 = "naście";
	string dwuR2[10] = {"", "dziesięć ", "dwadzieścia", "trzydzieści", "czterdzieści", "pięćdzieśiąt", "sześćdziesiąt", "siedemdziesiąt", "osiemdziesiąt", "dziewięćdziesiąt"};
	string trzR[10] = {"", "sto", "dwieście", "trzysta", "czterysta", "pięćset", "sześćset", "siedemset", "osiemset", "dziewięćset"};
	string cztR = "tysiąc";
	string wyp = "";

	cout << "prosze podać liczbę od 0 do 10,000: ";
	cin >> z;

	if (z < 0) { //sprawdzanie czy liczba jest większa niż 0
		cout << "ERROR: mogę wypisać liczbę tylko od 0 do 10,000" << endl << endl;
		zdanie18();
	}
	else if (z < 10000) { //sprawdzanie, czy liczba jest mniejsza niż 10000
								//dzielenie liczby na cyfry
		a = z % 10;					//na jednostki
		b = ((z / 10) % 10) % 10;	//na dziesiątki
		c = (z / 100) % 10;			//na seteki
		d = z / 1000;				//na tysięcy

		if (d == 0 && c == 0 && b == 0) { //wypisz jednostką
			wyp = perR[a];
		}
		else if (d == 0 && c == 0) { //wypisz dziesiątką
			if (a == 0) { //wypisz 10, 20, 30...
				wyp = dwuR2[b];
			}
			else if (b == 1){ //wypisz liczb od 11 do 19
				wyp = perR[a] + dwuR1;
			}
			else { //wtpisz wszystkie inne dziesiątką
				wyp = dwuR2[b] + " " + perR[a];
			}
		}
		else if (d == 0) { //wypisz seteką
			if (a == 0) { //wypisz liczb liczby bez jednostek
				wyp = trzR[c] + " " + dwuR2[b];
			}
			else if (b == 1) { //wypisz liczb od X11 do X19
				wyp = trzR[c] + " " + perR[a] + dwuR1;
			}
			else if (b == 0) { //wypisz liczb liczby bez dziesiątk
				wyp = trzR[c] + " " + perR[a];
			}
			else { //wypisz wszystkie inne seteką
				wyp = trzR[c] + " " + dwuR2[b] + " " + perR[a];
			}
		}
		else { //wypisz tysiąc
			if (d == 10) { //wypisz 10000
				wyp = "dziesięć tysiąc";
			}
			else if (a == 0) { //wypisz liczb liczby bez jednostek
				wyp = perR[d] + " " + cztR + " " + trzR[c] + " " + dwuR2[b];
			}
			else if (b == 1) { //wypisz liczb od XX11 do XX19
				wyp = perR[d] + " " + cztR + " " + trzR[c] + " " + perR[a] + dwuR1;
			}
			else if (b == 0) { //wypisz liczb liczby bez dziesiątk
				wyp = perR[d] + " " + cztR + " " + trzR[c] + " " + perR[a];
			}
			else if (c == 0) { //wypisz liczb liczby bez setek
				if (a == 0) { //... i bez jednostek
					wyp = perR[d] + " " + cztR + " " + dwuR2[b];
				}
				else if (b == 1) { //wypisz liczb od X011 do X019
					wyp = perR[d] + " " + cztR + " " + perR[a] + dwuR1;
				}
				else if (b == 0) { //... i bez dziesiątk
					wyp = perR[d] + " " + cztR + " " + perR[a];
				}
				else { 
					wyp = perR[d] + " " + cztR + " " + dwuR2[b] + " " + perR[a];
				}
			}
		}
	}
	else { //jeśli liczba jest większa niż 10000
		cout << "ERROR: mogę wypisać liczbę tylko od 0 do 10,000" << endl << endl;
		zdanie18();
	}

	cout << "Podałeś liczbę " << wyp << endl << endl;
}

void zdanie19() { //Napisz program, który oblicza wartości  funkcji . (użytkownik podaje argument funkcji  –  x, a program  oblicza wartość funkcji). Pamiętaj, że pod pierwiastkiem nie może być liczba ujemna. Funkcja sqrt  wzmaga włączen ia biblioteki cmath
	float x, y = 0;

	cout << "funkcja x^3-15x^2+36x" << endl << "prosze podać x: ";
	cin >> x;

	y = x * x * x - 15 * x * x + 36 * x;
		
	cout << "odpowiedź: " << y << endl << endl;
}

void zdanie20() { //Program wczytuje 3 liczby i • jeśli pierwsza nie jest równa 1 to wypisuje *, • jeśli druga jest równa 3 to wypisuje #, • jeśli trzecia jest mniejsza od 7 to wypisuje +++.

}

int main() {
	while (true) {

		int z = 0;

		cout << "Prosze wybrać zdanie." << endl;
		cin >> z;

		switch (z){
		case 1:
			zdanie1();
			break;
		case 2:
			zdanie2();
			break;
		case 3:
			zdanie3();
			break;
		case 4:
			zdanie4();
			break;
		case 5:
			zdanie5();
			break;
		case 6:
			zdanie6();
			break;
		case 7:
			zdanie7();
			break;
		case 8:
			zdanie8();
			break;
		case 9:
			zdanie9();
			break;
		case 10:
			zdanie10();
			break;
		case 11:
			zdanie11();
			break;
		case 12:
			zdanie12();
			break;
		case 13:
			zdanie13();
			break;
		case 14:
			zdanie14();
			break;
		case 15:
			zdanie15();
			break;
		case 16:
			zdanie16();
			break;
		case 17:
			zdanie17();
			break;
		case 18:
			zdanie18();
			break;
		case 19:
			zdanie19();
			break;
		case 20:
			zdanie20();
			break;
		default:
			break;
		}
	}
}
