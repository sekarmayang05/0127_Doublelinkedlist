//Insert in between node
        //Step 8 : Locate position for insertion
        Node *current = START;
        while (current->next != NULL && current->next->noMhs < nim)
        {
            current = current->next;
        }

        if (current ->next != NULL && nim == current->next->noMhs)
        {
            cout << "\nDuplikat roll numbers not allowed" << endl;
            return;
        }