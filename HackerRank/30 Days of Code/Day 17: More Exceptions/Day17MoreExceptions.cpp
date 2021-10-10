
using namespace std;
struct Calculator {
    static int power(const int n_, const int p_) {
        //Write your code here
        if ( n_ < 0 || p_ < 0 ) { throw std::invalid_argument("n and p should be non-negative");}
        return pow(n_, p_);
    }
};
