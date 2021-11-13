//14. C++ program for Simple Queue using Class (Data Structure)

/*
########################################################################################################################
What is Queue?
A queue is an order collection of items from which items may be deleted at one end (called front or head of the queue) and into which items may be
inserted at the other end (called the rear end  or tail of the queue).
Queue is a first-in, first-out (FIFO) data structure. i.e. the element added first to the queue will be the one to be removed first.
Some of the common terminology associated with queues include ADD/ PUSH and DELETE/ POP of elements to the queue.
ADD/ PUSH refers to adding an element to the queue.

DELETE/ POP refers to removing an element from the queue.

########################################################################################################################

SOURCE CODE : :

*/

/*  C++ program to implement Simple Queue using Class */

#include <iostream>

using namespace std;

class queue
{
        private :

                int *arr ;
                int front, rear ;
                int MAX ;
        public :
                queue( int maxsize = 10 ) ;
                void addq ( int item ) ;
                int delq( ) ;
} ;

queue :: queue( int maxsize )
{
        MAX = maxsize ;
        arr = new int [ MAX ];
        front = -1 ;
        rear = -1 ;
}

void queue :: addq ( int item )
{
        if ( rear == MAX - 1 )
        {
                cout << "\nQueue is full" ;
                return ;
        }
        rear++ ;
        arr[rear] = item ;
        if ( front == -1 )
                front = 0 ;
}
int queue :: delq( )
{
        int data ;

        if ( front == -1 )
        {
                cout << "\nQueue is Empty" ;
                return NULL ;
        }

        data = arr[front] ;
        arr[front] = 0 ;
        if ( front == rear )
                front = rear = -1 ;
        else
                front++ ;

        return  data ;
}
int main( )
{
        queue a (10 ) ;

        a.addq ( 23 ) ;
        a.addq ( 9 ) ;
        a.addq ( 11 ) ;
        a.addq ( -10 ) ;
        a.addq ( 25 ) ;
        a.addq ( 16 ) ;
        a.addq ( 17 ) ;
        a.addq ( 22 ) ;
        a.addq ( 19 ) ;
        a.addq ( 30 ) ;
        a.addq ( 32 ) ;
        int i = a.delq( ) ;
        cout << "\n\nItem deleted: " << i ;
        i = a.delq( ) ;
        cout << "\n\nItem deleted: " << i ;
        i = a.delq( ) ;
        cout << "\n\nItem deleted: " << i ;

        cout<<"\n";

        return 0;
}
/*
OUTPUT ::
/*  C++ program to implement Simple Queue using Class */
/*
Queue is full

Item deleted: 23

Item deleted: 9

Item deleted: 11

Process returned 0
*/
