#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedlist
{
private:
    Node *START;
public:
    DoubleLinkedlist()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nEnter the roll number of the student:";
        cin >> nim;

        // step 1 : Alokasi memori untuk new node
        Node *newNode = new Node();

        // step 2 : Asign value to the fields 
        newNode ->noMhs = nim;

        // step 3 : Insert at begining if list is empty or nim is smallest
        if (START == NULL || nim <= START -> noMhs)
        {
            if (START != NULL && nim == START -> noMhs)
            {
                cout << "\nDuplicate number not allowed" << endl;
                return;
            }
            // step 4 : newNode.next = START
            newNode->next =START;

            //step 5 : START.prev = newNode (if START exixst)
            if (START != NULL)
                START -> prev = newNode;
            
            //step 6 : newNode.prev = NULL
            newNode->prev = NULL;

            //step 7 : START = newNode
            START = newNode;
            return;
        }

        //Insert in between node
        //Step 8 : Locate position for insertion
        Node *current = START;
        while (current->next != NULL && current->next->noMhs < nim)
        {
            
        }

    }    
    
};