#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int enchant = 0;	

void startenchant(void);

int main() {
	int menu = 1;
	 
	printf("��ȭ �ý���\n");
	
	while( 1 ) {
		printf("���� ��ȭ�ܰ� : %d��\n\n", enchant);
		printf("1. ��ȭ     0. ����\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch( menu ) {
			case 1:	//1. ��ȭ 
				startenchant();
				break;
			case 0:	//0. ���� 
				return 0;
				break;
			default:				
				printf("!�Է��� �߸��Ǿ����ϴ�.\n\n");
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
		printf("��ȭ �ܰ谡 �ִ��Դϴ�.\n");
		return;
	}
	
	 	
	success = rand() % 100;	
		
	if(success < chance) { 
		printf("��ȭ ����! ��ȭ �ܰ谡 ����Ͽ����ϴ�.\n\n");
		enchant++;	
	} else {  
		printf("��ȭ ����! ");
		success = rand() % 100;	 

		if(success < 95) {
			printf("��ȭ �ܰ谡 �����Ǿ����ϴ�.\n\n");
		} else {
			printf("��ȭ �ܰ谡 �϶��Ͽ����ϴ�.\n\n");
			enchant--;	
		}
	}
}


