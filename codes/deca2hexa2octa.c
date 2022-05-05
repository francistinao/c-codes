#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


typedef struct node
{
    char data;
    struct node * next;
}node;

typedef struct root
{
    int size;
    node * head;
}root;

typedef struct binary
{
    char bin[5];
    struct binary * next;

}binary;

root * create_list(node * n)
{
    root * newroot = (root *)malloc(sizeof(root));
    newroot->size = 0;
    newroot->head = n;

    return newroot;

}

node * create_node()
{
    node * newnode = (node *)malloc(sizeof(node));
    newnode->next = NULL;

    return newnode;
}

binary * create_bin()
{
    binary * newbin = (binary *)malloc(sizeof(binary));
    int i;
    for(i = 0; i < 4; i++)
    {
        newbin->bin[i] = '0';
    }
    newbin->bin[4] = '\0';

    newbin->next = NULL;
    return newbin;
}

binary * insert_bin(binary * b, binary * newbin)
{
    newbin->next = b;

    return newbin;
}

node * insert_node(root * r, char data)
{
    if(r->size > 0)
    {
        node * newnode = create_node();
        newnode->data = data;

        newnode->next = r->head;
        r->size++;

        return newnode;
    }
    else
    {
        r->head->data = data;
        r->size++;

        return r->head;
    }
}

void insert_node_end(root * r, node * n, char data)
{
    if(n->next == NULL)
    {
        node * newnode = create_node();
        newnode->data = data;
        n->next = newnode;

        r->size++;
    }
    else
        insert_node_end(r, n->next, data);
}

void print_list(node * head)
{
    if(head->next == NULL)
        printf("%c\n", head->data);
    else
    {
        printf("%c", head->data);
        print_list(head->next);

    }
}

char hexa_characters(int num)
{
    if(num >= 10 && num <= 15)
    {
        switch(num)
        {
            case 10:
                return 'A';
            case 11:
                return 'B';
            case 12:
                return 'C';
            case 13:
                return 'D';
            case 14:
                return 'E';
            case 15:
                return 'F';
        }
    }

    return '0';
}


int char_to_int(char c)
{
    switch(c)
    {
        case 'A':
            return 10;
        case 'B':
            return 11;
        case 'C':
            return 12;
        case 'D':
            return 13;
        case 'E':
            return 14;
        case 'F':
            return 15;
        default:
            return c - '0';
    }
}



root * decimal_to_hexa(int decimal)
{

    root * hexa = create_list(create_node());

    while(decimal != 0)
    {
        int remainder = decimal % 16;
        decimal /= 16;

        char hexchar = hexa_characters(remainder);

        if(hexchar != '0')
            hexa->head = insert_node(hexa, hexchar);
        else
            hexa->head = insert_node(hexa, remainder + '0');


    }

    return hexa;

}

node * convert_to_bin(binary * binlist, node * n)
{
    int hex = char_to_int(n->data);

    int curr_size = 3;
    binary * newbin = create_bin();

    while(hex > 0)
    {
        int remainder = hex % 2;
        hex /= 2;

        newbin->bin[curr_size] = remainder;
        curr_size--;
    }
    return binlist;
}

int bin_to_decimal(root * binlist)
{
    int decimal = 0;
    node * curr_node = binlist->head;

    int i;
    for(i = binlist->size - 1; i >= 0; i--)
    {
        int power = (int)powf(2, i);
        decimal +=  ((curr_node->data - '0') * power);
        curr_node = curr_node->next;
    }

    return decimal;
}

root * hexa_to_octal(node * hexa)
{


    node * curr_node = hexa;
    root * binlist = create_list(create_node());

    //converting to binary first
    while(curr_node != NULL)
    {

        binlist->head = convert_to_bin(binlist, curr_node);
        curr_node = curr_node->next;

    }

    root * octal = create_list(create_node());
    int decimal = bin_to_decimal(binlist);



    while(decimal != 0)
    {
        int remainder = decimal % 8;
        decimal /= 8;

        octal->head = insert_node(octal, remainder + '0');
    }

    return octal;
}

node * octal_to_hexa(node * n)
{

}

int main()
{

    int decimal;
    printf("Input a number to convert: ");
    scanf(" %d", &decimal);

    printf("decimal to hexa: ");
    root * hexa = decimal_to_hexa(decimal);
    print_list(hexa->head);

    printf("hexa to octal: %o\n", decimal);
    printf("octal to hexa: %x\n", decimal);
    /*
    root * octal = hexa_to_octal(hexa->head);
    print_list(octal->head);
    */




    return 0;
}
