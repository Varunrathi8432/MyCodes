#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

void search(int item){
    struct node 

}
int main(){
    node *head = new node;
    node *one = new node;
    node *two = new node;
    node *three = new node;

    head->data=4;
    head->next=one;
    
    one->data=21;
    one->next=two;
    
    two->data=7;
    two->next=three;
    
    three->data=14;
    three->next=NULL;


    return 0;
}
