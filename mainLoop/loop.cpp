#include <iostream>
#include "loop.hpp"
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;

void mainLoop()
{
 enum Options choice=add_a_table;
 while(true)
 {
  cout<<"What do you want to do:"<<endl;
  cout<<"Add a table"<<endl;
  cout<<"Delete a tabel"<<endl;
  cout<<"insert into a table"<<endl;
  cout<<"Delete from a table"<<endl;
  cout<<"Search for a table"<<endl;
  cout<<"Show a table"<<endl;
  cout<<"Sort a table"<<endl;
  cout<<"Edit a table"<<endl;
  cout<<"Import"<<endl;//moze z sql??
  cout<<"Export"<<endl;
  if(choice==0)
  {
   //cout<<"it works"<<endl;//it really works
   return;
  }
 }

}
