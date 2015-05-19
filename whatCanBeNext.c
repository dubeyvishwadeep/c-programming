/*print some suggestions on the basis of my keyword*/
#include <malloc.h>
#include<strings.h>
#include<stdlib.h>
typedef struct node
{
   struct node * arr[26];
    int i;
}node;

void initialize(node *root)
{
    int i = 0;
    for (i = 0; i<26 ; i++)
    {
        root->arr[i] = NULL;
    }
    root -> i = 0;
}

void insert(node *root, char key[], int i)
{
    int var;
    if ( i < strlen(key) )
    {
        var = key[i] - 97;
        if (root -> arr[var] != NULL)
        {
          insert(root -> arr[var], key, i+1);
        }

        else
        {
            var = key[i] - 97;
            root -> arr[var] = (node *) malloc(sizeof(node));
            initialize(root -> arr[var]);
            insert(root -> arr[var], key, i+1);
        }
    }

    if (i == strlen(key))
    {
        root -> i = 1;
    }

}

void printArray(char path[], int pathlen)
{
    int i = 0;
    for ( i = 0 ; i<pathlen; i++)
        printf("%c", path[i]);

    printf("\n");
}

void printnext(node *root, int value, char path[], int pathlen)
{
    if(root == NULL )
    {
        return;
    }
    int i;
    path[pathlen] = value+97 ;
    pathlen++;

    if (root -> i == 1)
        printArray(path, pathlen);


    for(i=0; i<26; i++)
    {
        if (root -> arr[i] )
        {
            //printf("amazing %d", i);
            printnext(root -> arr[i], i, path, pathlen);
        }

    }

}

void findnext(node *root, char key[], int i)
{
    int var = key[i]-97;
    if (i< strlen(key)-1 && root -> arr[var])
    {
        findnext(root -> arr[var], key, i+1);
    }

    else
    {
        char path[100];
        int j;
        for ( j = 0; j<strlen(key)-1; j++)
        {
            path[j] = key[j];
        }
        printnext( root -> arr[var],key[j]-97, path, j);
    }
}


int main()
{
    node * root = (node *) malloc (sizeof(node));
   initialize(root);
    int var, i;
    char buffer[40];
    char keys [][8] = {"ab","abc","abcde"};
    int size = sizeof(keys)/sizeof(keys[0]);
    for (i = 0 ; i< size; i++)
    {
        insert(root, keys[i], 0);
    }

    findnext(root, "ab", 0);
}
