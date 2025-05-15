 // step 3 : Insert at begining if list is empty or nim is smallest
        if (START == NULL || nim <= START -> noMhs)
        {
            if (START != NULL && nim == START -> noMhs)
            {
                cout << "\nDuplicate number not allowed" << endl;
                return;
            }