#include<iostream>
#include<string>
#include"input_data.h"
#include"setdata.h"

using namespace std;
		
int main ()
{
	int no_boy = rand()%7+20;
	int no_girl= rand()%7+8;
	
	girls g[no_girl];
	boys b[no_boy];
	
	fill_data(no_boy,no_girl);
	set_data(g,b,no_boy,no_girl);

	relation(g,b,no_boy,no_girl);
	int i;
	for ( i=0 ; i < no_girl ; i++ ) {
			
			if ( g[i].status != -1 ) {
				cout << g[i].name << "\t " << b[g[i].status].name << endl;
			}
	} 
}
