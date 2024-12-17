#include "todo.h"

ToDo:ToDo() {}

bool ToDo::add(entry& an_entry) 
{
    my_list.push_back(an_entry);    
    return true;
}
