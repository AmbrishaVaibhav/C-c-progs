#include<iostream>
#include <fstream>
#include<string.h>
using namespace std;
class DRINKS
{
    int DCODE;
    char DNAME[13];
    int DSIZE;
    float DPRICE;
    public:
    void getdrinks()
    {
        cout << "Enter code: ";
        cin >> DCODE;
        cout << "Enter name: ";
        getchar();
        gets(DNAME);
        cout << "Enter size: ";
        cin >> DSIZE;
        cout << "Enter price: ";
        cin >> DPRICE;
    }
    void showdrinks()
    {
        cout << "Code: "<<DCODE<<endl;
        cout << "Name: "<<DNAME<<endl;
        cout << "Size: "<<DSIZE<<endl;
        cout << "Price: "<<DPRICE<<endl;
    }
    char *getname()
    {
        return DNAME;
    }
};

int main()
{
    fstream file;
    file.open("DRINKS.txt", ios::in | ios::out | ios::trunc);
    DRINKS ob[3];

    if(!file)
    {
        cout << "File not available\n";
        exit(1);
    }

    cout << "Enter Details:";
    for (int i = 0; i < 3; i++)
    {
        ob[i].getdrinks();
        file.write((char *)&ob[i], sizeof((ob[i])));
    }

    file.seekg(0);
    for (int i = 0; i < 3; i++)
    {
        file.read((char *)&ob[i], sizeof(ob[i]));

        if(!strcmp(ob[i].getname(),"INDY COLA"))
        {
            ob[i].showdrinks();
        }
        else if(!strcmp(ob[i].getname(),"INDY COLA"))
        {
            ob[i].showdrinks();
        }
        cout<<"\n INDY COLA NOT FOUND";
    }
    file.close();
    return 0;
}
