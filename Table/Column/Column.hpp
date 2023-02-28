#pragma once
#include <list>

using std::list;

template <typename T>

class Column
{
  protected:
   list<T> column;
  public:
   list<T> getColumn(){return column;}
};
