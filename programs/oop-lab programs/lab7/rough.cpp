#include <iostream>
#include <string.h>
using namespace std;

class batsman
{
    int runs, cen, hcen;
    float avg, strikeRate;

public:
    batsman(int r, float av, int hce, int ce, float sr)
    {
        cout << "batsman constructor is called!\n";
        runs = r;
        avg = av;
        hcen = hce;
        cen = ce;
        strikeRate = sr;
    }
    void display()
    {
        cout << "Runs: " << runs << endl;
        cout << "Batting Avg: " << avg << endl;
        cout << "No of Half Centuries: " << hcen << endl;
        cout << "No of centuries: " << cen << endl;
        cout << "Strike rate: " << strikeRate << endl;
    }
    ~batsman()
    {
        cout << "batsman destructor is called!\n";
    }
};

class bowler
{
    char type[10], bestFigure[10];
    int wickets, noHatric;
    float runrate, speed;

public:
    bowler(char *t, int w, float rr, float sp, char *bf)
    {
        cout << "bowler constructor is called!\n";
        strcpy(type, t);
        wickets = w;
        runrate = rr;
        speed = sp;
        strcpy(bestFigure, bf);
    }
    void display()
    {
        cout << "Type: " << type << endl;
        cout << "Wickets Taken: " << wickets << endl;
        cout << "Runrate: " << runrate << endl;
        cout << "Speed: " << speed << endl;
        cout << "Best Figure: " << bestFigure << endl;
    }
    
    ~bowler()
    {
        cout << "bowler destructor is called!\n";
    }
};

class allrounder : public batsman, public bowler
{
    int nomom, noim, noc, icc, spom;

public:
    allrounder(int r, float av, int hce, int ce, float sr, char *t, int w, float rr, float sp, char *bf, int nom, int noi, int nc, int ic, int spo) : batsman(r, av, hce, ce, sr), bowler(t, w, rr, sp, bf)
    {
        cout << "allrounder constructor is called!\n";
        nomom = nom;
        noim = noi;
        noc = nc;
        icc = ic;
        spom = spo;
    }
    void display()
    {
        batsman ::display();
        bowler ::display();
        cout << "Man of the Match: " << nomom << endl;
        cout << "No. of International Matches: " << noim << endl;
        cout << "No. of catches: " << noc << endl;
        cout << "ICC Ranking: " << icc << endl;
        cout << "Stylish player of the match: " << spom << endl;
    }

    ~allrounder()
    {
        cout << "allrounder destructor is called!\n";
    }
};

int main()
{
    int runs_207, cen_207, hcen_207, wickets_207, noHatric_207;
    float avg_207, strikeRate_207, runrate_207, speed_207;
    char type_207[10], bestFigure_207[10];
    int nomom_207, noim_207, noc_207, icc_207, spom_207;

    cout << "Runs: ";
    cin >> runs_207;
    cout << "Average: ";
    cin >> avg_207;
    cout << "Half Centuries: ";
    cin >> hcen_207;
    cout << "Centuries: ";
    cin >> cen_207;
    cout << "Strike Rate: ";
    cin >> strikeRate_207;
    cout << "Type: ";
    cin >> type_207;
    cout << "Wickets Taken: ";
    cin >> wickets_207;
    cout << "Runrate: ";
    cin >> runrate_207;
    cout << "Speed: ";
    cin >> speed_207;
    cout << "Best Figure: ";
    cin >> bestFigure_207;
    cout << "Man of the Match: ";
    cin >> nomom_207;
    cout << "No. of International Matches: ";
    cin >> noim_207;
    cout << "No. of catches: ";
    cin >> noc_207;
    cout << "ICC Ranking: ";
    cin >> icc_207;
    cout << "Stylish player of the match: ";
    cin >> spom_207;

    allrounder ob1_207(runs_207, avg_207, hcen_207, cen_207, strikeRate_207, type_207, wickets_207, runrate_207, speed_207, bestFigure_207, nomom_207, noim_207, noc_207, icc_207, spom_207);
    cout << "Displaying the Data:\n";
    ob1_207.display();
    return 0;
}