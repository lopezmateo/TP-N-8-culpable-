#include <iostream>
using namespace std;

int main() {
    char respuesta;
    
    cout << "Eres culpable (s/n): "<<endl;
    cin >> respuesta;
    
    if (respuesta == 's') { 
        cout << "El documento dicta que iras a la carcel." << endl;
    } else if (respuesta == 'n') {
	
        cout << "El documento dicta que te iras a casa." << endl;}
        
        return 0;
    }