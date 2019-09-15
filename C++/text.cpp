#include <conio.h>
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include "mobs.h"
#include "vari.h"
#include "text.h"

using namespace std;

//charecters counting, Valeu Luan.

int textCounter(char arrayT[]){
	int valorValido = 0;
    	for(int i=0; i<200; i++){
    	    if(arrayT[i] > 0){
    	        valorValido++;
    	    } else{
   	     	    return valorValido;
   	        	break;
    	    }
   	}
}

//Text printing

void Text(char x[]){
	int textVal;
	textVal=textCounter(x);
	for(int i =0; i<textVal; i++){
		cout<<x[i];
		Sleep(90);
	}
	cout<<endl;
	Sleep(500);
}

//Blinking Text

void textBlink(char text[]){
	for(int i=0;i<6;i++){
		cout<<text<<endl;
		Sleep(700);
		system("cls");
		Sleep(300);
	}
}
