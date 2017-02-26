#include<iostream>
#include<stdlib.h>
#include<stdio.h>
void fill_data(int no_boy,int no_girl){
		char *name;
		int att,budgt,cri,intel,m_att;
		char data;
		name = (char*)malloc(11*sizeof(char));
		
		int ngirl = no_girl;
		int nboy = no_boy;
		FILE *fp1,*fp2;
		fp1 = fopen("girls.txt","w");
		int i,j;
		
		for(i=0;i<ngirl;i++){
			for(j=0;j<10;j++){
			name[j] = rand()%26 + 65;
				
			}
			name[j] = '\0';
			att = rand()%10 ;
			budgt = rand()%4000 + 6000;
			cri = rand()%10;
			intel = rand()%3;
	
			fprintf(fp1,"%s %d %d %d %d \n",name,att,budgt,cri,intel);
		
		
		}
		fclose(fp1);
		fp2 = fopen("boys.txt","w");
		
		for(i=0;i<nboy;i++){
			for(j=0;j<10;j++){
				name[j] = rand()%26 + 65;
			
			}
			name[j] = '\0';
			att = rand()%10 ;
			m_att = rand()%10 ;
			cri = rand()%10;
			budgt = rand()%5000 + 9000;
	
			fprintf(fp2,"%s %d %d %d %d\n",name,att,cri,budgt,m_att);
		
			
		}
		fclose(fp2);
}
	
