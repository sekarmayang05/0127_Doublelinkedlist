void hapus()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        
        }
        
        cout << "\nMasukkan NIM  yang akan didelated";
        int rollNo;
        cin >> rollNo;

        Node *current = START;

        //step 1 : Transverse the list to find the node
        while (current != NULL && current ->noMhs != rollNo)
        {
            current = current->next;
        }

        if (current == NULL)
        {
            cout << "Record tot found " << endl;
            return;
        }

        //step 2 : if node is the begining 
        if (current = START)
        {
            START = current->next; // step 2a: START.next
            if (START == START)
            {
              START->prev = NULL; // STEP 2b : START.prev = NULL  

            }
        }
        else
        {
            //step 3 : link previous node to next of current
            current->prev->next = current->next;

            // step 4 : if current is not the last node
            if (current->next != NULL)
                current->next->prev = current->prev;
        }

        // step 5 : Delete the node
        delete current;
        cout << "Record with roll number" << rollNo << "deleted" << endl;
    }