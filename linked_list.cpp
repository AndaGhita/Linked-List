
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

    int data;
    Storage* next;

    void push(int data){
    

    Node* new_storage = new Nodde(data);
    if(this->head == NULL){

        this->head = new_storage;

    }else{

        new_storage->next =this->head;
        this->head = new_storage;

    }

    }


    bool pop(int &data){

   

    if(this->head == NULL){
       
        return false;

    }else{

        data = this->head->data;
        this->head = this->head->next;
        return true;
    }

    }

   
    bool peek(int &data){

    

    if(this->head == NULL)
    {
        return false;

    }else{

        data = this->head->data;
        return true;


    }

    }

  
    bool isEmpty(){

   

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
