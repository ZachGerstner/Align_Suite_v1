//includes
#include<iostream>
#include<cassert>
#include<cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;
//classes
class Management{
	public:
		int debug;
		char background[2];
		void set_debug_on();
		void set_debug_off();
};
class sequence{
	public:
		string *x;
		string *y;
		void get_attribute_seqx(string *x);
		void get_attribute_seqy(string *y);
};
class compute{
	public:
		int sx, sy, m, mm, sig;
		inline int compare(int, int, int);
		void get_attribute_math();
		//int computematrix(const compute
};
class Algorithm{
	public:
	int needleman_wunsch(Management);
};
//get_seqx();:wq
//vim
//get_seqy():
//comp();
//align();
