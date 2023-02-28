#pragma once
#include <list>
#include "./Column/Column.hpp"

template <typename T>

class Table : public Column<T>
{
  public:
   list<Column<T>> table;
 
};
