#include <iostream>
#define max 20
int menu();

void push();
void pop();
int top();
bool isFull();
bool isEmpty();
int randomNumber(int min, int maximum);

int stack[max];
int topNum = 0;

int main() 
{
 int ch;
    do {
        ch = menu();
        switch(ch) {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: top();
                break;
            case 4: isFull();
                break;
            case 5: isEmpty();
                break;
            case 6: ch = -1;
                break;
                
            default: printf("\nEnter a valid choice!!");
        }
    } while(ch != -1);
}

int menu() {
    int ch;
    printf("\nStack");
    printf("\n1.Push\n2.Pop\n3.Top element\n4.Is Full\n5.Is Empty\n6.Exit");
    printf("\nEnter your Choice:");
    scanf("%d",&ch);
    return ch;
}

void push() {
    if(topNum==max) {
        printf("\nOverflow");
        
    } else {
        int element;
        printf("\nEnter Element:");
        scanf("%d",&element);
        printf("\nElement(%d) has been pushed at %d", element, topNum);
        stack[topNum] = element;
        topNum++;
    }
}

void pop() {
    if(topNum==-1) {
        printf("\nUnderflow");
        
    } else {
        topNum--;
        printf("\nELement has been popped out!");
    }
}

int top() {
    printf("\nTop number is %d", stack[topNum]);
    return stack[topNum];
}

bool isFull() {
    if(topNum == max -1) {
        printf("\n%d", true);
        return true;
        
    } else {
        printf("\n%d", false);
        return false;
    }
}

bool isEmpty() {
    if(topNum == 0) {
        printf("\n%d", true);
        return true;
        
    } else {
        printf("\n%d", false);
        return false;
    }
}

int randomNumber(int min, int maximum) {
    static bool first = true;
    if ( first )
    {
        srand(time(NULL));
        first = false;
    }
    return min + rand() % (max - min);
}
