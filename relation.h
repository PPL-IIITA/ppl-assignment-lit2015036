#include<iostream>
#include"girls.h"
#include"boys.h"
void relation( girls g[],boys  b[],int no_boy,int no_girl){
	int i,j,m;
	int tamp;
	for ( i = 0 ; i < no_girl ; i++ ) {
		if ( g[i].status == -1 ) {
			m = 0;
			tamp = -1;
			switch ( g[i].criteria ) {
				case 1 ://attractive
					for ( j = 0 ; j < no_boy ; j++ ) {
						if ( m < b[j].attractiveness && g[i].chk(b[j].budget )&& b[j].status == -1 && b[j].min_attractiveness <= g[i].attractiveness ) {
							m = b[j].attractiveness;
							tamp = j;
						}
					}
					break;
				 case 2 ://inteligent
                                        for ( j = 0 ; j < no_boy ; j++ ) {
                                                if ( m < b[j].intelligence && g[i].chk(b[j].budget ) && b[j].status == -1 && b[j].min_attractiveness <= g[i].attractiveness) {
                                                        m = b[j].intelligence;
                                                        tamp = j;
                                                }
                                        }
                                        break;

				case 3 ://rich
					for ( j = 0 ; j < no_boy ; j++ ) {
						if ( m < b[j].budget && g[i].chk(b[j].budget  ) && b[j].status == -1 && b[j].min_attractiveness <= g[i].attractiveness ) {
							m = b[j].budget;
							tamp = j;
						}
					}
					break;
			}
			
			if( tamp != -1 ) {
				g[i].status = tamp;
				b[tamp].status = i;
			}
		}
	}
}

