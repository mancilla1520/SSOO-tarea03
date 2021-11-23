//Jose Mancilla 20.476.565-0


#include<iostream>
#include <thread>

using namespace std;

void func(int n){
   if ((n % 2)!=0)
    {
        cout << "Impar: "<< n << " PID: "<< getpid <<  endl;
       
    }

}


int main() {
    int a=0, b=1, c=0, contador=0, limite = 5, ContadorPar=0;

	
    while (contador <= limite) {
        cout <<"fibonacci: " << c << " PID: "<<getpid << endl;
        _sleep(500);
        a = b;
        b = c;
        c = a+b;
        contador = contador+1;
        thread t1(func, ref(c));
        t1.join();
        
        


    }

    
    return 0;


}
    