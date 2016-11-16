#include"nw.h"

int Algorithm::needleman_wunsch()
{
	//variable declarations
	//Meet-n-greet and input seq
	fprintf(stdout, "Welcome to the Needleman-Wunsch Local alignment tool.\n");
	fprintf(stdout, "Before beginning sequence alignment would you like additional background infromation about this algorithm?\nY or N:");
	std::cin<<manage.background;
	assert(manage.background != NULL);
	if(manage.background[0] == 'Y')
	{
		fread
