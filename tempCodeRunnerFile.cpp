// step 9 : Insert between current and current->next
        newNode->next = current->next;   // step 9a : newNode.next = current.next
        newNode->prev = current;        // step 9b : newNode.prev = current