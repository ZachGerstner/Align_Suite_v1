#include"nw.h"
using namespace std;
void sequence::get_attribute_seqx(string *x)
{
	fprintf(stderr, "WORKED-SEQ\n");
	int dec;
	string seq1;
	x=&seq1;
	fprintf(stdout, "How would you like to enter the sequence of interest?\n1. Manual Entry\n2. Upload file\n");
	std::cin>>dec;
	assert(dec != 0);
	if(dec == 1)
	{
		fprintf(stdout, "Please enter sequence 1:\n");
		cin.ignore(1,' ');
		getline (cin,seq1);
		assert(x != NULL);
		cerr << "DEBUG-ATTR ==>  X    :" << x << "\n";
		cerr << "DEBUG-ATTR ==>  SEQ1 :" << seq1 << "\n";
	}
	else if(dec == 2)
	{
		fprintf(stderr, "COMMING SOON!!!\n");
	}
	else
	{
		fprintf(stderr, "ERROR ==> INVALID INPUT IN SEQUENCE INPUT!\n");
	}
}

void sequence::get_attribute_seqy(string *y)
{
	fprintf(stderr, "WORKED-SEQY\n");
	int dec;
	string seq2;
	y=&seq2;
	fprintf(stdout, "How would you like to enter the sequence of interest?\n1. Manual Entry\n2. Upload file\n");
	std::cin >> dec;
	assert(dec != 0);
	if(dec == 1)
	{
		fprintf(stdout, "Please enter sequence 2:\n");
		cin.ignore(1,' ');
		getline (cin,seq2);
		assert(y != NULL);
		cerr << "DEBUG-ATTR ==>  Y    :" << y << "\n";
		cerr << "DEBUG-ATTR ==>  SEQ2 :" << seq2 << "\n";
	}
	else if(dec == 2)
	{
		fprintf(stderr, "COMMING SOON!!!\n");
	}
	else
	{
		fprintf(stderr, "ERROR ==> INVALID INPUT IN SEQUENCE INPUT!\n");
	}

}

void compute::get_attribute_math()
{
	fprintf(stderr, "WORKED!-MATH\n");
}
