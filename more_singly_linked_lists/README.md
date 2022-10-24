# Linked List

* A linked list is a linear data structure that stores a collection of data elements dynamically.
* Nodes represent those data elements, and links or pointers connect each node.
* Each node consists of two fields, the information stored in a linked list and a pointer that stores the address of its next node.
* The last node contains null in its second field because it will point to no node.
* A linked list can grow and shrink its size, as per the requirement.
* It does not waste memory space.

## Representation of a Linked List

This representation of a linked list depicts that each node consists of two fields. The first field consists of data, and the second field consists of pointers that point to another node.

![Representation of a Linked List](https://www.simplilearn.com/ice9/free_resources_article_thumb/Linked-List-Soni/representation-of-linked-list.png)

Here, the start pointer stores the address of the first node, and at the end, there is a null pointer that states the end of the Linked List. 

## Types of Linked Lists

The linked list mainly has three types, they are:

<details><summary>1. Singly Linked List</summary>

A singly linked list is the most common type of linked list. Each node has data and an address field that contains a reference to the next node.

![Syngly Linked List](https://www.simplilearn.com/ice9/free_resources_article_thumb/Linked-List-Soni/singly-linked-list.png)

</details>

<details><summary>2. Doubly Linked List</summary>

There are two pointer storage blocks in the doubly linked list. The first pointer block in each node stores the address of the previous node. Hence, in the doubly linked inventory, there are three fields that are the previous pointers, that contain a reference to the previous node. Then there is the data, and last you have the next pointer, which points to the next node. Thus, you can go in both directions (backward and forward).

![Doubly Linked List](https://www.simplilearn.com/ice9/free_resources_article_thumb/Linked-List-Soni/doubly-linked-list.png)

</details>

<details><summary>3. Circular Linked List</summary>

The circular linked list is extremely similar to the singly linked list. The only difference is that the last node is connected with the first node, forming a circular loop in the circular linked list.

![Circular Linked List](https://www.simplilearn.com/ice9/free_resources_article_thumb/Linked-List-Soni/circular-linked-list.png)

Circular link list can either be singly or doubly-linked lists.
* The next node's next pointer will point to the first node to form a singly linked list
* The previous pointer of the first node keeps the address of the last node to form a doubly-linked list.

</details>

Source: [Simplilearn](https://www.simplilearn.com/tutorials/data-structure-tutorial/linked-list-in-data-structure#what_is_a_linked_list)