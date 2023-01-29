
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Constructor with data
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};

class Storage
{
public:
    Node *head;

    /** Default constructor
     * 
    */
    Storage()
    {
        head = NULL;
    }

    /** Create a Node to hold the data, then put it at the head of the list.
     * @param data The data for the new node
    */
    int data;
    Storage* next;

    void push(int data){
    
    /** Remove the head Node and return its data.
     * 
     * @param [out] The data (only valid if return true)
     * @return True if there is a node to return
    */

    Storage* new_storage = new Storage(data);
    if(this->head == NULL){

        this->head = temp;

    }else{

        temp->next =this->head;
        this->head = temp;

    }

    }


    bool pop(int &data){

          /**
     * Return the data from the head Node, without removing it.
     * 
     * @param [out] The data (only valid if return true)
     * @return True if text has been returned successfully (there is a node)
    */   

    if(this->head == NULL){
       
        return false;

    }else{

        data = this->head->data;
        this->head = this->head->next;
        return true;
    }

    }

   
    bool peek(int &data){

          /**
     * Return True if the list is empty, otherwise False  
     * 
     * @return True if the list is empty, otherwise False
    */

    if(this->head == NULL)
    {
        return false;

    }else{

        data = this->head->data;
        return true;


    }

    }

  
    bool isEmpty(){

         /**
     * Swaps the nodes at position i and j.
     * 
     * @return Returns true if successful, otherwise false (e.g. outside range)
    */
    /**  Frivillig, avkommentera om du implementerar. Avkommentera även i test_storage.cpp
    bool swap(int i, int j);
    */

    if(this->head == NULL)
    {
        return true;
    }else{

        return false;
    }

    }

   
};


/*
main() {
    Storage *s = new Storage();
    s->push(1);
    int pop;
    s->pop(pop);
    cout << pop << endl;
}
*/