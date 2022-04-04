#include <iostream>

using namespace std;

class grade {

    private:

        int a, tot;
        float tst;

    public:

        grade(int atten, float sc_tst, int sc_tot) {

            a = atten;
            tst = sc_tst;
            tot = sc_tot;
        }

        int calc() {

            if(a>50 && tst>0.7 && tot>5600) {
                return 10;
            }
            else if(a>50 && tst>0.7 && tot<5600) {
                return 9;
            }
            else if(a<50 && tst>0.7 && tot>5600) {
                return 8;
            }
            else if(a>50 && tst<0.7 && tot>5600) {
                return 7;
            }
            else if((a>50 && tst<0.7 && tot<5600) || (a<50 && tst>0.7 && tot<5600) || (a<50 && tst<0.7 && tot>5600)) {
                return 6;
            }
            else if(a<50 && tst<0.7 && tot<5600) {
                return 5;
            }
        }
};

int main()
{
    int a, total;
    float score_test;

    cout << "input" << " ";
    cin >> a >> score_test >> total;

    grade g1(a, score_test, total);

    cout << "result: " << g1.calc();

    return 0;
}
