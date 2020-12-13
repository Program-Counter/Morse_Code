#include <stdio.h>
#include <math.h>


///TERNA PITAGORICA
///Programma di Antonino Calabrese 4AI

//Prototipi funzione
void i_c(double []);  //Funzione di input e controllo --> i_c
void r_t_p(double []);  //Funzione risultato terna pitagorica

int main(void)
{
	double n[3];
	char y;

	do{
        puts("         TERNA PITAGORICA\n");
        i_c(n);

        r_t_p(n);

        printf("%s","\n\nPer ripetere la sequenza inserire 'y': ");
        scanf("\n");
        scanf("%c", &y);
        puts("");
	}while(y == 'y');

	return 0;
}

//Funzione di input e controllo --> i_c
void i_c(double vet[])
{
    _Bool g;
    do{
        g = 0;

        for(unsigned int i = 0; i < 3; i++){
            printf("N%d: ", i+1);
            scanf("%lf", &vet[i]);
            if(0 == vet[i]){
                g = 1;
            }
        }
	}while(1 == g);
}

//Funzione risultato terna pitagoric
void r_t_p(double vet[])
{
    double ipo=0, cat=0;
    //Funzione terna pitagorica (decide quale numero è maggiore (ipotenusa) e quali minori (cateti))
	for(unsigned int i = 0; i < 3; i++){
        for(unsigned int x = 0; x < 3; x++){
            if(vet[i] > vet[x]){
                if(vet[i] > ipo)
                    ipo = vet[i];
            }
        }
	}

	for(unsigned int i= 0; i < 3; i++){
        if(vet[i] != ipo)
            cat += pow(vet[i],2);
	}

    ipo = pow(ipo,2);
	if(ipo == cat)
		puts("\nE' una terna pitagorica !");
	else
	    puts("\nNon e' una terna pitagorica !");
}
