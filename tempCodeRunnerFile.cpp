void revtraverse()
    {
        if (START == NULL)
        {
            cout << "\nList is empty "<< endl;
            return;
        }

        // step 1 : Move to last node
        Node *currentNode = START;
        int i = 0;
        while (currentNode != NULL)
        {
            currentNode = currentNode->next;
            i++;
        }

        // step 2 : Traverse backward
        cout << "\nRecords in discending order of roll number are :\n";
        while (currentNode != NULL)
        {
            cout << i + 1 << ". " << currentNode->noMhs << " " << endl;

            // step 3 : Move to previous node
            currentNode = currentNode->prev;
            i--;
        }
    }
