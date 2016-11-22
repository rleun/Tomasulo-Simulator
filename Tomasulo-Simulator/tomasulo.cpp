
#include <iostream>
#include <queue>
#include "unistd.h"
#include "instruction.h"
using namespace std;



/*
The following parameters must be configurable:

Execution time of execution units (ex. Adder unit takes 2 cycles, Mult/Div Unit takes 20 cycles, etc.)
Number of reservation stations for each execution unit resource
Static branch predictor (Always T or Always NT)
If taken, you can assume your branch will exit after 4 iterations
*/


int main(int argc, char *argv[])
{


    int opt;
  	string fileName = "instruction.txt";
  	while ((opt = getopt(argc,argv,"i:")) != EOF)
          switch(opt)
          {
              case 'i': fileName.assign(optarg); break;
              case '?': fprintf(stderr, "usuage is \n -i fileName : to run input file fileName \n -f : for enabling forwarding ");
              default: cout<<endl; abort();
          }
    

    return 0;
}
