 void searchData()
    {

 if (START == NULL)
        {
            cout << "\nList is empty "<< endl;
            return;
        }

        int rollNo;
        cout << "\nEnter thr roll number to serch: ";
        cin >> rollNo;

        Node *current = START;

        //step 1: Traverse to find matching roll number
        while (current != NULL && current->noMhs != rollNo)
            current = current->next;
        
        // step 2 : Output result
        if (current == NULL)
        {
            cout << "Record not found\n";
        }
        else
        {
            cout << "Record found\n";
            cout << "Roll Number: "<< current->noMhs << endl;
        }
    }  
};