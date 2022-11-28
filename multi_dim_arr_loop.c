#include<stdio.h>
void main() {
    printf("multi-dimensional or 3d arrays\n\n");

    char m_arr[2][2][2] = {

        {
            {'a', 'b'},
            {'c', 'd'}
        }
        {
            {'e', 'f'},
            {'g', 'h'} 
        },
    };
    
}
printf("%c | ", m_arr[0][0][0]);
printf("%c | ", m_arr[0][0][1]);
printf("%c | ", m_arr[0][1][0]);
printf("%c | ", m_arr[0][1][1]);