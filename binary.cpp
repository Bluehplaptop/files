#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;//display data to console (i.e. as formatted chars)

   cout<<endl<<endl;

ofstream myfile {"abc.bin, iso::binary"};

      if(myfile)
{
	myfile.write(reinterpret_cast<char*>(&a), sizeof (a));
	myfile.write(reinterpret_cast<char*>(&a), sizeof (b));
	myfile.write(reinterpret_cast<char*>(&a), sizeof (c));
}
	else
cout << "There is an error opening abc.bin";
 myfile.close ();
 
   return 0;
}
