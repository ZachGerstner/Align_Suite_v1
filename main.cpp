#include"nw.h"
#include<stdio.h>
int main ()
{
	//Variables
	char deb[3];
	int alg;
	double version=1.0; //UPDATE THIS EACH PUSH
	//Meet-n-greet
	fprintf(stdout, "Welcome to the Alignment Algorithm Suite!\n");
	fprintf(stdout, "NOTE => VERSION %2lf IS FOR TEACING PURPOSES ONLY!\n");
	fprintf(stdout, "====================================================\n");
	//enable debug
	fprintf(stdout, "Would you like to enable Debugging output?\nY or N:");
	std::cin>>deb;
	assert(deb != NULL);
	if(deb[0] == 'Y')
	{
		manage.set_debug_on();
	}
	else if(deb[0] == 'N')
	{
		manage.set_debug_off();
	}
	else
	{
		std::cerr<<"ERROR => DEBUG ACTICATION DECISION NOT RECOGNIZED!\n";
		return -1;
	}
	//select Algorithm
	fprintf(stdout, "Please select an Algorithm by its number:\n 1. Needleman-Wunsch\n");
	std::cin>>alg;
	assert(alg != 0);
	if(alg == 1)
	{
		std::cerr<<"WORKED!\n";
		needleman_wunsch();
	}
	else if(alg != 1)
	{
		std::cerr<<"ERROR => INVALID INPUT FOR ALGORITHM SELECTION!\n";
		return -1;
	}
	else
	{
		std::cerr<<"ERROR => ALGORITHM SELECTION FAILED!\n";
		return -2;
	}
	return 0;
}

void Management::set_debug_on()
{
	std::cerr<<"WORKED!\n";
	manage.debug=1;
}

void Management::set_debug_off()
{
	std::cerr<<"WORKED!\n";
	manage.debug=0;
}
