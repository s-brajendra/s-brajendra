#include<stdio.h>
#include<string.h>
int check(int x){
if(x==5){
    return x +2;
}
if(x==13){
    return x-1;
if(x==99){
    return x -88;
}
if(x==54){
    return x -18;
if(x==18){
    return x +2;
if(x==78){
    return x - 25;

}
int main(){


    int counter1=0,counter2=0;
    int turn;
    int num;
    for(turn=1;turn>-1;turn++){

        if(turn%2!=0){



        scanf("\n%d",&num);
        counter1 = counter1 + num;
       counter1 = check(counter1);
        printf("you are at p1: %d\n",counter1);


        }

        if(turn%2==0){

            int num ;

        scanf("\n%d",&num);
        counter2 = counter2 + num;
       counter2 = check(counter2);
        printf("you are at p2: %d\n",counter2);



        }
    }
        return 0;
}
