#include<iostream>
#include<string>
class Note
{
public:
    string note;
    int duration;
    Note *next;

    Note()
    {
        this->note = "--";
        this->duration = 1;
        this->next = NULL;
    }

    Note(string n, int d)
    {
        this->note = n;
        this->duration = d;
        this->next = NULL;
    }

    Note(int d)
    {
        this->note = "--";
        this->duration = d;
        this->next = NULL;
    }
};

void insertA(Note **, string , int );
void insertE(Note **, string , int );
void insertC(Note **, string , int );
void insertG(Note **, string , int );