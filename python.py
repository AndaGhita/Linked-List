
class Node:
    def __init__(self, data):
        """ Store the data, and set next to None"""
        self.data = data
        self.next = None

    def __str__(self):
        """ Return a string representation of the data """


class Storage:

    def __init__(self):
        """ Creates an empty Storage class. Sets head to None. """
        self.head = None


    def push(self, data):
        """ Create a Node to hold the data, then put it at the head of the list. """
        new_storage = Storage(data)
        new_storage.next = self.head
        self.head = new_storage
        
    def pop(self):
        """ Remove the head Node and return its data. """

    def peek(self):
        """ Return the data from the head Node, without removing it. """

    def isempty(self):
        """ Return True if the list is empty, otherwise False """