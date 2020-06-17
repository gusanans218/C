#include <stdio.h>

int main()
//{
//    for (int i = 0; i < 5; i++)    
//    {
//        for (int j = 0; j < 5; j++)   
//        {
//            if (j == i)               
//                printf("*");          
//            else                    
//                printf(" ");       
//        }
//        printf("\n");           
//    }
//
//    return 0;
//}

//{
//	int i = 0, j = 0;
//
//
//	while (i++ < 5)
//
//	{
//		while (++j < i)
//			printf("    ");
//		printf("*");
//		if (i < 5)
//			printf("\n");
//		j = 0;
//	}
//	return 0;
//}

{
	int i = 1, j = 1;
	{ while (i <= 5)
	{
		j = 1;
		while (j <= 5)
		{
			if (i == j)
				printf("*");
			j++;
			printf("    ");
		}
		printf("\n");
		i++;

	}
	}
}