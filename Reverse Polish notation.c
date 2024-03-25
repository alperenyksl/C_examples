#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//Bir myMath ifadesi, operatorun islenenlerden sonra yerlestirildigi bir islecler ve islenenler fonksiyonudur.
//Bu,bir myMath ifadesinde operatorun islenenleri takip ettigi anlamina gelir.
struct veriler {
    int altveri;
    struct veriler *next;
};
struct veriler *top = NULL;
int pop()
{
    if (top == NULL)
    {
        printf("Stack is empty. Please first write something.\n");
        return 1;
    }
    else
    {
        struct veriler *gecici = top;
        int altveri = gecici->altveri;
        top = top->next;
        gecici->next = NULL;
        free(gecici);
        return altveri;
    }
}
void push(int veriler)
{
    if (top == NULL)
    {
        struct veriler *yeniveri = (struct veriler*)malloc(sizeof(struct veriler));
        yeniveri->altveri = veriler;
        yeniveri->next = top;
        top = yeniveri;
    }
    else
    {
        struct veriler *yeniveri = (struct veriler*)malloc(sizeof(struct veriler));
        yeniveri->altveri = veriler;
        yeniveri->next = top;
        top = yeniveri;
    }
}
int islem(int rakam1, int rakam2, char islemoperatoru)
{
    int sonuc = 0;
    switch (islemoperatoru)
    {
        case '*':
            sonuc = rakam1 * rakam2;
            break;
        case '+':
            sonuc = rakam1 + rakam2;
            break;
        case '/':
            sonuc = rakam1 / rakam2;
            break;
        case '-':
            sonuc = rakam1 - rakam2;
            break;
        default:
            printf("501! Coded attribute definition not found.");
            return 0;
    }
    return sonuc;
}

int main()
{
    int rakam1;
    int rakam2;
    int sonuc;
    char *ptr;
    char mainislem[30];
    while (1)
    {
        printf("\nPlease enter your myMath process. (If you want to finish this program, please enter 'x' or 'X'):");
        fgets(mainislem, sizeof(mainislem), stdin);
        if (mainislem[0] == 'x' || mainislem[0] == 'X')
            break;
        else
        {
            ptr = mainislem;
            for (; *ptr != '\n'; ptr++)
            {
                if (isdigit(*ptr))
                    {push(*ptr - '0');}
                else if (*ptr == '+' || *ptr == '-' || *ptr == '*' || *ptr == '/')
                {
                    rakam2 = pop();
                    rakam1 = pop();
                    sonuc = islem(rakam1, rakam2, *ptr);
                    push(sonuc);
                }
            }
            printf("\nYour myMath result is: %d\n", pop());
        }
    }
    return 0;
}

