
#include <iostream>
#include <queue>
#include "unistd.h"
#include "instruction.h"
using namespace std;


/*
The following parameters must be configurable:
Have the number of functional units configurable.
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

    int numAdders = 1; //Number of functional units
    int numMulti = 1;
    int execTime_Adder = 1; //Execution time of execution units
    int execTime_Multi = 2;
    int AddrReserve = 3; //Number of reservation stations for each execution unit resource
    int MultReserve = 2;
    bool staticBranchPred = True; //Static branch predictor (Always T or Always NT). True for T, False for NT
    cout << "Number of Adders?" << endl;
    cin >> numAdders;
    cout << "Number of Multipliers?" << endl;
    cin >> numMulti;
    cout << "Execution time for adders?" <<  endl;
    cin >> execTime_Adder;
    cout << "Execution time for multipliers?" << endl;
    cin >> execTime_Multi;
    cout << "Reservation stations for each adder?" << endl;
    cin >> AddrReserve;
    cout << "Reservation stations for each multiplier?" << endl;
    cin >> MultReserve;
    cout << "Static branch predictor? (1 for always T, 0 for always NT)" <<  endl;
    cin >> staticBranchPred;


    //output format

    /*
     * Instruction | Issue | Exec | Mem Access | Write CDB | Commit
     *
     */


    return 0;
}
