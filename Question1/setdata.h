#include<iostream>
#include<string>
#include"relation.h"

void set_data(girls g[], boys b[], int no_boy,int no_girl) {
	int i;
	char name[20];
	int attract,b1,intell,c,min_attract;
	FILE *fp;
	fp = fopen("girls.txt","r");
	
	for ( i=0 ; i < no_girl ; i++ ) {
		fscanf(fp,"%s %d %d %d %d",g[i].name,&attract,&b1,&intell,&c);
		g[i].attractiveness = attract;
		g[i].maintenance_budget = b1;
		g[i].intelligence = intell;
		g[i].criteria = c;
		g[i].status = -1;
	}
	fclose(fp);
	
	fp = fopen("boys.txt","r");
        for ( i=0 ;i < no_boy ; i++ ) {
                fscanf(fp,"%s %d %d %d %d",b[i].name,&attract,&min_attract,&b1,&intell);
                b[i].attractiveness = attract;
		b[i].min_attractiveness = min_attract;
       		b[i].budget = b1;
                b[i].intelligence = intell;
                b[i].status = -1;
        }
        fclose(fp);

}
