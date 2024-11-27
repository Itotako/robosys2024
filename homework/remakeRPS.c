#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    while (1) {
        int num1 = (rand() % 3) + 1;

        // プレイヤーの手を入力
        printf("最初はグー！じゃんけんぽん！\n");
        printf("何を出す?数字を入力してください。\n1: グー\n2: チョキ\n3: パー\n");
        int num2;
        printf("数字を入力してください: ");
        scanf("%d", &num2);

        // 入力チェック
        if (num2 < 1 || num2 > 3) {
            printf("不正な入力です。もう一度入力してください。\n");
            continue;
        }

        // 結果の表示
        const char *choices[] = {"グー", "チョキ", "パー"};
        printf("相手: %s\nあなた: %s\n", choices[num1 - 1], choices[num2 - 1]);

        if (num1 == num2) {
            printf("あいこです。もう一度！\n");
            continue;
        } else if ((num2 == 1 && num1 == 2) || (num2 == 2 && num1 == 3) || (num2 == 3 && num1 == 1)) {
            printf("あなたの勝ちです！\n");
        } else {
            printf("あなたの負けです。\n");
        }

        break;
    }

    return 0;
}

