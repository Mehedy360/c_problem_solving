#include <stdio.h>

#define MAX_LENGTH 100

// - Users can take input as many times as the want
// - The application will terminate when use enter 0
// - Users can see a list of menu item and select from it
// - Users can store integer numbers inside a list
// - Users can perform CRUD (Create, Read, Update and Delete) operations on the list
// - Users can able to clear the list
int main(void)
{
  system("cls");
  int data[MAX_LENGTH];
  int length = 0;
  int value, index;
  int input;
  do
  {
    printf("Menu: \n");
    printf("____________\n");
    printf("1. Add\n");
    printf("2. Inset\n");
    printf("3. Edit\n");
    printf("4. Delete\n");
    printf("5. Display\n");
    printf("6. clear\n");
    printf("0. Exit\n");
    printf("____________\n");
    printf("Enter A Menu: \n");
    scanf("%d", &input);
    system("cls");
    printf("_____ Result _____\n");
    switch (input)
    {
    case 0:
      // Do nothing, just terminate
      break;
    case 1:
      // Add operation
      printf("Please Enter an Integer Value: \n");
      scanf("%d", &value);
      data[length] = value;
      printf("%d inserted at index %d\n", value, length);
      length++;
      break;
    case 2:
      // Insert operation
      printf("Please Enter an Integer Value: \n");
      scanf("%d", &value);
      printf("Please Enter an Index Between 0 - %d: \n", length);
      scanf("%d", &index);

      for (int i = length; i > index; i--)
      {
        data[i] = data[i - 1];
      }
      data[index] = value;
      length++;
      printf("%d Inserted at Index %d \n", value, index);
      break;
    case 3:
      // Edit operation
      printf("Please Enter an Index Between 0 - %d: \n", length - 1);
      scanf("%d", &index);
      printf("Please Enter a New Integer Value: \n");
      scanf("%d", &value);
      data[index] = value;
      printf("%d updated at index %d\n", value, index);
      break;
    case 4:
      // Delete Operation
      printf("Please Enter an Index Between 0 - %d: \n", length - 1);
      scanf("%d", &index);
      int deleted_value = data[index];
      for (int i = index; i < length; i++)
      {
        data[i] = data[i + 1];
      }
      data[length] = 0;
      length--;
      printf("%d deleted at index %d\n", deleted_value, index);
      break;
    case 5:
      // Display item using a for loop
      if (length == 0)
      {
        printf("There is no data\n");
      }
      else
      {
        printf("DATA: ");
        for (int i = 0; i < length; i++)
        {
          printf("%d\t", data[i]);
        }
        printf("\n");
      }
      break;
    case 6:
      // Data clear
      for (int i = 0; i < length; i++)
      {
        data[i] = 0;
      }
      length = 0;
      printf("Data Cleared\n");
      break;
    default:
      printf("Invalid Input\n");
      break;
    }
    printf("_____ Result End _____\n\n");
  } while (input != 0);

  system("cls");
  printf("Thanks for using out application. Good bye");
  return 0;
}