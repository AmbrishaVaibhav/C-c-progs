#include <iostream>
#include <string.h>
using namespace std;
class cricketer
{
    char name[30];
    int age;
    int jersy;
    int no;

public:
    void getdata(char *n, int a, int j, int o)
    {
        strcpy(name, n);
        age = a;
        jersy = j;
        no = o;
    }
    void display()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "Jersy number :" << jersy << endl;
        cout << "No of OIDs plays :" << no << endl;
    }
};
class Batsman : public cricketer
{
    int runs,half, centuries,highest, rL, sixes, longest;
    float avg,rate;
public:
    void getdata(char *n, int ag, int j, int o, int r, int hf, float a, int c, float rt, int h, int rll, int s, int l)
    {
        cricketer ::getdata(n, a, j, o);
        runs = r;
        avg = a;
        half = hf;
        centuries = c;
        rate = rt;
        highest = h;
        rL = rll;
        sixes = s;
        longest = l;
    }
    void display()
    {
        cricketer ::display();
        cout << "Runstaken: " << runs << endl;
        cout << "Batting Avg: " << avg << endl;
        cout << "No of Half Centuries: " << half << endl;
        cout << "No of centuries: " << centuries << endl;
        cout << "Strike rate: " << rate << endl;
        cout << "Highest score: " << highest << endl;
        cout << "R/L :" << rL << endl;
        cout << "No of sixes: " << sixes << endl;
        cout << "Longest six: " << longest << endl;
    }
};
class bowler : public cricketer
{
    char type[10];
    int wic,rate, speed, eco,rl;

public:
    void getdata(char *n, int a, int j, int o, char *t, int w, int r, int s, int e, int l)
    {
        cricketer ::getdata(n, a, j, o);
        strcpy(type, t);
        wic = w;
        rate = r;
        speed = s;
        eco = e;
        rl = l;
    }
    void display()
    {
        cricketer ::display();
        cout << "Type: " << type << endl;
        cout << "Wickets Taken: " << wic << endl;
        cout << "Runrate: " << rate << endl;
        cout << "Speed: " << speed << endl;
        cout << "Economy: " << eco << endl;
        cout << "R/L :" << rl << endl;
    }
};
int main()
{
    Batsman ob1_207;
    bowler ob2_207;
    char n[20];
    int age, jn, no;
    int run, half, cen, high, rll, six, longe;
    float avg,rate;
    char type[10];
    int w, rr, s, e, rl;
    cout << "Enter the data for batsman:\n";
    cout << "Name: ";
    gets(n);
    cout << "Age: ";
    cin >> age;
    cout << "Jersey No: ";
    cin >> jn;
    cout << "ODIs Played: ";
    cin >> no;
    cout << "Runstaken: ";
    cin >> run;
    cout << "Average: ";
    cin >> avg;
    cout << "Half centuries: ";
    cin >> half;
    cout << "Centuries: ";
    cin >> cen;
    cout << "Strike rate: ";
    cin >> rate;
    cout << "Highest score: ";
    cin >> high;
    cout << "R/L :";
    cin >> rll;
    cout << "No. of sixes: ";
    cin >> six;
    cout << "Longest six: ";
    cin >> longe;
    ob1_207.getdata(n, age, jn, no, run, avg, half, cen, rate, high, rll, six, longe);

    cout << "Enter the data for bowler:\n";
    cout << "Name: ";
    getchar();
    gets(n);
    cout << "Age: ";
    cin >> age;
    cout << "Jersey No: ";
    cin >> jn;
    cout << "ODIs Played: ";
    cin >> no;
    cout << "Type: ";
    getchar();
    gets(type);
    cout << "Wickets Taken: ";
    cin >> w;
    cout << "Runrate: ";
    cin >> rr;
    cout << "Speed: ";
    cin >> s;
    cout << "Economy: ";
    cin >> e;
    cout << "R/L :";
    cin >> rl;
    ob2_207.getdata(n, age, jn, no, type, w, rr, s, e, rl);
    cout << "Displaying data for Batsman:\n";
    ob1_207.display();
    cout << "Displaying data for Bowler:\n";
    ob2_207.display();
    return 0;
}