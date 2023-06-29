// Перегрузка операторов 9.1

#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;//числитель
		denominator_ = denominator;// знаминатель
	}

	/*int get_priv_fieln() { return numerator_; }
	int get_priv_field() { return denominator_; }*/	

	int fract_c() {
		return numerator_* denominator_;
	}

	bool operator==(Fraction other) { return fract_c() == other.fract_c(); }
	bool operator!=(Fraction other) { return  !(*this == other); /*fract_c() != other.fract_c();*/ }
	bool operator<(Fraction other) { return fract_c() > other.fract_c(); }
	bool operator>(Fraction other) { return other < *this;/*return fract_c() > other.fract_c();*/ }
	bool operator<=(Fraction other) { return !(*this > other);/*return fract_c() >= other.fract_c();*/ }
	bool operator>=(Fraction other) { return !(*this < other);/*return fract_c() <= other.fract_c();*/ }	
};


int main()
{	
	Fraction f1(4, 3);
	Fraction f2(6, 11);	
	
	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;    
}




