#include <cs50.h>
#include <stdio.h>

void PrintStaircaseWGap(int height);

int main(void){
    int input = 0;
    do{
       input = get_int("Please put in an a number indicating the height at which you want the stairs to generate: ");
    }
    while(input <= 0);
    PrintStaircaseWGap(input);
}

//Print a staircase with a gap
void PrintStaircaseWGap(int height){
   //Print staircase based on difference.
   for(int x = 1; x <= height + 1; x++)
   {
    /*To accommodate positioning the stairs properly
    (before the bottom half wouldn't extend out because of the fact y's value wasn't going high enough(height / 2 + 9 = 14 if height = 10 and x = 9.)
    and y's value originally was only going to height's value or height + 1, but height * 2 extends out the value 1 beyond what x's value goes to or the same.*/
    for(int y = -height / 2 - 1; y < height * 2 + 1; y++)
        {
        //If y's value is between h / 2 - x and h / 2 + x AND y doesn't equal the height / 2 (where the gap is located), print a hash tag.
        if(y >= height / 2 - x && y <= height / 2 + x && y != height / 2){
            printf("#");
        }
        else{
            printf(" ");
        }
     }
    printf("\n");
   }
}
