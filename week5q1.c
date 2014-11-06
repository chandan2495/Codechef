#include <iostream>
#include <cstring>

using namespace std;

struct matrixType{
    int matDimension;
    int matValues[10][10];
};

class MatrixADT{

    private:
        matrixType resultMatrix;

    public:

       //Member function declarations

        void intializeResultMatrix(int);
matrixType add(matrixType, matrixType);
        matrixType subtract(matrixType,matrixType);
        matrixType multiply(matrixType,matrixType);
        void printResult();
};

//Member functions of Matrix class to be defined here
matrixType MatrixADT::add(matrixType M1, matrixType M2){
//Insert code here
}

matrixType MatrixADT::subtract(matrixType M1, matrixType M2){
//Insert code here
}

matrixType MatrixADT::multiply(matrixType M1, matrixType M2){
//Insert code here
}

void MatrixADT::intializeResultMatrix(int dim){

}

int main(){

    MatrixADT maX;
    matrixType M1, M2;
    char op;
    int dim;
    cin>>dim;
    cin>>op;


   M1.initializeResultMatrix(dim);
   M2.initializeResultMatrix(dim);


   if(op=='+')
   {
    max=add(M1,M2);
   }
  else if(op=='-')
   {
    max=subtract(M1,M2);
   }
   else if(op=='*')
   {
    max=multiply(M1,M2);
   }




maX.printResult();

}


void MatrixADT::printResult(){

    int i,j;
    for (i=0;i<resultMatrix.matDimension;i++){
        for (j=0; j<resultMatrix.matDimension-1;j++){
            cout<<resultMatrix.matValues[i][j]<<" ";
        }
       cout <<resultMatrix.matValues[i][j]<<"\n";
    }
    cout <<”Done”;
}

