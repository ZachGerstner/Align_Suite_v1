#include"nw.h"
#include<iostream>

//Global instance of Sequence class
sequence seq_global;

int Algorithm::needleman_wunsch(Management manage)
{
	//Meet-in-greet and input seq
	fprintf(stdout, "Welcome to the Neeleman-Wunsch Local alignment tool.\n");
	fprintf(stderr, "NOTE => This version is incapable of printing the final matrix!!!\n");
	fprintf(stderr, "Before beginning sequence alignment would you like additional background information about this algorithm?\nY or N:");
	std::cin>>manage.background;
	assert(manage.background != NULL);
	if(manage.background[0] == 'Y' || manage.background[0] == 'y')
	{
		//Read NW.pdf
		std::cout<<"DEUBG-NW ==> COMING SOON!\nMOVING ON TO ALIGNMENT...\n";
	}
	else if(manage.background[0] == 'N' || manage.background[0] == 'n')
	{
		std::cout<<"DEBUG-NW ==> WORKED!!\nMOVING ON TO ALIGNMENT...\n";
	}
	else
	{
		std::cerr<<"ERROR => BACKGROUND SELECTION FAILED!\n";
	}
	//get sequences
	seq_global.get_attribute_seqx();
	if (manage.debug == 1)
	{
		std::cout << "DEBUG-NW => BEGINNING STEP 1...\n";
		cerr << "DEBUG-NW => SEQ1       -> " << &seq_global.x << "\n";
	}
	seq_global.get_attribute_seqy();
	if(manage.debug == 1)
        {
                cerr << "DEBUG-NW => SEQ 2         -> " << &seq_global.y << "\n";
                fprintf(stderr, "DEBUG-NW => BEGINNING STEP 2 ...\n"); 
        }
	//compute.sx=strlen(sequence.x);
	//compute.sy=strlen(sequence.y);
	//assert(compute.sx != 0);
	//assert(compute.sy != 0);
	if(manage.debug == 1)
        {
                fprintf(stderr, "DEBUG => BEGINNING STEP 3 ...\n");
        }
        //math.computematrix(math, seq);
        fprintf(stdout, "Thanks for usig the Needleman-Wunsch local alignment algorithm!\n");
        return 1;
}

