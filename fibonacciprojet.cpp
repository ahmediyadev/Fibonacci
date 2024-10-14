#include <iostream>
/*fonction permettant de calculer la suite de fibonacci*/
int fibo(int n) {
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

int main(){
    int nbre;
    std::cout<<"entrer le nombre que tu veux je retrouve la correspondance dans la suite de fibonacci"<<std::endl;
    std::cin>>nbre;/*on recupere le nombre en question*/
    std::cout<<fibo(nbre)<<std::endl;
}