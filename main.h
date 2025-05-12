//Includes
#pragma once
#include <iostream>
#include <cassert>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <fstream>
#include <ctime>
using namespace std;

//Define classes
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
		string get_attribute_seqx();
		string get_attribute_seqy();
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
	int needleman_wunsch(Management)
	{
		fprintf(stdout, "nw worked!\n");
	}

};

//Log function
std::ofstream log_file("debug.log", std::ios::app);

void log_entry(const std::string& message){
	std::time_t now = std::time(nullptr);
	std::tm now_tm;
	localtime_r(&now, &now_tm);
	char timestamp[26];
	strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", &now_tm);
	log_file << "[" << timestamp << "]" << message << std::endl;
}