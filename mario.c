#include <cs50.h>
#include <stdio.h>
int row = 1;
int col = 0;
int usrn = 7;
int dots = 0;
void make_row();
void make_stack();
int get_pos_int(string p);


int main(void)
{
    usrn = get_pos_int("Height: ");  
    make_stack();  
    
}

//funtions ot make stack
void make_stack(void)
{
   while(row!=usrn+1)

   {
       col = 0;
       make_row();
       printf("\n");
       //printf("Col: %d ", col);
       //printf("Row: %d\n ", row);      
       row++;
   }
}

// funtion to make row
void make_row(void)
{
    dots = usrn-row;
    while(dots != 0)
    {
           printf(" ");
           dots=dots-1;
    }
    
    while(col != row)
    {
           printf("#");
           col++;
    }
}

int get_pos_int(string p)
{
    int n;
    do
    {
        n = get_int("%s", p);
    }
    while (n < 1 || n > 8);    
    return n;
}

