#include <conio.h>
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include "vari.h"

using namespace std;

int decision(int x){
	int chose;
	switch(x){
		case 1:
			cin>>(chose);
			if(chose==1){
				
			}else if(chose==2){
				
			}else{
				cout<<"Você fica indeciso e desmaia."<<endl;
				cout<<"Depois de terminar a refeição o urso \nte ataca no peito"<<endl;
				system("pause");
				return -200;
			}
	}
}

