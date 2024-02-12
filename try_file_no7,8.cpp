#include <iostream>
#include <string>
#include <fstream>


using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::exception;
using std::cerr;
using std::ifstream;
using std::ofstream;



int main(){
    try {
        ifstream my_txt("hehe.txt");

        if(!my_txt){
            cout << "Error: Unable to open the file." << endl;
            return 1;
        } else {

            ofstream my_txt("hehe.txt");
            my_txt << "test1" << endl;
            my_txt << "test2" << endl;
            my_txt << "test3" << endl;
            cout << "Words added successfully.";
        }
        my_txt.close();

    } catch (const exception&  e){
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}