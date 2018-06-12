#include"nw.h"
#include<stdio.h>
int main ()
{
	//Variable Declarations
	char debug[3];
	int repeat=0;
	int decision;
	double version=0.5; //UPDATE THIS EACH PUSH
	Management management;
	Algorithm algorithm;
	//Algorithm Selection 
	fprintf(stdout, "Welcome to the Alignment Algorithm Suite!\n");
	fprintf(stdout, "NOTE => VERSION %2lf IS FOR TEACING PURPOSES ONLY!\n", version);
	fprintf(stdout, "======================================================\n");
	//enable debug
	fprintf(stdout, "Would you like to enable Debugging output?\nY or N:");
	std::cin>>debug;
	assert(debug != NULL);
	if(debug[0] == 'Y' || debug[0] == 'y')
	{
		management.set_debug_on();
	}
	else if(debug[0] == 'N' || debug[0] == 'n')
	{
		management.set_debug_off();
	}
	else
	{
		std::cerr<<"ERROR => DEBUG ACTICATION DECISION NOT RECOGNIZED!\n";
		exit(EXIT_FAILURE);
	}
	while(repeat == 0)
	{
		//Discerning Algorithm selection input
		fprintf(stdout, "Please select an Algorithm by its number:\n 1. Needleman-Wunsch\n");
		std::cin>>decision;
		assert(decision != 0);
		if(decision == 1)
		{
			std::cerr<<"DEBUG-MAIN ==> WORKED!\n";
			algorithm.needleman_wunsch(management);
		}
		else if(decision != 1)
		{
			std::cerr<<"ERROR => INVALID INPUT FOR ALGORITHM SELECTION!\n";
			exit(EXIT_FAILURE);
		}
		else
		{
			std::cerr<<"ERROR => ALGORITHM SELECTION FAILED!\n";
			exit(EXIT_FAILURE);
		}
		//Discerning to exit or promt new algorithm selection.
		fprintf(stdout, "Would you like to run a different alignment algorithm?\nY or N:");
		std::cin>>debug;
		if(debug[0] == 'Y' || debug[0] == 'y')
		{
			repeat=0;
		}
		else if(debug[0] == 'N' || debug[0] == 'n')
		{
			repeat+=1;
		}
		else
		{
			std::cerr<<"ERROR => REPEAT ENTRY NOT RECOGNIZED!\n";
			exit(EXIT_FAILURE);
		}
	}
	fprintf(stdout, "Thank you for using Alignment_Suite! Good Luck on your studies!\n");
	fprintf(stdout, "Exiting the program now...\n");
	return 0;
}
void Management::set_debug_on()
{
	std::cerr<<"DEBUG-MANAGE ==> ON!\n";
	debug=1;
}

void Management::set_debug_off()
{
	std::cerr<<"DEBUG-MANAGE ==> OFF!\n";
	debug=0;
}
