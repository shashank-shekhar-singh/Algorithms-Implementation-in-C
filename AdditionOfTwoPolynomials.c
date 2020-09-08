#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node1
{
    int coeff;
    int exp;
    struct node *link;
};

struct node2
{
    int coeff;
    int exp;
    struct node *link;
};

struct node3
{
    int coeff;
    int exp;
    int link;
};

struct node1 *root1;
struct node2 *root2;
struct node3 *root3;

void polynomial1();
void polynomial2();
void display1();
void display2();
void addpolynomial();

int main()
{
    int choice;
    //printf("Enter the coefficients and degrees of 1st polynomial: \n");
    while(1)
    {
        printf("\n1. Enter elements of 1st polynomials:\n");
        printf("2. Enter elements of 2nd polynomials:\n");
        printf("3. Display polynomial 1:\n");
        printf("4. Display polynomial 2:\n");
        printf("5. Add polynomials\n");
        printf("6. Exit\n");
        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                polynomial1();
                break;
            case 2:
                polynomial2();
                break;
            case 3:
                display1();
                break;
            case 4:
                display2();
            case 5:
                addpolynomial();
                break;
            case 6:
                exit(1);
                break;
            default:
                printf("\nInvalid choice\n");
        }
    }
}


void polynomial1()
{
    struct node1 *temp, *p;
    temp=(struct node1*)malloc(sizeof(struct node1));
    printf("\nEnter the coefficient (polynomial 1) : ");
    scanf("%d",&temp->coeff);
    printf("Enter the degree (polynomial 1) : ");
    scanf("%d",&temp->exp);
    temp->link = NULL;

    if(root1==NULL)
        root1=temp;
    else
    {
        p=root1;
        while(p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}


void polynomial2()
{
    struct node2 *temp, *p;
    temp=(struct node2*)malloc(sizeof(struct node2));
    printf("\nEnter the coefficient (polynomial 2) : ");
    scanf("%d",&temp->coeff);
    printf("Enter the degree (polynomial 2) : ");
    scanf("%d",&temp->exp);
    temp->link = NULL;

    if(root2==NULL)
        root2=temp;
    else
    {
        p=root2;
        while(p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}


void display1()
{
    struct node1 *p;
    p = root1;
    printf("\n");
    while(p != NULL)
    {
        printf(" %dx",p->coeff);
        printf("(%d) + ",p->exp);
        p=p->link;
    }
}

void display2()
{
    struct node2 *p;
    p = root2;
    printf("\n");
    while(p != NULL)
    {
        printf(" %dx",p->coeff);
        printf("(%d) + ",p->exp);
        p=p->link;
    }
}



void addpolynomial()
{
    struct node1 *p1;
    struct node2 *p2;
    struct node3 *p3;

    root3=(struct node3*)malloc(sizeof(struct node3));

    p1=root1;
    p2=root2;
    p3=root3;
    while(p1 != NULL && p2 != NULL)
    {
        if(p1->exp == p2->exp)
        {
            if(root3==NULL)
            {
                root3->coeff = p1->coeff + p2->coeff;
                root3->exp = p1->exp;
            }
            else
            {
                while(p3->link != NULL)
                {
                    p3 = p3->link;
                }
                struct node3 *temp;
                temp=(struct node3*)malloc(sizeof(struct node3));
                temp->coeff = p1->coeff + p2->coeff;
                temp->exp = p1->exp;
                temp->link = NULL;

                p3->link = temp;
            }
            p1 = p1->link;
            p2 = p2->link;
        }
        else
        {
            if(p1->exp > p2->exp)
            {
                if(root3==NULL)
                {
                    root3->coeff = p1->coeff;
                    root3->exp = p1->exp;
                }
                else
                {
                    while(p3->link != NULL)
                    {
                        p3 = p3->link;
                    }
                    struct node3 *temp;
                    temp=(struct node3*)malloc(sizeof(struct node3));
                    temp->coeff = p1->coeff;
                    temp->exp = p1->exp;
                    temp->link = NULL;

                    p3->link = temp;
                }
                p1 = p1->link;
                p2 = p2->link;
            }
            else
            {
                if(root3==NULL)
                {
                    root3->coeff = p2->coeff;
                    root3->exp = p2->exp;
                }
                else
                {
                    while(p3->link != NULL)
                    {
                        p3 = p3->link;
                    }
                    struct node3 *temp;
                    temp=(struct node3*)malloc(sizeof(struct node3));
                    temp->coeff = p2->coeff;
                    temp->exp = p2->exp;
                    temp->link = NULL;

                    p3->link = temp;
                }
                p1 = p1->link;
                p2 = p2->link;
            }
        }
    }
    printf("The New Polynomial is: \n\n");
    p3=root3;
    while(p3 != NULL)
    {
        printf(" %dx",p3->coeff);
        printf("(%d) + ",p3->exp);
        p3 = p3->link;
    }
}




