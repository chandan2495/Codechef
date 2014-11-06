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
int i,j;

for(i=0;i<M1.matDimension;i++)
{
    for(j=0;j<M1.matDimension;j++)
        {
            this->resultMatrix.matValues[i][j]=M1.matValues[i][j]+M2.matValues[i][j];
        }
}
return this->resultMatrix;
}

matrixType MatrixADT::subtract(matrixType M1, matrixType M2){
//Insert code here
int i,j;

for(i=0;i<M1.matDimension;i++)
{
    for(j=0;j<M1.matDimension;j++)
        {
            this->resultMatrix.matValues[i][j]=M1.matValues[i][j]-M2.matValues[i][j];
        }
}
return this->resultMatrix;
}

matrixType MatrixADT::multiply(matrixType M1, matrixType M2){
//Insert code here
int i,j,k;

for(i=0;i<M1.matDimension;i++)
{
    for(j=0;j<M1.matDimension;j++)
        {
            for(k=0;k<M1.matDimension;k++)
            this->resultMatrix.matValues[i][j]+=M1.matValues[i][k]*M2.matValues[k][j];
        }
}
return this->resultMatrix;
}

void MatrixADT::intializeResultMatrix(int dim){
 resultMatrix.matDimension=dim;
 int i,j;
 for(i=0;i<dim;i++)
{
    for(j=0;j<dim;j++)
    {
     resultMatrix.matValues[i][j]=0;
    }
}

}

int main(){

    MatrixADT maX;
    matrixType M1, M2;
    char op;
    int dim,i,j;
    cin>>dim;
    cin>>op;

M1.matDimension=dim;
M2.matDimension=dim;
for(i=0;i<dim;i++)
{
    for(j=0;j<dim;j++)
    {
        cin>>M1.matValues[i][j];
    }
}

for(i=0;i<dim;i++)
{
    for(j=0;j<dim;j++)
    {
        cin>>M2.matValues[i][j];
    }
}

maX.intializeResultMatrix(dim);

   if(op=='+')
   {
    maX.add(M1,M2);
   }
  else if(op=='-')
   {
    maX.subtract(M1,M2);
   }
   else if(op=='*')
   {
    maX.multiply(M1,M2);
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
    cout <<"Done";
}

