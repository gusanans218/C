#include <stdio.h>
int main()

{/*int x=10, y=20, temp=0;
	printf("교환 전 : x=%d, y=%d\n", x, y );
	temp = x;
	x = y;
	y = temp;
	printf("교환 후 : x=%d, y=%d", x, y);

	return 0;*/
/*int n=0, a=0, cnt=0;
		printf("정수 입력 :");
		scanf("%d", &n);

		while (n !=0)
		{
			a = n % 10;
			printf("%d", a);

			cnt = cnt + n;
			n = n / 10;
		}
		printf("%d\n", cnt);

		return 0;
	}*/
/*int a;
	printf("달 입력 :");
	scanf("%d", &a);
	switch (a)
	{
	case 1:

	case 2:

	case 8:
		printf("방학");
		break;
	case 3:

	case 4:

	case 5:
		printf("온라인");
		break;
	 default:
		printf("등교");
		break;
	}
	return 0;
}*/
/*int n, i, s=0, cnt=0;
printf("수 입력 : ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
	if (n % i == 0)
	{
		printf("%d\n", i);
		s = s + i;
		cnt++;


	}

}
printf("합계 : %d\n", s);
printf("개수 : %d\n", cnt);

}

	*/
/*int n, s = 0;
	do
	{
		printf("입력 : ");
		scanf("%d", &n);
		s = s + n;
	} while (n != 0);


		printf("%d", s);

	return 0;
}
*/
/*int i, j, n=65;
for (i = 1; i <= 3; i++)
{
	for (j = 1; j <= i; j++)

		printf("  %c", n);
	n++;
	printf("\n");
}
}*/
/*int i, j, n = 'A';
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 3 - i; j++)
		{
			printf("@");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%d", i);
		}
		printf("\n");

	}*/
/*int a[5], i, max=100;
	for (i = 0; i <= 4; i++)
	{
		scanf("%d", &a[i]);
		printf("  %d", a[i]);
		if (max <= a[i])
		{
			max = a[i];
	    }
		
	}
	printf("\n");
	for (i = 0; i <= 4; i++)
	{
		printf("  %d", a[4-i]);
	}
	return 0;
	}*/
int a, b;
scanf("%d%d", &a, &b);
printf("%d", a + b);

}