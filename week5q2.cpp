
#include <iostream>
#include <cstring>
using namespace std;

class ListNode{
	private:
		int data;
		ListNode * next;
	public:
		ListNode(){}
		ListNode(int num){
			data=num;
			next = NULL;
		}
		int getData();
		void setData(int);
		void setNext(ListNode *);
		ListNode* getNext();
};
/*
*Implementation of Node Methods
*/
int ListNode::getData(){
		return data;
}
void ListNode::setData(int x){
		data = x;
}
ListNode * ListNode::getNext(){
		return next;
}
void ListNode::setNext(ListNode * P){
		next = P;
}


class List{
	private:
		ListNode * Head;
	public:

		List(){
			Head=NULL;
		}
		~List(){}
		ListNode * getHead();
		void setHead(ListNode *);
		ListNode * last();
		void append(int);
		void prepend(int);
		void popBack();
		void print();
		void copy(List);
		void printReverse();	//prints the list from Tail to Head.

		/*Implement the follwing if required. Not mandatory*/

		ListNode * prevNode(ListNode* P);
		void popFront();

};
/*
****List Methods Implementaion***
*/
ListNode * List::getHead(){
		return Head;
}

ListNode * List::last(){
		ListNode * temp=Head;
		if(Head==NULL) return NULL;
		while(temp->getNext()!=NULL){
			temp=temp->getNext();
		}
		return temp;
}
void List::setHead(ListNode * P){
		Head = P;
}
void List::append(int num){
		ListNode * new_node = new ListNode(num);
		ListNode * temp=Head;
		if(temp==NULL){
			Head = new_node;
			return;
		}
		while(temp->getNext()!=NULL) temp=temp->getNext();
		temp->setNext(new_node);
}
void List::prepend(int num){
		ListNode * new_node = new ListNode(num);

		new_node->setNext(Head);
		Head = new_node;
}
/*
*Removes the Tail Node
*/
void List::popBack(){
		ListNode * temp=Head,*prev=NULL;
		//NULL list
		if(Head==NULL){cout<<"List is Empty\n";}
		//single element
		if(Head->getNext()==NULL){
			delete Head;
			Head=NULL;
			return;
		}
		while(temp->getNext()!=NULL){
			prev = temp;
			temp=temp->getNext();
		}
		delete temp;
		prev->setNext(NULL);
}
void List::print(){
		ListNode * temp=Head;
		while(temp!=NULL){
			cout<<temp->getData();
			temp=temp->getNext();
		}
}
//copy values of L into this list
void List::copy(List L){
		Head = NULL;
		ListNode * temp = L.Head;
		while(temp!=NULL){
			this->append(temp->getData());
			temp=temp->getNext();
		}
}

void List::printReverse(){
		ListNode * curr=Head;
		ListNode * prev_last=NULL;

		while(Head!=NULL && prev_last!=Head){
			curr = Head;
			while(curr->getNext()!=prev_last){
				curr = curr->getNext();
			}
			cout<<curr->getData();
			prev_last = curr;
		}
}

/*****End Of List Methods Implementation************************/

/* This is the data type you need to write the required methods*/
class BigInt{
   private:
	    List L;
   public:
	   BigInt(){}
	   ~BigInt(){}
      /*Must write code for append(),prepend(), add(), print() Methods*/
	   void append(int num);
	   void prepend(int num);
	   BigInt add(BigInt A);
	   void print();//mandatory

	   /*Helper Functions, not mandatory to implement
	   *Hint: Implement removeZeroes(), call it in print().
	   */
	   void removeZeroes();
	   void copy(BigInt B);

};

/**THESE ARE THE ONLY FUNCTIONS YOU ARE REQUIRED TO FILL
*You are allowed to define additional global functions.
*Note: Remove/Comment the helper functions, if you are not implementing them.
*/
int count=0;
void populate(BigInt &A, char * str){
   /*write your code here**/

   int i=0;
   while(str[i]=='0'&&str[i]){i++;}
   if(str[i]=='\0')
    A.prepend(0);
   else{
   while(str[i])
   {

    A.prepend(str[i]-'0');
       i++;
   }
   }
}
void BigInt::append(int num){
   /*write your code here**/
}
void BigInt::prepend(int num){
   /*write your code here**/
   L.prepend(num);
}

BigInt BigInt::add(BigInt A){
      BigInt C;
      char str1[]={"111111111111111111111111111111111111111111111111"};
      populate(C,str1);
      int carry=0,temp=0;
      ListNode *temp1,*temp2,*temp3;
      temp1=A.L.getHead();
      temp2=this->L.getHead();
      temp3=C.L.getHead();
      while(temp1!=NULL&&temp2!=NULL)
      {
          count++;
          temp=temp1->getData()+temp2->getData()+carry;
          if(temp>9)
          {
              carry=temp/10;
              temp=temp%10;
          }
          else
            carry=0;
          temp3->setData(temp);
         //cout<<temp1->getData()<<" "<<temp2->getData()<<" "<<temp3->getData()<<endl;
          temp1=(temp1->getNext());
          temp2=(temp2->getNext());

          temp3=(temp3->getNext());

      }
      while(temp1!=NULL)
      {
          count++;
          temp=temp1->getData()+carry;
          if(temp>9)
          {
              carry=temp/10;
              temp=temp%10;
          }
          else
            carry=0;
          temp3->setData(temp);
          temp1=(temp1->getNext());
          temp3=(temp3->getNext());
           //cout<<"temp1 "<<temp1->getData()<<" "<<temp3->getData()<<endl;
      }
      while(temp2!=NULL)
      {
           count++;
          temp=temp2->getData()+carry;
          if(temp>9)
          {
              carry=temp/10;
              temp=temp%10;
          }
         else
            carry=0;
          temp3->setData(temp);
          temp2=(temp2->getNext());
          temp3=(temp3->getNext());
           //cout<<temp2->getData()<<" "<<temp3->getData()<<endl;
      }

      if(carry>0)
      {
          count++;
          temp3->setData(carry);
          temp3=(temp3->getNext());
           //cout<<temp3->getData()<<endl;
      }

      return C;
}

void BigInt::removeZeroes(){
     /*write your code here
      *Hint: Implement removeZeroes(), call it in print().
      */
     ListNode *temp;
     temp=this->L.getHead();
    int i=0,j=1;
     while(i<=count){
        temp=temp->getNext();
        i++;
     }
     while(temp!=NULL){
         this->L.popBack();
         temp=temp->getNext();
     j++;
     }
     if(count%2!=0)
        j++;
     while(j>1){
        this->L.popBack();
        j--;
     }
}
void BigInt::print(){
     /*write your code here*/
    this->removeZeroes();
    this->L.printReverse();
}

int main(){

      char str[40];
      BigInt A,B;
      cin>>str;
      populate(A,str);
      cin>>str;
      populate(B,str);

      (A.add(B)).print();

      return 0;
}
