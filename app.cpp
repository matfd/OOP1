#include <iostream>
using namespace std;
// class drob'
class Fraction {
private:
	int nom;
	int denom;
public:
	Fraction() {
		nom = 0;
		denom = 1;
	}
	void setNom(int fnom) {nom = fnom;}
	int getNom() { return nom; }
	void setDenom(int fdenom) { denom = fdenom; }
	int getDenom() { return denom; }
	void showFraction() {cout << nom << '/' << denom << endl;}
	Fraction mul(Fraction b) {
		Fraction c;
		c.nom = nom * b.nom;
		c.denom = denom * b.denom;
		return c;
	}
};
int main() {
	Fraction a,b,res;
	a.setNom(32);
	a.setDenom(64);
	a.showFraction();
	res = a.mul(b);
	return 0;
}