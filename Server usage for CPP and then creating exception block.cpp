/*https://hackerrank-challenge-pdfs.s3.amazonaws.com/20645-exceptional-server-English?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1560012316&Signature=nKD0IBfy%2F8TzfeqlAffm%2FQXA2UI%3D&response-content-disposition=inline%3B%20filename%3Dexceptional-server-English.pdf&response-content-type=application%2Fpdf*/

#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cin >> A >> B;
//code by abhis021@github
 try {
            cout << Server::compute(A,B) << endl;
        } 
        catch (bad_alloc& error) {
            cout << "Not enough memory" << endl;
        }
        catch (exception& error) {
            cout << "Exception: " << error.what() << endl;
        }
        catch (...) {
            cout << "Other Exception" << endl;
        }
	}
	cout << Server::getLoad() << endl;
	return 0;
}