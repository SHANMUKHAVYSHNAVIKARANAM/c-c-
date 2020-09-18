
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
        int numInputs;
        int *input;
        int sum=0;

        printf("Total number of inputs: ");
        scanf("%d", &numInputs);

        input = malloc(numInputs * sizeof(int));

        for (int i=0; i < numInputs; i++)
        {

                scanf("%d", &input[i]);
        }

        // Do Stuff, for example print them:
        for (int i=0; i <= numInputs; i++)
        {

                sum=sum+i;

        }
                        printf("%d", sum);
        free(input);
}
