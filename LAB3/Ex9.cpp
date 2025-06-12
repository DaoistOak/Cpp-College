#include<iostream>
using namespace std;
class LM {
public:
    int Ropani;
    int Ana;
    int Paisa;
    int Dam;
    LM(int r, int a, int p, int d) {
        Ropani = r;
        Ana = a;
        Paisa = p;
        Dam = d;
    }
    LM calculateSum(LM lm) {
        int total = Ropani * 16 * 4 * 4 + Ana * 4 * 4 + Paisa * 4 + Dam;
        int totalLM = lm.Ropani * 16 * 4 * 4 + lm.Ana * 4 * 4 + lm.Paisa * 4 + lm.Dam;
        int sum = total + totalLM;
        int newRopani = sum / (16 * 4 * 4);
        sum %= (16 * 4 * 4);
        int newAna = sum / (4 * 4);
        sum %= (4 * 4);
        int newPaisa = sum / 4;
        int newDam = sum % 4;
        return LM(newRopani, newAna, newPaisa, newDam);
    }
};
int main() {
    int r1, a1, p1, d1, r2, a2, p2, d2;
    cout << "Enter Ropani for LM 1, Ana for LM 1, Paisa for LM 1, Dam for LM 1: ";
    cin >> r1 >> a1 >> p1 >> d1;
    cout << "Enter Ropani for LM 2, Ana for LM 2, Paisa for LM 2, Dam for LM 2: ";
    cin >> r2 >> a2 >> p2 >> d2;
    LM inputLM1(r1, a1, p1, d1);
    LM inputLM2(r2, a2, p2, d2);
    LM CalcR = inputLM1.calculateSum(inputLM2);
    cout << "Result: " << CalcR.Ropani << " Ropani, " << CalcR.Ana << " Ana, " << CalcR.Paisa << " Paisa, " << CalcR.Dam << " Dam" << endl;
    return 0;
}
