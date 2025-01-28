#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double A[][N]){
    for(int i = 0;i <N;i++){
        cout << "Row " << i+1 << ": ";
        for(int j = 0;j <N;j++){
            cin >> A[i][j];
        }
    }
}

void showMatrix(const bool B[][N]){
    for(int i = 0;i <N;i++){
        for(int j = 0;j <N;j++){
            if(!B[i][j])
            cout << 0 << " ";
            else cout << 1 << " ";
        }
        cout << endl;
    }
}

void findLocalMax(const double A[][N], bool B[][N]){
    for(int i = 0;i <N;i++){
        for(int j = 0;j <N;j++){
		    
            if(A[i][j]>=A[i][j-1] && A[i][j]>=A[i][j+1] && A[i][j]>=A[i-1][j] && A[i][j]>=A[i+1][j]){
				B[i][j]=true;
			}
			else B[i][j]=false;
        }
    }
    for(int k=0;k<N;k++) if(true) B[0][k]=false;
	for(int k=0;k<N;k++) if(true) B[N-1][k]=false;
	for(int M=0;M<N;M++) if(true) B[M][0]=false;
	for(int M=0;M<N;M++) if(true) B[M][N-1]=false;
}