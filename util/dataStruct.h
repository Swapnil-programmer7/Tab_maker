#pragma once
#include <string>
using namespace std;

class Note
{
public:
    string note;
    int duration;
    Note *next;

    Note();
    

    Note(string, int );
    

    Note(int );
    
};