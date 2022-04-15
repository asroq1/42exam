#include <unistd.h>

int main(int argc, char **argv)
{
	int arr[255] = {0};
	int i, j;

	if (argc == 3)
	{
		i = 1;
		while (i < 3)
		{
			j = 0;
			while (argv[i][j] != 0)
			{
				if (arr[argv[i][j]] == 0)
				{
					arr[argv[i][j]] = 1;
					write(1, &argv[i][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
