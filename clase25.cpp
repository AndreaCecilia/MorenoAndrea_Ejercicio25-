#include <iostream>

int main(){
std::cout<< "Escriba un numero del 3 al 11 ";
int N;

std::cin >> N;
if(N<3 | N>11){
    
    throw std::domain_error("Hay un error, por favor escriba un número entre 3 y 11 ");
}
else{
std::cout<<relleno(N);
std::cout<<ImprimeCabezas(*N);
}
return 0;
}

int relleno(int N) {
      
 int matriz[N+2][N];
    int i;

    for(i=0;i<N+2;i++){
     int j;
        for(j=0;i<N;i++){
        matriz[i][j] = i+j;
            }
        }
    return matriz;

 } 



 
int ImprimeCabezas(int N) {
  int k;
  int V[1][k];
    int suma=0;
  for(k=0;k<N;k++){
      V[0][k]= matriz[0][k];
  }
      for(kk=0;kk<N+2;k++){
      suma=suma+matriz[kk][0];
  }

    return( V,suma);
    

 } 
