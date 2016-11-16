#include"nw.h"

int Algorithm::needleman_wunsch()
{
	//variable declarations
	//Meet-n-greet and input seq
	fprintf(stdout, "Welcome to the Needleman-Wunsch Local alignment tool.\n");
	fprintf(stderr, "NOTE => This version is incapable of printing the final matrix\n");
	fprintf(stdout, "Before beginning sequence alignment would you like additional background infromation about this algorithm?\nY or N:");
	std::cin<<manage.background;
	assert(manage.background != NULL);
	if(manage.background[0] == 'Y')
	{
		//Read a file with the history of nw
		std::cout<<"WORK!\n";
	}
	else if(manage.background[0] == 'N')
	{
		std::cout<<"WORK\n";
	}
	else
	{
		std::cerr<<"ERR0R => BACKGROUND SELECTION FAILED!\n";
	}
	//get attributes 
	get_attribute_seq();
	get_attribute_math();
	while(manage.debug == 1)
	{
		fprintf(stderr, "DEBUG => MATCH		-> %i\n", math.m);
		fprintf(stderr, "DEBUG => MISMATCH	-> %i\n", math.mm);
		fprintf(stderr, "DEBUG => SEQ 1		-> %i\n", seq.x);
		fprintf(stderr, "DEBUG => SEQ 2		-> %i\n", seq.y);
		fprintf(stderr, "DEBUG => GAP PEN	-> %i\n", seq.sig);
		fprintf(stderr, "DEBUG => Beginning step 2 ...\n");
	}
	math.sx=strlen(seq.x);
	math.sy=strlen(seq.y);
	assert(math.sy != 0);
	assert(math.sx != 0);
	while(manage.debug==1)
	{
		fprintf(stderr, "DEBUG => SX		-> %i\n", math.sx);
		fprintf(stderr, "DEBUG => SY		-> %i\n", math.sy);
		fprintf(stderr, "DEBUG => Beginning step 3 ...\n");
	}
	//math.computematrix(math, seq);
	fprintf(stdout, "Thanks for usig the Needleman-Wunsch local alignment algorithm!\nTerminating program now, Have a pleaseant day!\n");
	return 1;
}
