#include <conio.h>
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include "mobs.h"
#include "vari.h"
#include "text.h"

using namespace std;

//imported funcions

int decision(int x);
int textCounter(char arrayT[]);
void Text(char x[]);
void textBlink(char text[]);

struct jogador{
		int vida;
		char nome[50];
		float dinheiro;
		int str;
		int def;
		int con;
		int dex; 
	};
	
	struct jogador player;

/*

	STR- atributo de força, util para atos de esforço momentaneo, ex: puxar algo pesado, e para combate.
	DEX- atributo de agilidade, util para furtividade ações dependentes de reflexos e uso de armas leves.
	DEF- stributo de defesa/resistencia, util para combate e para esforços prologados, ex: segurar pesos por grande quantidade de tempo
	CON- atributo de constituoção, util para atividade aerofísicas como cominhar longas distacias e resistencia de estamina e fome.
	
	Atributos especiais- Desbloqueados conforme os atributos do jogador são evoluídos.
		ex: Conhecimento, habilidades médicas ou culinárias e habilidades específicas como manusear armas de fogo

*/

//Aesthetic dot load

void dotLoad(){
	for(int i; i<=5;i++){
		cout<<"."<<endl;
		system("cls");
		cout<<".."<<endl;
		system("cls");
		cout<<"..."<<endl;
		system("cls");
	}
}

void Class(){
	int i;
	char decideClass[]={"Deseja escolher essa?"};
	cout<<"[1]Heroi"<<endl<<"[2]Assassino"<<endl<<"[3]Guerreiro"<<endl<<"[4]Espadachim"<<endl;cin>>i;
	system("cls");
	switch (i){
		//200pts
		
		//Heroi
		
		case 1:
			cout<<"STR = 75"<<endl<<"DEF = 30"<<endl<<"DEX = 40"<<endl<<"CON = 55"<<endl;
			Text(decideClass);
			cout<<"[1]Sim"<<endl<<"[2]Não"<<endl;cin>>i;
			if(i==1){
				player.str=75;
				player.def=30;
				player.dex=40;
				player.con=55;
			}else if(i==2){
				system("cls");
				Class();
			}else{
				cout<<"Valor Invalido."<<endl;
				system("pause");
				system("cls");
				Class();
			}
		break;
		
		//Assassino
		
		case 2:
			cout<<"STR = 45"<<endl<<"DEF = 25"<<endl<<"DEX = 80"<<endl<<"CON = 50"<<endl;
			Text(decideClass);
			cout<<"[1]Sim"<<endl<<"[2]Não"<<endl;cin>>i;
			if(i==1){
				player.str=45;
				player.def=25;
				player.dex=80;
				player.con=50;
			}else if(i==2){
				system("cls");
				Class();
			}else{
				cout<<"Valor Invalido."<<endl;
				system("pause");
				system("cls");
				Class();
			}
		break;
		
		//Guerreiro
		
		case 3:
			cout<<"STR =50 "<<endl<<"DEF = 70"<<endl<<"DEX =20 "<<endl<<"CON = 60"<<endl;
			Text(decideClass);
			cout<<"[1]Sim"<<endl<<"[2]Não"<<endl;cin>>i;
			if(i==1){
				player.str=50;
				player.def=70;
				player.dex=20;
				player.con=60;
			}else if(i==2){
				system("cls");
				Class();
			}else{
				cout<<"Valor Invalido."<<endl;
				system("pause");
				system("cls");
				Class();
			}
		break;
		
		//Espadachim
		
		case 4:
			cout<<"STR = 55"<<endl<<"DEF = 25"<<endl<<"DEX = 70"<<endl<<"CON = 60"<<endl;
			Text(decideClass);
			cout<<"[1]Sim"<<endl<<"[2]Não"<<endl;cin>>i;
			if(i==1){
				player.str=55;
				player.def=25;
				player.dex=70;
				player.con=60;
			}else if(i==2){
				system("cls");
				Class();
			}else{
				cout<<"Valor Invalido."<<endl;
				system("pause");
				system("cls");
				Class();
			}
		break;
		
		//contra evento.
		
		default:
			cout<<"Valor Invalido."<<endl;
			system("pause");
			system("cls");
			Class();
		break;			
	}
}
int lifeTest(int life,int damage){
	system("cls");
	life+=damage;
	cout<<damage<<" hp"<<endl;
	system("pause");
	system("cls");
	if(life<0){
		char end[]={"============\n| Gameover |\n============"};
		textBlink(end);
		exit(0);
	}
}

main(){

	int time;
	int result;
	setlocale(LC_ALL, "Portuguese");
	//game begining
	
	dotLoad();
	char text[]={"Voce acaba de acordar e esta tudo escuro."};
	char text1[]={"Voce sente algo molhado em sua mao."};
	char text2[]={"Em sua bolsa tem um isqueiro e uma faca embainhada."};
	Text(text);Text(text1);Text(text2);
	Sleep(4000);
	system("cls");
	
	//character set
	
	player.vida=100;
	char text3[]={"Tente lembrar seu nome"};
	Text(text3);
	Sleep(1000);
	system("cls");
	cout<<"nome: ";cin>> player.nome;
	system("cls");
	char text4[]={"Qual a sua classe?" };
	Text(text4);

	Class();
	system("cls");
	
	//history telling.
	
	char textB[]={"Voce acende seu isqueiro, \nVoce ve uma caverna umida e muitos caminhos. \nVoce avista uma criatura parecida com um coelho em sua frente. \nAo chegar perto ele olha para voce e monstra sua face,"};
	char textB1[]={"Ele possui 4 olhos vermelhos e presas em forma de V. \nAo se afastar ele pula em sua direcao e a criatura pisa no ar. \nCom seu apoio invisivel o monstro pula por cima de voce. \nAtacando um lobo atras de voce e o matando com um golpe na garganta."};
	char textB2[]={"Apos a cena voce tenta correr mas encrontra um monstro grande. \nTendo a aparencia de um urso com 4 metros, ele te ignora e \nCom um ataque magico ele dilacera o lobo e o coelho de uma vez."};
	
	//history text aplication
	
	Text(textB);
	Sleep(2000);
	system("cls");
	Text(textB1);
	Sleep(2000);
	system("cls");
	Text(textB2);
	Sleep(2000);
	system("cls");

	//Essential Skill Achieve

	char skillD[]={"========================= \n|  Alquimia Descoberta  | \n========================= \n"};
	textBlink(skillD);
	system("pause");
	
	time=1;
	char chose[]={"O monstro está comendo."};
	cout <<"\n[1] Correr"<<endl<<"[2] Se esconder"<<endl;
	result=decision(time);
	lifeTest(player.vida,result);
}
