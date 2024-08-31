#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//подготовка игровых придметов, назначение координат стартового положения мяча и ракеток 




struct ball_coord {
    int ball_x;
    int ball_y;
} ball;

struct rocket_coord_1 {
    int rocket_x_1;
    int rocket_x_2;
    int rocket_x_3;
    int rocket1_y;
} rocket_1;

struct rocket_coord_2 {
    int rocket2_x_1;
    int rocket2_x_2;
    int rocket2_x_3;
    int rocket2_y;
} rocket_2;

int main(){

    char random_hz;
    char push_player;
    char to_start;

    int ball_rand_1;
    int ball_velocity_x;
    int ball_velocity_y;
    
    

    srand(time(0));

    printf("Добро пожаловать в нашу игру КИНГ ПОНГ.\n");
    printf("Для начала игрок 1 и 2 должны загадать число от 0 до 20 у кого число будет ближе к числу на экране тот и начинает!.\n");
    printf("Введите старт для выпадения числа.\n");

    random_hz = getchar();

    if (random_hz == 's') {
        int random_number = (rand()%20) +1 ;
        printf("Выпало число: %d\n", random_number);
    //первый переход

        printf("Если число игрока 1 ближе чем число игрока 2, то нажми 'w'.\n");
        printf("Если победил игрок 2, то нажми 'k'.\n");

        getchar(); //очистка буфера перед повторным вводом
        push_player = getchar();

        if (push_player == 'w') {
            printf("Начинает игрок 1");
        } else {
            printf("Начинает игрок 2");
        }

  } else{

        printf("Неправильный ввод попробуйсте ввести 'старт'!.\n");
        getchar();
        random_hz = getchar();

        if (random_hz == 's') {
            int random_number = (rand()%20) +1 ;
            printf("Выпало число: %d\n", random_number);
            
            printf("Если число игрока 1 ближе чем число игрока 2, то нажми 'w'.\n");
            printf("Если победил игрок 2, то нажми 'k'.\n");

            getchar();
            push_player = getchar();

            if (push_player == 'w') {
                printf("Начинает игрок 1");
          } else {
                printf("Начинает игрок 2");
           } else {
            printf("Ты дважды ввел не верно!! Ты слишком слаб для Кинг Понга, пока!.\n");
            sleep(7);
            printf("СЛабый!.\n");
            sleep(2);
            exit(0);

        }
    //после определения того кто начниает, сделаем присвоение координат в стартовое положение на доске

    if (push_player =='w') {
        rocket_1.rocket_x_1 = 0;
        rocket_1.rocket_x_2 = 1;
        rocket_1.rocket_x_3 = 2;
        rocket_1.rocket1_y = 10; //тут надо будет менять 

        ball.ball_x = 1;
        ball.ball_y = 11;

    printf("Игроки на позиции, для старта нажмите 'G'\n.");
    to_start = getchar();
    if (to_start == 'g') {
        printf("3");
        sleep(1.5);
        printf("2");
        sleep(1.5);
        printf("1");
        sleep(1.5);
        printf("GO!");

        //стартовый удар по мячу 
        srand(time(0));

        int ball_rand = (rand()%2)+1; 
        if (ball_rand == 1) {         //первый удар вправый край
            ball_velocity_x += 1;
            ball_velocity_y +=1;
      } else {                       //первый удар левый край 
            ball_velocity_x -= 1;
            ball_velocity_y += 1;
            }
        while (ball.ball_y < 10 || ball.ball_y > 70) {
            ball.ball_x += ball_velocity_x;
            ball.ball_y += ball_velocity_y;

            if (ball.ball_x == 0 ||  //пересечени с ракетками 
                ball.ball_x == 25 || 
                ball.ball_x == rocket_1.rocket_x_1 || 
                ball.ball_x == rocket_1.rocket_x_2 || 
                ball.ball_x == rocket_1.rocket_x_3 ) {
                ball_velocity_x = -ball_velocity_x 
            }   
                (ball.ball_y == 10 || // вертикальное движение
                ball.ball_y == 75) {
                ball_velocity_y = -ball_velocity_y;
            }
            
        }

    }     
 


    }  

    if (push_player == 'k') {
        rocket_2.rocket2_x_1 = 24;
        rocket_2.rocket2_x_2 = 23;
        rocket_2.rocket2_x_3 = 22;
        rocket_2.rocket2_y = 75;

        ball.ball_x = 23;
        ball.ball_y = 74;
    }    




       
    }






    }

    return 0;




    
}

