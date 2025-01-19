#include <fstream>
#include <iostream>
using namespace std ;

int main (){
  ofstream outFile { "livre.txt"};
  if (!outFile){
    cerr << "impossible d'ecrrire dans le fichier";
    return -1;
  }
  outFile <<"Ma ligne 1\n";


  return 0;
}