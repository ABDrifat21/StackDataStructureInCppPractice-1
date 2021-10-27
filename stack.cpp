#include<bits/stdc++.h>

using namespace std;

class Stack{
    private :
        int top;
        int arr[5];

   public:
      Stack(){
        top = -1;
        for(int i =0;i<5;i++){
            arr[i] = 0;
        }
      }
    bool isEmpty(){
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isFull(){
        if(top==4)
            return true;
        else
            return false;
    }
    void push(int val){
        if(isFull()){

            cout<<"Stack Overflow\n";
        }
        else{
            top++;
            arr[top]=val;
        }
    }
    int pop(){
        if(isEmpty()){
            cout << "Stack Underflow\n";
            return 0;
        }
        else{
            int popValue = arr[top];
            arr[top]=0;
            top--;
            return popValue;
        }
    }
    int Count(){
        return top+1;
    }
    int peek(int pos){
        if(isEmpty()){
            cout << "Stack Underflow\n";
            return 0;
        }
        else{
            return arr[pos];
        }
    }
    void change(int pos,int val){

        arr[pos] = val;
        cout << "Value changed at position " <<pos << "is "<<arr[pos]<<endl;
    }
    void display(){
        cout<<"The elements in the stack :\n";
        for(int i = 4;i>=1;i--)
            cout << arr[i] << " ";
    }
};

int main(){

       Stack s1;
       int position,value,option;
       do{
            cout<< "Enter the option you to work with : \n";
            cout<< "1.push\n";
            cout<< "2.pop\n";
            cout<< "3.isEmpty\n";
            cout<< "4.ifFull\n";
            cout<< "5.peek\n";
            cout<< "6.count\n";
            cout<< "7.change\n";
            cout<< "8.display\n";
            cout<< "9.Clear Screen\n";
            cout<<endl<<endl;

            cin >> option;

            switch(option){
                case 0:
                 break;
                case 1:
                    cout << "Push the value : ";
                    cin >> value;
                    s1.push(value);
                    break;
                case 2:
                    cout << "Popped  value : " <<s1.pop();
                    break;
                case 3:
                    cout << "isEmpty : "<<s1.isEmpty();
                    break;
                case 4:
                    cout << "isFull :" << s1.isFull();
                    break;
                case 5:
                    cout << "Peek  position :";
                    cin >> position;
                    cout << "Value at position "<<position << " is" <<s1.peek(position);
                    break;
                case 6:
                    cout << "Number of elements int the stack " <<s1.Count();
                    break;
                case 7:
                    cout << "Enter the position and value : ";
                    cin >> position >>value;
                    s1.change(position,value);
                    break;
                case 8:
                    s1.display();
                    break;
                case 9:
                    system("cls");
                    break;
              }
              cout << endl<<endl;
            }while(option!=0);

       return 0;

}

