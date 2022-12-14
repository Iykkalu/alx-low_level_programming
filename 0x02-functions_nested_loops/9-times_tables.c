

Search or jump to…

Pull requests

Issues

Codespaces

Marketplace

Explore

 

@Iykkalu 

Willysammy

/

alx-low_level_programming

Public

Code

Issues

Pull requests

Actions

Projects

Security

Insights

alx-low_level_programming/0x02-functions_nested_loops/9-times_table.c

@Willysammy

Willysammy Task 9

Latest commit 23c6c25 on Sep 14

 History

 1 contributor

37 lines (32 sloc)  464 Bytes



#include "main.h"



/**

 * times_table - Function that print the multiplication table

 * @i, r: Variables to declare

 * Return: void

 */

void times_table(void)

{

	int i;

	int j;

	int k;



	for (i = 0; i <= 9; i++)

	{

		_putchar('0');



		for (j = 1; j <= 9; j++)

		{

			_putchar(',');

			_putchar(' ');



			k = i * j;

			if (k <= 9)

			{

				_putchar(' ');

			}

			else

			{

				_putchar((k / 10) + '0');

			}

			_putchar((k % 10) + '0');

		}



		_putchar('\n');

	}

}
