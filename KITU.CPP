#include <iostream>
using namespace std;

int main() {
    int n, count = 0;cin >> n;
    for (int i = 1; i < n; i++) {
		 char c; cin  >> c;
		       switch (c){
        	case 'u': case 'U':
        	case 'e': case 'E':
        	case 'o': case 'O':
        	case 'a': case 'A':
        	case 'i': case 'I':
        		++ count;
        		break;
        		default : break;
		} /* 
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            count++;
        }
      */  
		}
    if (count > 0) {
        cout << count;
    } else {
        cout << "NONE";
    }

    return 0;
}
