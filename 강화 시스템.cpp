#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int enchant = 0;	

void startenchant(void);

int main() {
	int menu = 1;
	 
	printf("강화 시스템\n");
	
	while( 1 ) {
		printf("현재 강화단계 : %d강\n\n", enchant);
		printf("1. 강화     0. 종료\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch( menu ) {
			case 1:	//1. 강화 
				startenchant();
				break;
			case 0:	//0. 종료 
				return 0;
				break;
			default:				
				printf("!입력이 잘못되었습니다.\n\n");
				break;
		}
	}
}

void startenchant(void) {
	int chance = 0;	
	int success;	
	
	srand(time(NULL));
	
	if(enchant < 9) { 
		chance = 90 - enchant * 10;
		
	} else if(enchant == 9) { 
		chance = 3;	
	} else if(enchant == 10) { 
		printf("강화 단계가 최대입니다.\n");
		return;
	}
	
	 	
	success = rand() % 100;	
		
	if(success < chance) { 
		printf("강화 성공! 강화 단계가 상승하였습니다.\n\n");
		enchant++;	
	} else {  
		printf("강화 실패! ");
		success = rand() % 100;	 

		if(success < 95) {
			printf("강화 단계가 유지되었습니다.\n\n");
		} else {
			printf("강화 단계가 하락하였습니다.\n\n");
			enchant--;	
		}
	}
}


