#include"nw.h"
using namespace std;

extern sequence seq_global;

string sequence::get_attribute_seqx()
{
	int input=0;
	string seq1;
	//x=&seq1;
	fprintf(stdout, "How would you like to enter the sequence of interest?\n1. Manual Entry\n2. Upload file\n");
	std::cin >> input;
	assert(input != 0);
	if(input == 1)
	{
		fprintf(stdout, "Please enter sequence 1:\n");
		cin.ignore(1,' ');
		getline (cin,seq1);
		assert(seq1 != NULL);
		//cerr << "DEBUG-ATTR ==>  X    :" << x << "\n";
		cerr << "DEBUG-ATTR => SEQ1 :" << seq1 << "\n";
	}
	else if(input == 2)
	{
		//read in file
		fprintf(stderr, "COMMING SOON!!!\n");
	}
	else
	{
		fprintf(stderr, "ERROR ==> INVALID INPUT IN SEQUENCE INPUT!\n");
		exit(EXIT_FAILURE);
	}
	seq_global.x = seq1;
	cerr << "DEBUG-ATTR => SEQ_GLB_X :" << seq_global.x << "\n";
	return seq_global.x;
}

string sequence::get_attribute_seqy()
{
	int input=0;
	string seq2;
	fprintf(stdout, "How would you like to enter the sequence of interest?\n1. Manual Entry\n2. Upload file\n");
	std::cin >> input;
	assert(input != 0);
	if(input == 1)
	{
		fprintf(stdout, "Please enter sequence 2:\n");
		cin.ignore(1,' ');
		getline (cin,seq2);
		assert(seq2 != NULL);
	//	cerr << "DEBUG-ATTR ==>  Y    :" << y << "\n";
		cerr << "DEBUG-ATTR ==>  SEQ2 :" << seq2 << "\n";
	}
	else if(input == 2)
	{
		fprintf(stderr, "COMMING SOON!!!\n");
	}
	else
	{
		fprintf(stderr, "ERROR ==> INVALID INPUT IN SEQUENCE INPUT!\n");
		exit(EXIT_FAILURE);
	}
	seq_global.y = seq2;i
	cerr << "DEBUG-ATTR => SEQ_GLB_Y :" << seq_global.y << "\n";
	return seq_global.y;
}

void compute::get_attribute_math()
{
	fprintf(stderr, "WORKED!-MATH\n");
	//write this shit
}
