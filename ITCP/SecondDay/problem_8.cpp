#include <iostream>
using namespace std;

int main(){
    int i,N;
    cout<<"donner la longeur de vec ";
    cin>>N;

    int vec[N];
    for (i=0;i<N;i++)
    {
        cout<<"vec["<<i<<"] = ";
        cin>>vec[i];
    }

    cout<<"affichage \n";
    
    for(i=0;i<N;i++)
    {
        cout<<"vec["<<i<<"]= "<<vec[i]<<" \n";
    }
    cout<<"end of affichage \n";

    int j,A,B;
    cout<<"donner la taille de la matrice spiral ";
    cout<<"donner M ";
    cin>>A;
    cout<<"donner N ";
    cin>>B;
    
    int spiral[A][B],R=N;

    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
         spiral[i][j]=vec[R];
         R--;  
        }
        for(i=0;i<A;i++)
        {
            spiral[i][j]=vec[R];
        }
    }

    for(i=0;i<A;i++)
    {
        for(j=0;j<A;j++)
        {
            cout<<"spirla["<<i<<"]["<<j<<"]= "<< spiral[i][j];
        }
    }
}

int fill_with_zero(R){
    if(R==0)
    
}