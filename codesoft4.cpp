#include <stdio.h>
#include <string.h>
int main() 
{
    char tasks[50][100];
    int completed[50] = {0};
    int count = 0;
    int choice, n, i;
    while(choice!=5)
	{
        printf("\n1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Mark Task as Completed\n");
        printf("4. Delete Task\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if(choice == 1)
		{
            printf("Enter task: ");
            getchar();
            fgets(tasks[count], 100, stdin);
            tasks[count][strcspn(tasks[count], "\n")] = 0;
            completed[count] = 0;
            count++;
        }
        else if(choice == 2) 
		{
            if(count == 0) 
			{
                printf("No tasks available.\n");
            } 
			else 
			{
                for(i = 0; i < count; i++) 
				{
                    printf("%d. [%s] %s\n", i + 1,
                    completed[i] ? "Completed" : "Pending",
                    tasks[i]);
                }
            }
        }
        else if(choice == 3) 
		{
            printf("Enter task number to mark completed: ");
            scanf("%d", &n);

            if(n >= 1 && n <= count)
            {
                completed[n - 1] = 1;
            }
			else
			{
                printf("Invalid task number\n");
            }
        }
        else if(choice == 4) 
		{
            printf("Enter task number to delete: ");
            scanf("%d", &n);
            if(n < 1 || n > count) 
			{
                printf("Invalid task number\n");
            } 
			else 
			{
                for(i = n - 1; i < count - 1; i++) 
				{
                    strcpy(tasks[i], tasks[i + 1]);
                    completed[i] = completed[i + 1];
                }
                count--;
                printf("Task deleted.\n");
            }
        }

    }
    return 0;
}
