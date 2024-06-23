void insertNodeAtGivenPos(Node** head, int pos, int data) 
{ 
    // This condition to check whether the 
    // position given is valid or not.
    
    if (pos < 1 || pos > size + 1) 
        cout << "Invalid position!" << endl; 
    else { 
        // Keep looping until the pos is zero 
        while (pos--) { 
  
            if (pos == 0) { 
  
                // adding Node at required position 
                Node* temp = createNode(data); 
  
                // Making the new Node to point to  
                // the old Node at the same position 
                temp->next = *head; 
  
                // Changing the pointer of the Node previous  
                // to the old Node to point to the new Node 
                *head = temp; 
            } 
            else
              // Assign double pointer variable to point to the  
              // pointer pointing to the address of next Node  
              head = &(*head)->next; 
        } 
        size++; 
    }

}
