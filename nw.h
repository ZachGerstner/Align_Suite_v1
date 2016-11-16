//includes
#include<iostream>
#include<cassert>
#include<cstdlib>
#include<cstring>
//classes
class Management{
	int debug;
	public:
		void set_debug_on();
		void set_debug_off();
} manage;
class sequence{
	char x[100];
	char y[100];
	public:
		void get_attribute_seq();
} seq;
class compute{
	int sx, sy, m, mm, sig;
	public:
		int compare(int, int, int);
		void get_attribute_math();
		//int computematrix(const compute
} math;
class Algorithm{
	public:
	int needleman_wunsch();
} Alg;
//get_seqx();:wq
//vim
//get_seqy():
//comp();
//align();
