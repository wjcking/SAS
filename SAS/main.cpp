#include <iostream>
#include <stdio.h>

using namespace std;

const char 
  T0 = '0',
  C = 'c';
static char
  I = C,
  L = '1';

//------l--------q-------
//pth'ch5.argv^~,s|-~^c|?
//------p--------z-------
int main(int argc, char** argv) 
{
  try
	{
		//dup'3t (char)args fls^ash;fst^c
		while (L != I && argv[static_cast<int>(I)] != &C)
		{
			printf("%d.%s", L, argv[static_cast<int>(I)]);
			L++; //mem mov add
		}
	}
	catch(const char* e)
	{
	  while (L == I)
		{
			printf("C:%d.%s", I, argv[static_cast<int>(I)]);
			I = L;
		}
	}
	return 0;
}
