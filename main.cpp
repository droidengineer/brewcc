#include <iostream>
#include <boost/shared_ptr.hpp>
#include <boost/container/vector.hpp>
#include <getopt.h>
#include <string>

#define VERSION 1.0

void banner();
void usage();

int main(int argc, char * argv[])
{
	banner();

	int c;
	bool bInteractive = false;
	bool bDebug = false;
	std::string ofile, ifile;
	bool bToAsm = false;

	opterr = 0;

	while ((c = getopt(argc,argv, "dhaif:o:")) != -1)
		switch(c)
		{
		case 'd':
			bDebug = true;
			break;
		case 'h':
			usage();
			return 0;
		case 'a':
			bToAsm = true;
			break;
		case 'i':
			bInteractive = true;
			break;
		case 'f':
			ifile = optarg;
			break;
		case 'o':
			ofile = optarg;
			break;

		default:
			break;
		}

	if (ifile == "" ||ofile == "") {
		usage();
		return 0;
	}

	if (bInteractive) {

	}




	return 0;
}

void usage()
{

}

void banner()
{
	std::cout << "bcc - The Brew Compiler" << std::endl;
	std::cout << "version " << VERSION << std::endl;
	std::cout << "(c) 2013 Open Design Strategies, LLC" << std::endl;
	std::cout << std::endl;
}
