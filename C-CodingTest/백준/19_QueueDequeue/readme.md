# ๐ Queue

## ๐ 01.[ํ2](https://www.acmicpc.net/problem/18258) 

### [18258](https://github.com/Ejaeda/Data_Structure/blob/master/CodingTest/%EB%B0%B1%EC%A4%80/19_QueueDequeue/01_18258.c)

- ํต์ฌ
```.c
1. queue ๋ฌธ์ 
2. ์ง์  ๊ตฌํ
```

- ๋ฌธ์ ์ ๊ทผ
```.c
strcmp๋ก ๋ช๋ น์ด ํ์ธ ํ ์๋
```

- ์ฝ๋ ๊ตฌํ
```.c
    // queue์์ ์ค์ํ ์์ธ์ฒ๋ฆฌ

    if (front == rear)
        return -1;
    //  print๋ฅผ ์๊ตฌํ๋ ๋ชจ๋  ํจ์ -1์ ์ถ๋ ฅ
```

-  ์๋ก ์ ์ฌ์ค

๐ก `strcmp` in #include `string.h`

๐ก ์ถ๋ ฅ์ด ๋ถ๊ฐํ  ๋๋ -1์ ์ถ๋ ฅ 

-----

## ๐ 02.[์นด๋2](https://www.acmicpc.net/problem/2164) 

### [2164](https://github.com/Ejaeda/Data_Structure/blob/master/CodingTest/%EB%B0%B1%EC%A4%80/19_QueueDequeue/02_2164.c)

- ํต์ฌ
```.c
1. queue ๋ฌธ์ 
2. all push -> pop -> push(pop)
```

- ๋ฌธ์ ์ ๊ทผ
```.c
push(pop)์์ด๋์ด ํ์ฉ
```

- ์ฝ๋ ๊ตฌํ
```.c
    while (1)
    {
        if (rear == front + 1)
        {
            printf ("%d\n", Queue[front]);
            return 0;
        }
        front++;
        Queue[rear] = Queue[front];
        rear++;
        front++;
    }
```

-  ์๋ก ์ ์ฌ์ค

๐ก ํ์ ๋ค์ด์๋ ๋งจ ์ ์๋ฅผ ๋งจ ๋ค๋ก ๋ฃ๊ณ  ์ถ๋ค๋ฉด?

    -   push(pop)

-----

# 03. [์์ธํธ์ค ๋ฌธ์ 0](https://www.acmicpc.net/problem/11866) 

### :point_right: [11866](https://github.com/Ejaeda/Data_Structure/blob/master/CodingTest/%EB%B0%B1%EC%A4%80/19_QueueDequeue/03_11866.c)

- ํต์ฌ
```.c
1. ์์ธํธ์ค ๋ฌธ์ 
> ์์ธํธ์ค ์์ด
```

- ๋ฌธ์ ์ ๊ทผ
```.c
์๋ฐฉํฅ ์ฐ๊ฒฐ๋ฆฌ์คํธ๋ฅผ ํ์ฉ
```

- ์ฝ๋ ๊ตฌํ
```.c
#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    struct _node *next;
    struct _node *prev;
    int         num;
}               node;

// ์ฐ๊ฒฐ๋ฆฌ์คํธ์ ์ ๋ค๋ฅผ ์ ์งํ๋ฏ๋ก ์ ์ญ๋ณ์๋ก ์ ์ธ
node *head = 0;
node *tail = 0;

node    *create_node(int data)  // ๋ธ๋๋ฅผ ์์ฑํ๋ ํจ์
{
    node *new;

    new = malloc(sizeof(node));
    new->next = 0;
    new->prev = 0;
    new->num = data;
    return (new);
}

void    cycle_node(int data)    // ๋ธ๋๋ฅผ ์์ฑ๊ณผ ๋์์ ์ฐ๊ฒฐํ๋ ํจ์
{
    node *new = create_node(data);
    node *temp;

    if (head == NULL)
    {
        head = new;
        tail = head;
    }

    else
    {
        temp = tail;
        temp->next = new;
        new->prev =temp;
        tail = new;
    }
}


void    print_node(node *haed, int N, int K)    // ์์ธํธ์ค ์์ด ์ถ๋ ฅ
{
    node *temp = head->prev;
    int c = 0;
    int move = 0;

    printf ("<");
    while (c < N)
    {
        move = K;
        while (move--)
            temp = temp->next;
        printf(c++ ? ", %d" : "%d", temp->num);
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }
    printf (">");
}


int main()
{
    int idx;
    int N, K;

    scanf("%d %d", &N, &K);

    idx = 0;
    while (++idx <= N)
        cycle_node(idx);

    head->prev = tail;
    tail->next = head;
    print_node(head, N, K);

    return (0);
}
```

-  ์๋ก ์ ์ฌ์ค

๐ก ๋ธ๋๋ฅผ ์์ฑํ๊ณ  ์ฐ๊ฒฐ์ง์ผ๋ ค๋ฉด

    -   create_node ํจ์ ์์ฑ
    -   cycle_node ํจ์ ์์ฑ
    -   main์์ ๋ธ๋๋ฅผ ๋ง๋ค๊ณ  ์ฐ๊ฒฐํ๋๊ฒ์ด ์๋๋ผ
    -   ์ฐ๊ฒฐํ๋ ํจ์ ๋ด์์ ์์ฑํ๋ฉด์ ๋ฐ๋ก ์ฐ๊ฒฐ
> ์๋ฐฉํฅ์ผ ๊ฒฝ์ฐ ์ฐ๊ฒฐ ๋ชจ๋ ์ง์ด์ฃผ๊ณ  ์๋์ ๊ฐ์ด ์ฐ๊ฒฐ
```.c
    head->prev = tail;
    tail->next = head;
```

๐ก ์ํ๋ ๋งํผ ๋ธ๋๋ฅผ ์์ง์ด๊ณ  ์ถ์ ๋

    -   ์์์ ์ head->prev ๋ถํฐ ์์!
    -   node = node->next ๋ฅผ ํ์ฉ

```.c
    list *node = head->prev;
    int move;
    int idx;

    idx = 0;
    while (idx < num์ ๊ฐฏ์)
    {
        move = ์์ง์ผ ๊ฑฐ๋ฆฌ;
        while (move--)          // node๋ฅผ ์ํ๋๋งํผ ์์ง์ด๋ skill
            node = node->next;
```


๐ก ์ผํญ ์ฐ์๋ฅผ ํ์ฉํ printf ์คํฌ

    -   ๋ง์ฝ  1, 2, 3, 4, 5 ๋ฅผ ์ถ๋ ฅํด์ผํ  ๊ฒฝ์ฐ
    -   ๋์๋ ',' ๋ฅผ ์ถ๋ ฅํ์ง ์๋๋ค
    -   ์ด๋ ์ฌ์ฉํ๋ฉด ์ข์ ์คํฌ

```.c
    while (idx < num์ ๊ฐฏ์)
    {
        move = ์์ง์ผ ๊ฑฐ๋ฆฌ;
        while (move--)
            node = node->next;
        printf(idx++ ? ", %d" : "%d", node->data);
    }
```
>   ์ฒ์์๋ idx == 0 ์ด๋๊น FALSE ์ด๋ฏ๋ก "%d" !!

๐ก ๋ธ๋๋ฅผ ์ง์ฐ๋ ์คํฌ

```.c
    
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;

```

-----