#include"nw.h"
#include<iostream>
int Algorithm::needleman_wunsch(Management manage)
{
	//Variable declarations
	compute compute;
	sequence sequence;
	//Meet-in-greet and input seq
	fprintf(stdout, "Welcome to the Neeleman-Wunsch Local alignment tool.\n");
	fprintf(stderr, "NOTE => This version is incapable of printing the final matrix!!!\n");
	fprintf(stderr, "Before beginning sequence alignment would you like additional background information about this algorithm?\nY or N:");
	std::cin>>manage.background;
	assert(manage.background != NULL);
	if(manage.background[0] == 'Y')
	{
		//Read a file with the history of NW
		std::cout<<"DEUBG-NW ==> COMING SOON!\n";
	}
	else if(manage.background[0] == 'N')
	{
		std::cout<<"DEBUG-NW ==> WORKED!!\nMOVING ON TO ALIGNMENT...\n";
	}
	else
	{
		std::cerr<<"ERROR => BACKGROUND SELECTION FAILED!\n";
	}
//above works as of 2-9-18
	//get sequences
	sequence.get_attribute_seqx(sequence.x);
	sequence.get_attribute_seqy(sequence.y);
	compute.get_attribute_math();
	if(manage.debug == 1)
        {
                fprintf(stderr, "DEBUG-NW => BEGINNING STEP 1...\n");
		//fprintf(stderr, "DEBUG => MATCH         -> %i\n", compute().m);
                //fprintf(stderr, "DEBUG => MISMATCH      -> %i\n", compute().mm);
                cerr << "DEBUG-NW => SEQ 1         -> " << &sequence.x << "\n";
                cerr << "DEBUG-NW => SEQ 2         -> " << &sequence.y << "\n";
                //fprintf(stderr, "DEBUG => GAP PENALTY   -> %i\n", compute().sig);*/
                fprintf(stderr, "DEBUG-NW => BEGINNING STEP 2 ...\n"); 
        }
	//compute.sx=strlen(sequence.x);
	//compute.sy=strlen(sequence.y);
	//assert(compute.sx != 0);
	//assert(compute.sy != 0);
	if(manage.debug==1)
        {
               // fprintf(stderr, "DEBUG => SX            -> %i\n", compute.sx);
               // fprintf(stderr, "DEBUG => SY            -> %i\n", compute.sy);
                fprintf(stderr, "DEBUG => BEGINNING STEP 3 ...\n");
        }
        //math.computematrix(math, seq);
        fprintf(stdout, "Thanks for usig the Needleman-Wunsch local alignment algorithm!\nTerminating program now, Have a pleaseant day!\n");
        return 1;
}

