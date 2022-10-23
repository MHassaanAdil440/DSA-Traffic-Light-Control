/*******************************************************************************************************************
 * Name: Muhammad Hassaan Adil
 * Roll no: SP21 -BCS-063(A)
 * Assignmen no: 02
 * Title: "Algorithm for Traffic signals control."
 *******************************************************************************************************************/
#include <iostream>
using namespace std;
#define size 4
int arr[size];
int front = -1;
int rear = -1;

bool isempty(){
    if(front==-1 && rear==-1){
        return true;
    }else{
        return false;
    }
}

void enqueue(int value){
    if((rear+1)%size == front){
        cout<<"Queue is full\n";
    }else{
        if(front == -1){
             front = 0;
        }
        rear = (rear+1)%size;
        arr[rear] = value;  
    }    
}
void dequeue(){
    if(isempty()){
        cout<<"Queue is empty\n";
    }
    else{
        if(front == rear){
            front = rear=-1;
        }else{
            front = (front + 1)%size;
        }  
    }
}
void displayQueue(){
    if(isempty()){
        cout<<"Queue is empty\n";
    }else{
        int i;
        if(front <= rear){
            for(i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
        }else{
            i=front;
            while(i<size){
                cout<<arr[i]<<" ";
                i++;
            }i=0;
            while(i<=rear){
                cout<<arr[i]<<" ";
                i++;
            }
        }
    }
}
void signalControl(int control){

    if(control == 1){
        dequeue();
        enqueue(2);
        if (arr[0]==2 && arr[1]==3 && arr[2]==5 && arr[3]==7 )
        {
            cout<<"Signal 1 is open\n"
                <<"Reset of the signals are closed\n"
                <<"________________________________\n";
        }else{
            cout<<"ERROR\n";
        }      
    }else if(control == 2){
        dequeue();
        enqueue(4);
        dequeue();
        enqueue(5);
        dequeue();
        enqueue(7);
        dequeue();
        enqueue(1);
         if (arr[0]==1 && arr[1]==4 && arr[2]==5 && arr[3]==7 )
        {
            cout<<"Signal 2 is open\n"
                <<"Reset of the signals are closed\n"
                <<"________________________________\n";
        }else{
            cout<<"ERROR\n";
        }   
    }else if(control == 3){
        dequeue();
        enqueue(3);
        dequeue();
        enqueue(6);
        dequeue();
        enqueue(7);
        dequeue();
        enqueue(1);
        if (arr[0]==1 && arr[1]==3 && arr[2]==6 && arr[3]==7 )
        {
            cout<<"Signal 3 is open\n"
                <<"Reset of the signals are closed\n"
                <<"________________________________\n";
        }else{
            cout<<"ERROR\n";
        }   
        
    }else if(control == 4){
        dequeue();
        enqueue(3);
        dequeue();
        enqueue(5);
        dequeue();
        enqueue(8);
        dequeue();
        enqueue(1);
        if (arr[0]==1 && arr[1]==3 && arr[2]==5 && arr[3]==8 )
        {
            cout<<"Signal 4 is open\n"
                <<"Reset of the signals are closed\n"
                <<"________________________________\n";
        }else{
            cout<<"ERROR\n";
        }   
    }
}
int main(){
    enqueue(1);
    enqueue(3);
    enqueue(5);
    enqueue(7);
    int control;
    cout<<"Cuurently all the signals are closed\n";
    cout<<"Enter 5 to exit the program\n";
        for(control=1; control<=size; control++){
        if(control==1){
            cout<<"Enter 1 for signal 1 to open\n";
            cin>>control;
            if (control == 1)
            {
                signalControl(control);
            }else if (control == 5)
            {
                cout<<"Program Terminated\n";
                 
            }else{
                cout<<"you have entered invalid argument.\n";
            }
            // control++;
        }
        else if(control==2){
            cout<<"Enter 2 for signal 2 to open\n";
            cin>>control;
            if (control == 2)
            {
                signalControl(control);
            }else if(control == 5){
                cout<<"Program Terminated\n";
                 
            }
            else{
                cout<<"you have entered invalid argument.\n";
            }
            // control++;
        }
        else if(control==3){
            cout<<"Enter 3 for signal 3 to open\n";
            cin>>control;
            if (control == 3)
            {
                signalControl(control);
            }else if(control == 5){
                cout<<"Program Terminated\n";
                 
            }else{
                cout<<"you have entered invalid argument.\n";
            }
            // control++;
        }     
        else if(control==4){
            cout<<"Enter 4 for signal 4 to open\n";
            cin>>control;
            if (control == 4)
            {
                signalControl(control);
            }else if(control == 5){
                cout<<"Program Terminated\n";
                 
            }else{
                cout<<"you have entered invalid argument.\n";
            }
            // control=1;
        }  
        }
    return 0;
}
