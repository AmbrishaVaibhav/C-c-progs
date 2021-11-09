#include <iostream>
#include <string.h>
using namespace std;

class batsman
{
    int runs,cen,half;
    float avg,rate;

public:
    void getdatabatsman(int r, float a, int h, int c, float s)
    {
        runs = r;
        avg = a;
        half = h;
        cen = c;
        rate = s;
    }
    void display()
    {
        cout << "Runs: " <<runs<<endl;
        cout << "Batting Avg: "<<avg<< endl;
        cout << "No of Half Centuries: "<<half<<endl;
        cout << "No of centuries: "<<cen<<endl;
        cout << "Strike rate: " <<rate<<endl;
    }
};
class bowler
{
    char type[10], bestfig[10];
    int wic, hat;
    float rate, speed;

public:
    void getdatabowler(char *t, int w, float r, float s, char *bf)
    {
        strcpy(type, t);
        wic=w;
        rate=r;
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
};
class allrounder : public batsman, public bowler
{
    int mof,imp,noc,icc,spm;

public:
    void getdataall(int nm, int ni, int nc, int ic, int sp)
    {
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
};
int main()
{
    allrounder ob1_207;
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

    ob1_207.getdatabatsman(runs, avg, hcen, cen, strikeRate);
    ob1_207.getdatabowler(type, wickets, runrate, speed, bestFigure);
    ob1_207.getdataall(mof, nim, noc, icc, spm);
    cout << "Displaying the Data:\n";
    ob1_207.display();
    return 0;
}