#include <vector>
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>


using namespace std;
#include "insertion.h"
#include "dataStruct.h"

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