#include <vector>
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include "util/insertion.h"
#include "util/dataStruct.h"

using namespace std;


void display(Note **riff)
{
    Note* head = riff[0];
    Note* Ahead = riff[0];
    Note* Ehead = riff[2];
    Note* Chead = riff[4];
    Note* Ghead = riff[6];
    int cnt = 0;
    int i;

    while(head != NULL)
    {
        cnt = 0;
        cout << "A|";
        while (Ahead != NULL && cnt < 10 && head != NULL)
        {
            for(i=1;i<=Ahead->duration;i++)
            {
                cout << Ahead->note;
            }
            Ahead = Ahead->next;
            head = head->next;
            cnt++;
        }
        cout << endl;

        cnt = 0;
        cout << "E|";
        while(Ehead!=NULL && cnt<10)
        {
            for(i=1;i<=Ehead->duration;i++)
            {
                cout << Ehead->note;
            }
            Ehead = Ehead->next;
            cnt++;
        }
        cout << endl;

        cnt = 0;
        cout << "C|";
        while(Chead!=NULL && cnt<10)
        {
            for(i=1;i<=Chead->duration;i++)
            {
                cout << Chead->note;
            }
            Chead = Chead->next;
            cnt++;
        }
        cout << endl;

        cnt = 0;
        cout << "G|";
        while(Ghead!=NULL && cnt<10 )
        {
            for(i=1;i<=Ghead->duration;i++)
            {
                cout << Ghead->note;
            }
            Ghead = Ghead->next;
            cnt++;
        }
        cout << endl;

        cout << endl;

    }

}



void insertDuration(Note **&riff,int duration)
{
    Note *newNoteA = new Note(duration);
    riff[1]->next = newNoteA;
    riff[1] = newNoteA;

    Note *newNoteE = new Note(duration);
    riff[3]->next = newNoteE;
    riff[3] = newNoteE;

    Note *newNoteC = new Note(duration);
    riff[5]->next = newNoteC;
    riff[5] = newNoteC;

    Note *newNoteG = new Note(duration);
    riff[7]->next = newNoteG;
    riff[7] = newNoteG;
}



int main()
{
    int choice;
    Note **riff = new Note*[8];
    
    Note* A = new Note();
    Note* E = new Note();
    Note* C = new Note();
    Note* G = new Note();
    riff[0] = A; //head for A
    riff[1] = A; //tail for A
    riff[2] = E; //head for E
    riff[3] = E; //tail for E
    riff[4] = C; //head for C
    riff[5] = C; //tail for C
    riff[6] = G; //head for G
    riff[7] = G; //tail for G

    cout << "Welcome to the Tab Maker!" << endl;
    

    string note;
    int duration;
    bool flag = true;
    bool dflag = true;
    
    while(flag)
    {
        cout << "Please select an option:" << endl;
        cout << "1. Add a note at String A" << endl;
        cout << "2. Add a note at String E" << endl;
        cout << "3. Add a note at String C" << endl;
        cout << "4. Add a note at String G" << endl;
        cout << "5. Print the tab" << endl;
        cout << "6. Exit" << endl;
        cin >> choice;


        switch (choice)
        {
            case 1:
                cout << "Enter the note (range from 00 to 20): ";
                cin >> note;
                if( note > "20" || note < "00")
                {
                    cout << "Invalid note" << endl;
                    break;
                }
                // in such insertions the durations will be 1 only, to make it easier to work with
                duration = 1;
                insertA(riff, note, duration);
                dflag = true;
                break;

            case 2:
                cout << "Enter the note (range from 00 to 20): ";
                cin >> note;
                if( note > "20" || note < "00")
                {
                    cout << "Invalid note" << endl;
                    break;
                }
                // in such insertions the durations will be 1 only, to make it easier to work with
                duration = 1;
                insertE(riff, note, duration);
                dflag = true;
                break;

            case 3:
                cout << "Enter the note (range from 00 to 20): ";
                cin >> note;
                if( note > "20" || note < "00")
                {
                    cout << "Invalid note" << endl;
                    break;
                }
                // in such insertions the durations will be 1 only, to make it easier to work with
                duration = 1;
                insertC(riff, note, duration);
                dflag = true;
                break;

            case 4:
                cout << "Enter the note (range from 00 to 20): ";
                cin >> note;
                if( note > "20" || note < "00")
                {
                    cout << "Invalid note" << endl;
                    break;
                }
                // in such insertions the durations will be 1 only, to make it easier to work with
                duration = 1;
                insertG(riff, note, duration);
                dflag = true;
                break;

            case 5:
                system("cls");
                display(riff);
                break;

            case 6:
                flag = false;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }

        if(dflag)
        {
            cout << "enter the duration between the next note: ";
            cin >> duration;
            if(duration < 1)
            {
                cout << "Invalid duration" << endl;
                break;
            }
            insertDuration(riff, duration);
            dflag = false;
        }
        cout << endl;
            
    }

    
    return 0;
}
