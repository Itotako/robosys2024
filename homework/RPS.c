#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    srand((unsigned int)time(NULL));

    int num1 = (rand() %3) + 1;
    printf("最初はグー！じゃんけんぽん！\n何を出す?数字を入力してください。\n1:グー\n2:チョキ\n3:パー\n");
    int num2;
    printf("数字を入力してください:");
    scanf("%d", &num2);
    
    if(num1 == num2){
        if(num1 == 1){
	    printf("相手:グー\nあなた:グー\n");
	   }else if(num1 == 2){
            printf("相手:チョキ\nあなた:チョキ\n");
	   }else if(num1 == 3){
            printf("相手:パー\nあなた:パー\n");
	   }
	printf("あいこです。次は何を出す?数字を入力してください。\n1:グー\n2:チョキ\n3:パー\n");
	int num2;
	printf("数字を入力してください:");
	scanf("%d", &num2);
	int num1 = (rand() %3) + 1;
    }else if(num1 == 1){
         if(num2 == 2){
		 printf("相手:グー\nあなた:チョキ\nあなたの負け\n");
	 }else{
		 printf("相手:グー\nあなた:パー\nあなたの勝ち\n");
	 }
    }else if(num1 == 2){
         if(num2 == 1){
                 printf("相手:チョキ\nあなた:グー\nあなたの勝ち\n");
         }else{
                 printf("相手:チョキ\nあなた:パー\nあなたの負け\n");
         }
    }else if(num1 == 3){
         if(num2 == 1){
                 printf("相手:パー\nあなた:グー\nあなたの負け\n");
         }else{
		 printf("相手:チョキ\nあなた:パー\nあなたの勝ち\n");
         }
　　}

    return 0;
}
