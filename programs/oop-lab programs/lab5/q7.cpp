#include <iostream>
#include <string.h>
using namespace std;
class book
{
    char *author, *title, *publisher;
    float price;
    int stock;

public:
    book() {}
    book(char *a, char *t, float pr, char *p, int st)
    {
        author = new char[strlen(a) + 1];
        title = new char[strlen(t) + 1];
        publisher = new char[strlen(p) + 1];
        strcpy(author, a);
        strcpy(title, t);
        strcpy(publisher, p);
        price = pr;
        stock = st;
    }
    book(const book &obj)
    {
        author = new char[strlen(obj.author) + 1];
        title = new char[strlen(obj.title) + 1];
        publisher = new char[strlen(obj.publisher) + 1];
        strcpy(author, obj.author);
        strcpy(title, obj.title);
        strcpy(publisher, obj.publisher);
        price = obj.price;
        stock = obj.stock;
    }
    friend void search(book *b1, int n, char *t, char *a);
    void display()
    {
        cout << "The details of book are\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Stock: " << stock << endl;
    }
    ~book()
    {
        delete[] title;
        delete[] author;
        delete[] publisher;
    }
};
void search(book *b1, int n, char *t, char *a)
{
    for (int i = 0; i < n; i++)
    {
         if(strcmp(b1[i].title,t)==0&&strcmp(b1[i].author,a)==0)
         {
            int num;
            cout << "How many books are required : " << endl;
            cin >> num;
            if (b1[i].stock > num)
            {
                float cost = b1[i].price * num;
                cout << "The total cost is : " << cost << endl;
            }
            else
            {
                cout << "Required copies not in stock\n"
                     << endl;
                return;
            }
             
         }
         cout<<"Book is not available \n"<<endl;
    }
}
int main()
{
    book bk_207[3] = { {"Maths", "arya", 200.00f, "Copy", 10},
                       {"English", "avin", 250.00f, "print", 20},
                       {"Physics", "vaibhav", 320.00f, "Ctr", 15} } 
                       for (int i = 0; i < 3; i++)
    {
        bk_207[i].display();
    }
    char sTitle_07[30], sAuthor_07[30];
    cout << "Enter the name of book to search: ";
    gets(sTitle_07);
    cout << "Enter the name of author to search: ";
    gets(sAuthor_07);
    search(bk_07, 3, sTitle_07, sAuthor_07);
    return 0;
}