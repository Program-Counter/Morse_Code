#include <stdio.h>
#include <math.h>


///PYTHAGOREAN TRIPLET

//Prototypes functions
void i_c(double []);  //Input and control function -> i_c
void p_t_r(double []);  //Pythagorean triple result function

int main(void)
{
	double n[3];
	char y;

	do{
		puts("         PYTHAGOREAN TRIPLET\n");
		i_c(n);

        p_t_r(n);

        //Repeat sequence entry
		printf("%s","\n\nTo repeat the sequence enter 'y': ");
        scanf("\n");
        scanf("%c", &y);
        puts("");
	}while(y == 'y');

	return 0;
}

//Input and control function -> i_c
void i_c(double arr[])
{
    _Bool controller;
    do{
        controller = 0;

        for(unsigned int i = 0; i < 3; i++){
            printf("N%d: ", i+1);
			
			//ends program execution if the input is a character
            if(!scanf("%lf", &arr[i]))
				return 0;
			
            if(0 == arr[i])
                controller = 1;
        }
	}while(1 == controller);
}

//Pythagorean triple result function
void p_t_r(double arr[])
{
    double hyp=0, cat=0;
    // Pythagorean triple function (decides which number is greater (hypotenuse) and which minor (catheti))
	for(unsigned int i = 0; i < 3; i++){
        for(unsigned int x = 0; x < 3; x++){
            if(arr[i] > arr[x]){
                if(arr[i] > hyp)
                    hyp = arr[i];
            }
        }
	}

	for(unsigned int i= 0; i < 3; i++){
        if(arr[i] != hyp)
            cat += pow(arr[i],2);
	}

    hyp = pow(hyp,2);
	if(hyp == cat)
		puts("\nIt's a Pythagorean triple !");
	else
	    puts("\nIt is not a Pythagorean triple !");
}
