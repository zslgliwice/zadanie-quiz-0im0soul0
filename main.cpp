#include<iostream>
#include<windows.h>
#include<cstdlib>

using namespace std;

string imie;
string odp;

int main()
{
    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt, 13);
    cout << "\aPodaj imie: ";
    cin >> imie;
    int pkt = 0;

    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "2";
    Sleep(1000);
    system("cls");
    cout<< "1";
    Sleep(1000);
    system("cls");
	cout<< "start!";
	Sleep(1000);
	system("cls");

    cout <<"Witaj "<< imie << " w quizie z Animal Crossing New Horizons\n";

	//pytanie 1
    cout << "Kto na poczatku gry wita cie i zyczy ci milego dnia na twojej wyspie???"<<endl;
    cout << "a) Isabella"<<endl;
    cout << "b) Tom Nook"<<endl;
    cout << "c) Timmy"<<endl;
    cout << "A wiec twoja odpowiedz tooo???";
    cin >> odp;

	system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "2";
    Sleep(1000);
    system("cls");
    cout<< "1";
    Sleep(1000);
    system("cls");

    if(odp == "a")
    {
        cout << "Dobrze :3";
        pkt++;
    }
    else
    {
        cout << "zle! Poprawna odpowiedz to a!";

    }
    Sleep(3000);
    system("cls");


	//pytanie 2
	cout << "Gdzie mozesz napic sie kawusi?"<<endl;
    cout << "a) w kawiarni Toma Nook'a"<<endl;
    cout << "b) w kawiarni Blathers'a"<<endl;
    cout << "c) w kawiarni Brewster'a"<<endl;
    cout << "Twoja odpowiedz tooo?";
    cin >> odp;

	system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "2";
    Sleep(1000);
    system("cls");
    cout<< "1";
    Sleep(1000);
    system("cls");

    if(odp == "c")
    {
        cout << "Dobrze :3";
        pkt++;
    }
    else
    {
        cout << "zle! Poprawna odpowiedz to c!";

    }
    Sleep(3000);
    system("cls");

	//pytanie 3
	cout << "Ile mieszkancow mozesz miec maksymalnie na wyspie?"<<endl;
    cout << "a) 10"<<endl;
    cout << "b) 11"<<endl;
    cout << "c) 12"<<endl;
    cout << "Twoja odpowiedz tooo?";
    cin >> odp;

	system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "2";
    Sleep(1000);
    system("cls");
    cout<< "1";
    Sleep(1000);
    system("cls");

    if(odp == "a")
    {
        cout << "Dobrze :3";
        pkt++;
    }
    else
    {
        cout << "zle poprawna odpowiedz to a!";

    }
    Sleep(3000);
    system("cls");

	//pytanie 4
	cout << "Kim jest K.K."<<endl;
    cout << "a) rybakiem"<<endl;
    cout << "b) piosenkarzem"<<endl;
    cout << "c) wrozbita"<<endl;
    cout << "Twoja odpowiedz tooo?";
    cin >> odp;

	system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "2";
    Sleep(1000);
    system("cls");
    cout<< "1";
    Sleep(1000);
    system("cls");

    if(odp == "b")
    {
        cout << "Dobrze :3";
        pkt++;
    }
    else
    {
        cout << "zle! Poprawna odpowiedz to b!";

    }
    Sleep(3000);
    system("cls");

	//pytanie 5
	cout << "Czy w grze mozna posadzic drzewo, ktorego owoce to pieniadze?"<<endl;
    cout << "a) Nie"<<endl;
    cout << "b) Tak"<<endl;
    cout << "c) Tak, ale tylko kiedy jest lato"<<endl;
    cout << "Twoja odpowiedz tooo?";
    cin >> odp;

	system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "2";
    Sleep(1000);
    system("cls");
    cout<< "1";
    Sleep(1000);
    system("cls");

    if(odp == "b")
    {
        cout << "Dobrze :3";
        pkt++;
    }
    else
    {
        cout << "zle! Poprawna odpowiedz to b!";

    }
    Sleep(3000);
    system("cls");
	if (pkt == 5)
	{
    	cout <<"gratulacje zdobyles/as/os " << pkt <<"/5 punktow jestes prawdziwym fanem Animal Crossing New Horizons!";
	}
	if (pkt == 4)
	{
    	cout <<"gratulacje zdobyles/as/os " << pkt <<"/5 punktow zabraklo ci 1 punktu do perfekcji!";
	}
	if (pkt == 3)
	{
    	cout <<"zdobyles/as/os " << pkt <<"/5 punktow niezle!";
	}
	if (pkt == 2)
	{
    	cout <<"zdobyles/as/os " << pkt <<"/5 punktow ";
	}
	if (pkt == 1)
	{
    	cout <<"zdobyles/as/os " << pkt <<"/5 punktow, slabo! ";
	}
	if (pkt == 0)
	{
    	cout <<"zdobyles/as/os " << pkt <<"/5 punktow :'( ";
	}

    return 0;
}
