#include "main.h"

int main (){
    //Var and Class declarations
    char debug[3], x[3];
    int repeat = 0;
    int decision = 0;
    Management management;
    Algorithm algorithm;

    //Welcome and debug activation
    fprintf(stdout, "Welcome to the Alignment Algorithm Teaching Suite!\n");
    fprintf(stdout, "NOTE => This is for teaching purposes only!\n");
    fprintf(stdout, "=======================================================\n");
    //Enable debug output
    fprintf(stdout, "Would you like to enable Debug information? Please enter y or n\n");
    std::cin>>debug;
    assert(debug!=NULL);
    if(debug[0] == 'y' || debug[0] == 'Y')
    {
        log_entry("Debugging output enabled!");
        management.set_deug_on();
    }
    else if(debug[0] == 'n' || debug[0] == 'N')
    {
        log_entry("Debugging output disabled!");
        management.set_debug_off();
    }
    else
    {
        log_entry("Inappropriate debugging selection made. Exiting with error!");
        std:cerr << "ERROR : DEBUGGING OPTION NOT RECOGNIZED!\n";
        exit(EXIT_FAILURE);
    }
    //Algorithm selection
    while(repeat==0)
    {
        fprintf(stdout, "Please select an Algorithm by its number:\n 1. Needleman-Wunsch\n");
		std::cin>>decision;
		assert(decision != 0);
		if(decision == 1)
		{
            log_entry("NW algorithm successfully selected!");
			if(debug[0] == 'y' || debug[0] == 'Y')
            {
                std::cerr<<"DEBUG-MAIN ==> WORKED!\n";
            }
			    algorithm.needleman_wunsch(management);
        }
		else if(decision != 1)
		{
            log_entry("Invalid algorthm selection! Exiting with error!");
			std::cerr<<"ERROR => INVALID INPUT FOR ALGORITHM SELECTION!\n";
			exit(EXIT_FAILURE);
		}
		else
		{
            log_entry("Something went wrong with the algorithm selection! Exiting with error!");
			std::cerr<<"ERROR => ALGORITHM SELECTION FAILED!\n";
			exit(EXIT_FAILURE);
		}
        //Discerning to exit or promt new algorithm selection.
		fprintf(stdout, "Would you like to run a different alignment algorithm?\nY or N:");
		std::cin>>x;
		if(x[0] == 'Y' || x[0] == 'y')
		{
            log_entry("Successfully selected to rerun the program!");
            if(debug[0] == 'y' || debug[0] == 'Y'){
                fprintf(stdout, "DEBUG-MAIN : Choose to rerun program!\n");
            }
			repeat=0;
		}
		else if(x[0] == 'N' || x[0] == 'n')
		{
            log_entry("Successfully selected to stop the program!");
            if(debug[0] == 'y' || debug[0] == 'Y')
            {
                fprintf(stdout, "DEBUG-MAIN : Choose to close program!\n");
            }
			repeat+=1;
		}
		else
		{
            log_entry("Something went wrong with deciding to rerun the program! In Main.cpp");
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