#pragma once
#include <list>

using std::list;

template <typename T>

class Column
{
  protected:
   list<T> column;
  public:
   Column()
   {
    
   }
   list<T> getColumn(){return column;}
};
