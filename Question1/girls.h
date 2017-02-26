#include<iostream>

class girls{
	public:
		char name[20];
		int attractiveness;
		int maintenance_budget;
		int intelligence;
		int criteria;
		int status;
		
		bool chk(int budget){
			if(budget < maintenance_budget){
				return false;
			}			
			else
				return true;
			
		}

		
};

