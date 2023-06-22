#include <vector>
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;

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

void insertA(Note **&riff, string note, int duration)
{

    Note *newNoteA = new Note(note, duration);
    riff[1]->next = newNoteA;
    riff[1] = newNoteA;

    Note *newNoteE = new Note();
    riff[3]->next = newNoteE;
    riff[3] = newNoteE;

    Note *newNoteC = new Note();
    riff[5]->next = newNoteC;
    riff[5] = newNoteC;

    Note *newNoteG = new Note();
    riff[7]->next = newNoteG;
    riff[7] = newNoteG;
}

void insertE(Note **&riff, string note, int duration)
{
    Note *newNoteA = new Note();
    riff[1]->next = newNoteA;
    riff[1] = newNoteA;

    Note *newNoteE = new Note(note, duration);
    riff[3]->next = newNoteE;
    riff[3] = newNoteE;

    Note *newNoteC = new Note();
    riff[5]->next = newNoteC;
    riff[5] = newNoteC;

    Note *newNoteG = new Note();
    riff[7]->next = newNoteG;
    riff[7] = newNoteG;
}

void insertC(Note **&riff, string note, int duration)
{
    Note *newNoteA = new Note();
    riff[1]->next = newNoteA;
    riff[1] = newNoteA;

    Note *newNoteE = new Note();
    riff[3]->next = newNoteE;
    riff[3] = newNoteE;

    Note *newNoteC = new Note(note, duration);
    riff[5]->next = newNoteC;
    riff[5] = newNoteC;

    Note *newNoteG = new Note();
    riff[7]->next = newNoteG;
    riff[7] = newNoteG;
}

void insertG(Note **&riff, string note, int duration)
{
    Note *newNoteA = new Note();
    riff[1]->next = newNoteA;
    riff[1] = newNoteA;

    Note *newNoteE = new Note();
    riff[3]->next = newNoteE;
    riff[3] = newNoteE;

    Note *newNoteC = new Note();
    riff[5]->next = newNoteC;
    riff[5] = newNoteC;

    Note *newNoteG = new Note(note, duration);
    riff[7]->next = newNoteG;
    riff[7] = newNoteG;
}