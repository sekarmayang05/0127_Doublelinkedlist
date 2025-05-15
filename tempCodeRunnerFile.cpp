//insert last node 
        if (current->next != NULL)
            current->next->prev = newNode; // step 9c : current.next.prev = newNode
        current ->next = newNode ;   // step 9d : current.next = newNode
