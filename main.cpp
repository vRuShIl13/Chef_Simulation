//This is the main class
//This will process the command line arguments
//Creates the suitable simulations and starts it

#include <iostream>
#include <cstring>
#include "string"
#include "ReadFile.h"


using namespace std;
#define Max 80



int main() {
    cout << "Hello,\nPlease Enter the Name of the File followed by the type of simulation to be used.\n"
            "For example: test.txt 2" << endl;
    char input[Max];  //user input
    char *token;      //convert the input to tokens
    char * name;
    int simulation = 0 ;

    cin.getline(input,Max);
    token = strtok(input, " ");

        while(token != nullptr){
            name = token;  //get the file name

            token = strtok(nullptr," ");
            if(token != nullptr) {
                simulation = stoi(token);
                if(simulation <= 3 ){
                    break;
                }else{
                    cout << "\nSorry,Please provide fileName and the correct Number of Simulation : 1,2 or 3\n";
                    cin.getline(input,Max);
                    token = strtok(input, " ");
                }
            }else{
                cout << "\nSorry, please use the format provided: Name of file followed by type of simulation\ni.e:Sample.txt 1\n";
                cin.getline(input,Max);
                token = strtok(input, " ");
            }
        }
    cout << name << endl;
    cout << simulation << endl;


    ReadFile *newReader = new ReadFile();

    newReader->read(name,simulation);



    return 0;

}
