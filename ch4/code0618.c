/*
�����ѧO�X�����Ľd��
*/

#include  <stdio.h>

int	 x = 700;					/* �ɮת����Ľd�� */

void print_x(void)
{
     printf("x = %d\n", x);
}

int main(void)
{
    int	 i;
    int	 x = 800;				/*��Ƭq�����Ľd�� */

    print_x();

    printf("x = %d\n", x);

    for (i = 0; i < 5; i++) {
        int	 x = i * 100;		/*��Ƭq�����Ľd�� */
        printf("x = %d\n", x);
    }
	
    printf("x = %d\n", x);

    return (0);
}
