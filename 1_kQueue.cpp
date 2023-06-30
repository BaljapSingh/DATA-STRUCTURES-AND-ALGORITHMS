#include<iostream>
using namespace std;

class kQueue
{
    public:
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freespot;
    int n;
    int k;

    // public:
    kQueue(int n,int k)
    {
        this -> n = n;
        this -> k = k;
        arr = new int[n];
        front = new int[k];
        rear = new int[k];
        next = new int[n];

        for(int i=0;i<k;i++)
        {
            front[i]=-1;
            rear[i]=-1;
        }
        for(int i=0;i<n;i++)
        {
            next[i] = i+1;
        }
        next[n-1]=-1;
        freespot = 0;
    }
    
    void enqueue(int data, int qn)
    {
        //overflow check
        if(freespot == -1)
        {
            cout<<"overflow";
        }

        // index
        int index = freespot;

        //updating freespot
        freespot = next[index];

        //if first element
        if(front[qn-1] == -1)
        {
            front[qn-1]= index;
        }
        else{
            //link new element to previous element
            next[rear[qn-1]] = index;
        }

        next[index] = -1;

        rear[qn-1] = index;

        arr[index] = data;
    }

    int dequeue(int qn)
    {
        //underflow check
        if(front[qn-1]==-1)
        {
            cout<<"underflow"<<endl;
            return -1;
        }

    // find index to pop
        int index = front[qn-1];

        // front ko aage badhao
        front[qn-1] = next[index];

        // freespot ko manage karo
        next[index] = freespot;

        freespot = index;
        return arr[index];

    }



};

int main()
{
    kQueue q(10,3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;

}