#include <iostream>
using namespace std;

class Node{

      public:

      char letter;  /*I looked up ASCII codes, 65 stands for 'A',
                     *it will help me make my linked list faster*/
      Node *next, *prev;          //Node pointers to next and previous

};


class SLL{

 private:

         Node *head, *tail;       //Node pointers to head and tail


 public:

        SLL(){               //default constructor
        head = NULL;
        tail = NULL;
        }
        void printAll();
        void insertToFront(char item);
        void deleteFront();
        void insertToBack(char item);
        void deleteBack();           //will delete current back Node

        void deleteKthNodeFromBack(int k); /*will delete the k-th node counting from the back
                                             of a SLL. A->B->-C->D->E->F
                                             deleteKthNodeFromBack(3) will delete D. The SLL will become A->B->-C->E->F.
                                             front points to A, back points to F
                                             If we call it again deleteKthNodeFromBack(5) will delete A.
                                             The SLL will become B->-C->E->F. front points to B, back points to F
                                             If we call it again deleteKthNodeFromBack(5) will delete nothing because there
                                             is only 4 nodes.*/

        void reverse(); /*will reverse the contents a SLL. For example:
                               A->B->C->D will become
                               D->C->B->A. front points to D, back points to A*/

        void deleteDuplicate(); /*will delete all duplicate nodes in a SLL. For example:
                                A->A->E->B->B->C->D->D->C->E will become
                                A->E->B->C->D*/

        void shiftKNodes(int k); /*The function will shift/rotate k number of nodes. For
                                 example:
                                         A->B->-C->D->E->F
                                         shiftKNodes(2) will become C->D->E->F->A->B. front points to C. back points
                                          to B.*/

        void insertNewNode(char item);
};


     void SLL::printAll(){

     Node *p;
     p = head;
     while(p->next!=NULL){

     cout << p << " ";
     p = p->next;
     }

}

     void SLL::insertNewNode(char item){
          Node* temp;

          temp = new Node;
          temp->letter = item;
          temp->next = head;
          head = temp;


          }

int main(){

    SLL list;
    list.insertNewNode('C');
    list.insertNewNode('B');
    list.insertNewNode('A');






    return 0;


}
