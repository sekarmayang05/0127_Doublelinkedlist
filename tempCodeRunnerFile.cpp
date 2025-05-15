void traverse ()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }

        // step 1 : Mark first node as currentNode
        Node *currentNode = START;

        // STEP 2 : Repeat until currentNode == NULL 
        cout << "\nRecords in ascending order of roll number aare:\n";
        int i = 0;
        while (currentNode != NULL)
        {
            cout << i + 1 << ". " << currentNode->noMhs << " " << endl;

            // step 3 : Move to next node
            currentNode = currentNode->next;
            i++;
        }
    }