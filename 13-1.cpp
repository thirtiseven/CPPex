#include <iostream>
using namespace std;

struct Node{ 
	double data;
	Node *next;
};

void ShowList(Node *list){ 
	if(list){ 
		cout<<list->data<<endl;
		ShowList(list->next);
	}
}

void AddToEnd(Node *newnode , Node *&head){  //将p所指向的结点插入链尾
	if(head==NULL){
		head = newnode;
	}else{ 
		AddToEnd(newnode,head->next);
	}
}

Node *GetNode(){
	Node *item=new Node;
	if(item){ 
		item->next=NULL;
		item->data=0.0;
	}else{
		cout<<"Nothing allocated!\n";
	}
	return item;
}

void DeleteList(Node *head){
	if(head){
	delete head;
	DeleteList(head->next);
	}
}

int main(void){ 
	Node *head = NULL, *temp; 
	temp = new Node; 
	while(1){
		temp = GetNode();
		cout << "data?"; 
		cin >> temp->data;  
		if(temp->data>0){
			AddToEnd(temp,head); //将新点加入链表的尾部 
		}else{
			break;  
		}
	}
	ShowList(head);
	DeleteList(head);
	return 0;
}