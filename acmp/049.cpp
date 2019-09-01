#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
	int p1[9], p2[9], k=0, l=0, sum=1;
	static string P1, P2;
	
	ifstream f("input.txt");
	f >> P1 >> P2;
	for (int i = 0; i < P1.length(); i++) {
		if (P1[i] == P2[i] && !isdigit(P1[i]) && !isdigit(P2[i]) && P1[i] != '?' && P2[i] != '?') sum *= 4;
		else if (P1[i] == 'a' && P2[i] == 'b') sum *= 3;
		else if (P1[i] == 'a' && P2[i] == 'c') sum *= 2;
		else if (P1[i] == 'a' && (P2[i] == 'd' || P2[i] == '0' || P2[i] == '1' || P2[i] == '2' || P2[i] == '3')) continue;
		else if (P1[i] == 'b' && P2[i] == 'c') sum *= 3;
		else if (P1[i] == 'b' && P2[i] == 'd') sum *= 2;
		else if (P1[i] == 'b' && (P2[i] == 'e' || P2[i] == '1' || P2[i] == '2' || P2[i] == '3' || P2[i] == '4')) continue;
		else if (P1[i] == 'c' && P2[i] == 'd') sum *= 3;
		else if (P1[i] == 'c' && P2[i] == 'e') sum *= 2;
		else if (P1[i] == 'c' &&( P2[i] == 'f' || P2[i] == '2' || P2[i] == '3' || P2[i] == '4' || P2[i] == '5')) continue;
		else if (P1[i] == 'd' && P2[i] == 'e') sum *= 3;
		else if (P1[i] == 'd' && P2[i] == 'f') sum *= 2;
		else if (P1[i] == 'd' && (P2[i] == 'g' || P2[i] == '3' || P2[i] == '4' || P2[i] == '5' || P2[i] == '6')) continue;
		else if (P1[i] == 'e' && P2[i] == 'f') sum *= 3;
		else if (P1[i] == 'e' && P2[i] == 'g') sum *= 2;
		else if (P1[i] == 'e' && (P2[i] == '4' || P2[i] == '5' || P2[i] == '6' || P2[i] == '7')) continue;
		else if (P1[i] == 'f' && P2[i] == 'g') sum *= 3;
		else if (P1[i] == 'f' && (P2[i] == '5' || P2[i] == '6' || P2[i] == '7' || P2[i] == '8')) continue;
		else if (P1[i] == 'g' && (P2[i] == '6' || P2[i] == '7' || P2[i] == '8' || P2[i] == '9')) continue;	
			else if (P2[i] == 'a' && P1[i] == 'b') sum *= 3;
			else if (P2[i] == 'a' && P1[i] == 'c') sum *= 2;
			else if (P2[i] == 'a' && (P1[i] == 'd' || P1[i] == '0' || P1[i] == '1' || P1[i] == '2' || P1[i] == '3')) continue;
			else if (P2[i] == 'b' && P1[i] == 'c') sum *= 3;
			else if (P2[i] == 'b' && P1[i] == 'd') sum *= 2;
			else if (P2[i] == 'b' && (P1[i] == 'e' || P1[i] == '1' || P1[i] == '2' || P1[i] == '3' || P1[i] == '4')) continue;
			else if (P2[i] == 'c' && P1[i] == 'd') sum *= 3;
			else if (P2[i] == 'c' && P1[i] == 'e') sum *= 2;
			else if (P2[i] == 'c' && (P1[i] == 'f' || P1[i] == '2' || P1[i] == '3' || P1[i] == '4' || P1[i] == '5')) continue;
			else if (P2[i] == 'd' && P1[i] == 'e') sum *= 3;
			else if (P2[i] == 'd' && P1[i] == 'f') sum *= 2;
			else if (P2[i] == 'd' && (P1[i] == 'g' || P1[i] == '3' || P1[i] == '4' || P1[i] == '5' || P1[i] == '6')) continue;
			else if (P2[i] == 'e' && P1[i] == 'f') sum *= 3;
			else if (P2[i] == 'e' && P1[i] == 'g') sum *= 2;
			else if (P2[i] == 'e' && (P1[i] == '4' || P1[i] == '5' || P1[i] == '6' || P1[i] == '7')) continue;
			else if (P2[i] == 'f' && P1[i] == 'g') sum *= 3;
			else if (P2[i] == 'f' && (P1[i] == '5' || P1[i] == '6' || P1[i] == '7' || P1[i] == '8')) continue;
			else if (P2[i] == 'g' && (P1[i] == '6' || P1[i] == '7' || P1[i] == '8' || P1[i] == '9')) continue;
		else if (P1[i] == '?' && P2[i] == '?') sum *= 10;
		else if (P1[i] == '?' && (P2[i] == 'a' || P2[i] == 'b' || P2[i] == 'c' || P2[i] == 'd' || P2[i] == 'e' || P2[i] == 'f' || P2[i] == 'g')) sum *= 4;
			else if (P2[i] == '?' && (P1[i] == 'a' || P1[i] == 'b' || P1[i] == 'c' || P1[i] == 'd' || P1[i] == 'e' || P1[i] == 'f' || P1[i] == 'g')) sum *= 4;
		else if ((isdigit(P1[i]) && P2[i] == '?') || (P1[i] == '?' && isdigit(P2[i]))) continue;
		else { sum=0; break; }
	}
	if (sum != 0) cout << sum;
	else cout << sum;
	system("pause");
	return 0;
}