#pragma once

template<class T, class A=std::allocator<T>>

class Table
{
 typedef A allocator_type;
 typedef typename A::value_type value_type;
 typedef value_type* pointer;
 typedef typename std::pointer_traits<pointer>::rebind<const value_type> const_pointer;
 typedef typename std::pointer_traits<pointer>::rebind<void> void_pointer;
 typedef typename std::pointer_traits<pointer>::rebind<const void> const_void_pointer;
 typedef std::size_t size_type;
 typedef std::ptrdiff_t diffrence_type;
 class Iterator{}; 
};

