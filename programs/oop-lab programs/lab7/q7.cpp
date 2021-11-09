#include <iostream>
#include <string.h>
using namespace std;

class batsman
{
    int runs,cen,half;
    float avg,rate;

public:
    batsman(int r, float a, int h, int c, float x)
    {
        cout << "batsman constructor is called!\n";
        runs = r;
        avg = a;
        half = h;
        cen = c;
        rate = x;
    }
    void display()
    {
        cout << "Runs: " <<runs<<endl;
        cout << "Batting Avg: "<<avg<< endl;
        cout << "No of Half Centuries: "<<half<<endl;
        cout << "No of centuries: "<<cen<<endl;
        cout << "Strike rate: " <<rate<<endl;
    }
    ~batsman()
    {
        cout << "batsman destructor is called!\n";
    }
};
class bowler
{
    char type[10], bestfig[10];
    int wic, hat;
    float rate, speed;

public:
    bowler(char *t, int w, float p, float s, char *bf)
    {
        cout << "bowler constructor is called!\n";
        strcpy(type, t);
        wic=w;
        rate=p;
        speed=s;
        strcpy(bestfig, bf);
    }
    void display()
    {
        cout << "Type: " <<type<<endl;
        cout << "Wickets Taken: " << wic<<endl;
        cout << "Runrate: " <<rate<<endl;
        cout << "Speed: " <<speed<<endl;
        cout << "Best Figure: " <<bestfig<<endl;
    }
    ~bowler()
    {
        cout << "bowler destructor is called!\n";
    }
};
class allrounder : public batsman, public bowler
{
    int mof,imp,noc,icc,spm;

public:
    allrounder(int r, float a, int h, int c, float x,int nm, int ni, int nc, int ic, int sp, char *t, int w, float p, float s, char *bf):batsman(r, a, h, c, x),bowler(t,w,p,s,bf)
    {
        cout << "allrounder constructor is called!\n";
        mof = nm;
        imp = ni;
        noc = nc;
        icc = ic;
        spm = sp;
    }
    void display()
    {
        batsman ::display();
        bowler ::display();
        cout << "Man of the Match: " << mof << endl;
        cout << "No. of International Matches: " << imp << endl;
        cout << "No. of catches: " << noc << endl;
        cout << "ICC Ranking: " << icc << endl;
        cout << "Stylish player of the match: " << spm << endl;
    }
    
    ~allrounder()
    {
        cout << "allrounder destructor is called!\n";
    }
};
int main()
{
    
    int runs, cen, hcen, wickets, noHatric;
    float avg, strikeRate, runrate, speed;
    char type[10], bestFigure[10];
    int mof, nim, noc, icc, spm;

    cout << "Runs: ";
    cin >> runs;
    cout << "Average: ";
    cin >> avg;
    cout << "Half Centuries: ";
    cin >> hcen;
    cout << "Centuries: ";
    cin >> cen;
    cout << "Strike Rate: ";
    cin >> strikeRate;
    cout << "Type: ";
    cin >> type;
    cout << "Wickets Taken: ";
    cin >> wickets;
    cout << "Runrate: ";
    cin >> runrate;
    cout << "Speed: ";
    cin >> speed;
    cout << "Best Figure: ";
    cin >> bestFigure;
    cout << "Man of the Match: ";
    cin >> mof;
    cout << "No. of International Matches: ";
    cin >> nim;
    cout << "No. of catches: ";
    cin >> noc;
    cout << "ICC Ranking: ";
    cin >> icc;
    cout << "Stylish player of the match: ";
    cin >> spm;

    allrounder ob(runs, avg, hcen, cen, strikeRate,type, wickets, runrate, speed, bestFigure , mof, nim, noc, icc, spm);
    cout << "Displaying the Data:\n";
    ob.display();
    return 0;
}