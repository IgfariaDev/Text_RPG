#include <conio.h>
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include "mobs.h"

using namespace std;

struct entity{

	int hp,atk,def,dex,con,mag;
	string name;

};

int creat(){
	entity creature[5000];
	//Drabbit
	creature[0].name="Drabbit";
	creature[0].hp=100;
	creature[0].atk=40;
	creature[0].def=15;
	creature[0].dex=50;
	creature[0].con=50;
	creature[0].mag=10;
	//Dworlf
	creature[1].name="Dwolf";
	creature[1].hp=100;
	creature[1].atk=20;
	creature[1].def=35;
	creature[1].dex=30;
	creature[1].con=40;
	creature[1].mag=50;
	//Dbear
	creature[2].name="Dbear";
	creature[2].hp=250;
	creature[2].atk=60;
	creature[2].def=50;
	creature[2].dex=25;
	creature[2].con=80;
	creature[2].mag=75;
	
}
