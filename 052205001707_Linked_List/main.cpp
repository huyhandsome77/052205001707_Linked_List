#include <iostream>
#include "linkedlist.h"
using namespace std;

int main()
{
    cout << "------052205001707_Nguyen Anh Huy------" << endl;
    linkedlist* list_ = new linkedlist();
    element* e;
    e = new element(9);
    list_->InsertTail(e);
    e = new element(10);
    list_->InsertTail(e);
    e = new element(8);
    list_->InsertTail(e);

    list_->Travel();
    list_->DeleteFirst();
    cout << "\n";
    list_->Travel();


    /*
       cout << "\n";
       list_->RemoveAll();
       cout << "Remove complete !";
       cout << "List after removal: ";
       list_->Travel();
    */
    cout << endl;
    cout << "Sum List = " << list_->SumList();

    cout << endl;
    cout << "Max List = " << list_->MaxList();

    cout << endl;
    cout << "Count Prime = " << list_->CountPrime();

    cout << endl;
    element* p = new element(7);
    list_->InsertTail(p);
    cout << "List sau khi InsertTail : ";
    list_->Travel();


    //InsertAfter
    cout << endl;
    element* current = list_->Gethead()->Getpointer();
    //Thay vi tri can chen (8)
    while (current != nullptr && current->Getdata() != 8) {
        current = current->Getpointer();
    }

    if (current != nullptr) {
        list_->InsertAfter(current, 3);
    }
    else {
        cout << "Fail. Khong tim thay !" << endl;
    }
    cout << "List sau khi InsertAfter ";
    list_->Travel();

    // DeleteAfter
    cout << endl;
    element* dA = list_->Gethead()->Getpointer();
    list_->DeleteAfter(dA);

    cout << "List sau khi xoa (DeleteAfter): ";
    list_->Travel();



    //delete
    list_->DeleteFirst();
    cout << endl;
    cout << "List sau khi DeleteFirst : ";
    list_->Travel();
    list_->DeleteLast();
    cout << endl;
    cout << "List sau khi DeleteLast : ";
    list_->Travel();


    //9
    cout << endl;
    cout << "Count 5 = " << list_->Count_x(5);



    //10
    list_->RemoveAll();

    cout << endl;
    cout << "List sau khi bo sung phan tu : ";
    list_->TaoDs(4);
    list_->TaoDs(5);
    list_->TaoDs(6);
    list_->TaoDs(9);
    list_->TaoDs(15);
    list_->TaoDs(1);
    list_->TaoDs(48);
    list_->Travel();

    cout << endl;
    linkedlist list1, list2;
    int x = 6;
    list_->TachDS(&list1, &list2, x);

    return 0;
}

