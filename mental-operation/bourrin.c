
#include <stdio.h>
#include <stdlib.h>
#include <time.h>   // pour rand
#define PRES() printf(" __                             __                                __       \n|  \\                           |  \\                              |  \\      \n| $$      __    __  __    __  _| $$_     ______   _______        | $$____  \n| $$     |  \\  |  \\|  \\  |  \\|   $$ \\   /      \\ |       \\       | $$    \\ \n| $$     | $$  | $$| $$  | $$ \\$$$$$$  |  $$$$$$\\| $$$$$$$\\      | $$$$$$$\\\n| $$     | $$  | $$| $$  | $$  | $$ __ | $$    $$| $$  | $$      | $$  | $$\n| $$_____| $$__/ $$| $$__/ $$  | $$|  \\| $$$$$$$$| $$  | $$      | $$__/ $$\n| $$     \\\\$$    $$ \\$$    $$   \\$$  $$ \\$$     \\| $$  | $$      | $$    $$\n \\$$$$$$$$ \\$$$$$$  _\\$$$$$$$    \\$$$$   \\$$$$$$$ \\$$   \\$$       \\$$$$$$$ \n                   |  \\__| $$                                              \n                    \\$$    $$                                              \n                     \\$$$$$$\n\n                                   Η ομιλία είναι η σκιά της δράσης\n\n");

int main(){
	PRES()
	srand ( time(NULL) );
	int res;
	int num;
	int mun;
	int proposition;
	int erreur=0;
	int i=0;
	while(i<50){
	num=rand() % 25;
	mun=rand() % 25;
	
	
	switch(operation()){
	
	case 0 :
			res=num+mun;
			printf("Combien font %d + %d\n", num, mun);
			scanf("%d", &proposition);
			
			if(proposition!=res){
			erreur++;
			printf("Dommage !\n");
			printf("%d + %d font %d\n",num, mun, res);
			}
		else{
			printf("Excellent !\n");
			}
	break;
	
	case 1 :
			res=num%mun;
			printf("Combien font %d modulo %d\n", num, mun);
			scanf("%d", &proposition);
			
			if(proposition!=res){
			erreur++;
			printf("Dommage !\n");
			printf("%d modulo %d font %d\n",num, mun, res);
			}
		else{
			printf("Excellent !\n");
			}
	break;
	
	case 2 :
			res=num*mun;
			printf("Combien font %d x %d\n", num, mun);
			scanf("%d", &proposition);
			
			if(proposition!=res){
			erreur++;
			printf("Dommage !\n");
			printf("%d fois %d font %d\n",num, mun, res);
			}
		else{
			printf("Excellent !\n");
			}
	break;
	
	case 3 :
			res=num-mun;
			printf("Combien font %d - %d\n", num, mun);
			scanf("%d", &proposition);
			
			if(proposition!=res){
			erreur++;
			printf("Dommage !\n");
			printf("%d - %d font %d\n",num, mun, res);
			}
		else{
			printf("Excellent !\n");
			}
	break;
	}
}
	printf("Bravo pour avoir terminé cette série !!!\n Vous avez fait %d erreur(s) sur 50 questions",erreur);
	
}
int operation(){
	int operateur;
	operateur=rand() % 4;
	return operateur;}
	

//systeme [] avec [X] ou [O] pour entre chaque calcul pour voir progression ... qd i=25 faire un \n avant la suite
//régler problème de la fonction opération dans le switch en warning ...
// expliquer au début de programme le modulo 
// erreur fin du code problème "Floating point exception return 135
