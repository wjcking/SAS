#include <iostream>
#include <stdio.h>

using namespace std;

const char 
  T0 = '0',
  C = 'c';
static char
  I = C,
  L = '1';

//#dzp.1^lsh
//------l--------q-------
//pth'ch5.argv^~,s|-~^c|?
//------p--------z-------
int main(int argc, char** argv) 
{
	try
	{
		//vkr:~crx-static_cast atoi(I)
		//dup'3t argc&argv fls^ash;fst^c
		while (L != I && argv[static_cast<int>(I)] != &C)
		{
			cout<<L<<argv[static_cast<int>(I)];
			L++;
		}
	}
	catch(const char* e)
	{
	  while (L == I)
		{
			cout<<C<<argv[static_cast<int>(I)];	
			I = L;
		}
	}
	return 0;
}
