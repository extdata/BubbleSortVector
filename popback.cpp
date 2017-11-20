#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using std::vector;
using std::cout;
using std::cin;

bool change( int &, int & );
bool change( double &, double & );
void bubblesort( vector< int > & );

int main()
{
	int size;
	int count = 0;
	
	cout << "################################\n";
	cout << "Ordenar valores por bubble sort!\n\n";
	cout << "Os valores do vetor ser" << char(198) << "o gerados aleatoriamente!\n\n";
	cout << "Digite o tamanho do vetor: ";
	cin >> size;
	
	vector< int > array(size);
	
	cout << "\nValores gerados aleatoriamente: ";
	for ( int i = 0; i < array.size(); i++ )
		array[i] = rand() % 30 + 1;
		
	for ( int i = 0; i < array.size(); i++ )
		cout << array[i] << " ";
	
	bubblesort( array );

	cout << "\n\nValores em ordem crescente: ";
	for ( int j = 0; j < array.size(); j++ )
		cout << array[j] << " ";

cout << "\n\nVetor diminuindo de tamanho!\n";

while (!array.empty())
  {
    array.pop_back();
    for ( int j = 0; j < array.size(); j++ )
		cout << array[j] << '\t';
		
	cout << '\n';
  }

	
}

void bubblesort( vector< int > & array )
{
	
	for ( int i = 0; i < array.size() - 1; i++ )
		for ( int j = 0; j < array.size() - 1; j++ )
			if ( change( array[j], array[j+1] ) );
	
}

bool change( int &a, int &b )
{

	int temp;
	if ( a > b )
	{
		temp = a;
		a = b;
		b = temp;
		
		return true;
	}
	else return false;
}

bool change( double &a, double &b )
{
	
	double temp;
	if ( a > b )
	{
		temp = a;
		a = b;
		b = temp;
		
		return true;
	}
	else return false;
}