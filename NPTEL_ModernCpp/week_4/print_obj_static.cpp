#include <iostream>
using namespace std;

class PrintMach {
    int nPages;
    static int nJobs;
    static int nTrayPages;
    public:
        PrintMach(int nP) : nPages(nP) {
            ++nJobs; 
            nTrayPages = nTrayPages - nP;
        }
        ~PrintMach() { --nJobs; }
        static int getJobs() {return nJobs;}
        static int getPages() {return nTrayPages;}
        static void loadPages(int nP) {nTrayPages += nP;}
};

int PrintMach::nJobs = 0;
int PrintMach::nTrayPages = 500;

int main() {
    cout << "Jobs = " << PrintMach::getJobs() << endl;
    cout << "Pages = " << PrintMach::getPages() << endl;

    PrintMach jobs1(10);
    cout << "Jobs = " << PrintMach::getJobs() << endl;
    cout << "Pages = " << PrintMach::getPages() << endl;
}