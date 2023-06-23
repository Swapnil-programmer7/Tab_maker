#include <string>
#include <stdlib.h>
#include "dataStruct.h"

using namespace std;


    Note :: Note()
    {
        this->note = "--";
        this->duration = 1;
        this->next = NULL;
    }

    Note :: Note(string n, int d)
    {
        this->note = n;
        this->duration = d;
        this->next = NULL;
    }

    Note :: Note(int d)
    {
        this->note = "--";
        this->duration = d;
        this->next = NULL;
    }
