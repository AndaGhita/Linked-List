
class Node:
    def __init__(self, data):
        """ Store the data, and set next to None"""
        self.data = data
        self.next = None

    def __str__(self):
        """ Return a string representation of the data """
        str = ""
        str +=f"{self.data}"
        return str



class Storage:

    def __init__(self):
        """ Creates an empty Storage class. Sets head to None. """
        self.head = None


    def push(self, data):
        """ Create a Node to hold the data, then put it at the head of the list. """
        new_storage = Node(data)
        
        if self.head is None:
            self.head = new_storage
        else:
            new_storage.next = self.head
            self.head = new_storage

    def pop(self):
        """ Remove the head Node and return its data. """

        if self.head is None:
            return None
        else:
            temp_storage =self.head
            self.head = self.head.next
            return temp_storage.data

    def peek(self):
        """ Return the data from the head Node, without removing it. """

        if self.head is None:
           return False
        else:
            return self.head.data


    def isempty(self):
        """ Return True if the list is empty, otherwise False """

        if self.head is None:
            return True
        else:
            return False

