void _init()
{
    if (true)
        return;
    __gmon_start__();
    return;
}

long long sub_400590()
{
    void *v0; // [bp-0x8]

    v0 = 0;
}

long long _start()
{
    unsigned long v0; // [bp-0x8]
    char v1;          // [bp+0x0]
    unsigned long v3; // rax

    v0 = v3;
    __libc_start_main(main, *((long long *)&v1), &v1, __libc_csu_init, __libc_csu_fini); /* do not return */
}

// No decompilation output for function sub_400669

void deregister_tm_clones()
{
    char v0;               // [bp-0x8]
    unsigned long long v2; // rbp

    v2 = &v0;
    if (true)
    {
        return;
    }
    else if (true)
    {
        return;
    }
}

long long register_tm_clones()
{
    if (true)
    {
        return 0;
    }
    else if (!(false))
    {
        return 0;
    }
}

extern char __TMC_END__;

long long __do_global_dtors_aux()
{
    unsigned long v0; // [bp-0x8]
    unsigned long v2; // rax

    if (!__TMC_END__)
    {
        *((int *)&v0) = rbp<8>;
        __TMC_END__ = 1;
        return (unsigned long long)deregister_tm_clones();
    }
    return v2;
}

extern unsigned long long __JCR_END__;

long long frame_dummy()
{
    unsigned long v0; // [bp-0x8]

    if (!__JCR_END__)
        return register_tm_clones();
    if (!(false))
        return register_tm_clones();
    *((int *)&v0) = rbp<8>;
    0();
}

int check_input(unsigned int *a0, unsigned long a1, unsigned long a2)
{
    unsigned int v0; // [bp-0x10]
    unsigned int v1; // [bp-0xc]

    for (v0 = 0; v0 < (unsigned int)a2; v0 += 1)
    {
        if (a0[v0] > 0)
        {
            if (a0[v0] > 75)
                return 0;
            for (v1 = v0 + 1; v1 < (unsigned int)a2; v1 += 1)
            {
                if (a0[v0] == a0[v1])
                    return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    if ((unsigned int)a2 != 5)
    {
        return 1;
    }
    else if ((unsigned int)a1 <= 0)
    {
        return 0;
    }
    else if ((unsigned int)a1 > 15)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void pick_numbers(unsigned int a0[5], unsigned int *a1)
{
    char v0;               // [bp-0x8]
    unsigned long long v2; // rbp
    unsigned long long v3; // rax
    unsigned long long v4; // rax
    unsigned long long v5; // rax
    unsigned long long v6; // rax
    unsigned long long v7; // rax
    unsigned long long v8; // rax

    v2 = &v0;
    srand(time(NULL));
    (unsigned int)v3 = rand();
    *(a1) = (unsigned int)v3 - (unsigned int)((((unsigned int)v3 * 2290649225 >> 32) + v3 >> 3) - (v3 >> 31)) * 15 + 1;
    (unsigned int)v4 = rand();
    a0[0] = (unsigned int)v4 - (unsigned int)(((unsigned int)v4 * 458129845 >> 35) - (v4 >> 31)) * 75 + 1;
    do
    {
        (unsigned int)v5 = rand();
        a0[1] = (unsigned int)v5 - (unsigned int)(((unsigned int)v5 * 458129845 >> 35) - (v5 >> 31)) * 75 + 1;
    } while (!check_input(a0, *(a1), 2));
    do
    {
        (unsigned int)v6 = rand();
        a0[2] = (unsigned int)v6 - (unsigned int)(((unsigned int)v6 * 458129845 >> 35) - (v6 >> 31)) * 75 + 1;
    } while (!check_input(a0, *(a1), 3));
    do
    {
        (unsigned int)v7 = rand();
        a0[3] = (unsigned int)v7 - (unsigned int)(((unsigned int)v7 * 458129845 >> 35) - (v7 >> 31)) * 75 + 1;
    } while (!check_input(a0, *(a1), 4));
    do
    {
        (unsigned int)v8 = rand();
        a0[4] = (unsigned int)v8 - (unsigned int)(((unsigned int)v8 * 458129845 >> 35) - (v8 >> 31)) * 75 + 1;
    } while (!check_input(a0, *(a1), 5));
    return;
}

void print_numbers(unsigned int *a0, unsigned long a1)
{
    unsigned int v0;       // [bp-0xc]
    char v1;               // [bp-0x8]
    unsigned long long v3; // rbp

    v3 = &v1;
    for (v0 = 0; v0 <= 4; v0 += 1)
    {
        printf("%d ", a0[v0]);
    }
    printf("- %d\n", (unsigned int)a1);
    return;
}

void check_result(unsigned int *a0, unsigned long a1, unsigned int *a2, unsigned long a3)
{
    unsigned int v0; // [bp-0x18]
    unsigned int v1; // [bp-0x14]
    unsigned int v2; // [bp-0x10]
    unsigned int v3; // [bp-0xc]

    v0 = 0;
    v1 = 0;
    for (v2 = 0; v2 <= 4; v2 += 1)
    {
        v3 = 0;
        while (true)
        {
            if (v3 > 4)
                break;
            if (a0[v2] != a2[v3])
            {
                v3 += 1;
            }
            else
            {
                v0 += 1;
                break;
            }
        }
    }
    if ((unsigned int)a1 == (unsigned int)a3)
        v1 = 1;
    if (!v0 && v1 == 1)
    {
        puts("Congratulations, you win 1 point");
        return;
    }
    if (v0 == 1 && v1 == 1)
    {
        puts("Congratulations, you win 2 points");
        return;
    }
    if (v0 == 2 && v1 == 1)
    {
        puts("Congratulations, you win 5 points");
        return;
    }
    if (v0 == 3 && !v1)
    {
        puts("Congratulations, you win 5 points");
        return;
    }
    if (v0 == 3 && v1 == 1)
    {
        puts("Congratulations, you win 50 points");
        return;
    }
    if (v0 == 4 && !v1)
    {
        puts("Congratulations, you win 500 points");
        return;
    }
    if (v0 == 4 && v1 == 1)
    {
        puts("Congratulations, you win 5,000 points");
        return;
    }
    if (v0 == 5 && !v1)
    {
        puts("Congratulations, you win 1,000,000 points");
        return;
    }
    if (v0 != 5)
    {
        puts("Sorry, try again!");
        return;
    }
    else if (v1 == 1)
    {
        puts("Congratulations, you win the Jackpot!");
        return;
    }
    else
    {
        puts("Sorry, try again!");
        return;
    }
}

int main(unsigned long a0, unsigned long long a1[7])
{
    char v0;         // [bp-0x50]
    unsigned int v1; // [bp-0x4c]
    unsigned int v2; // [bp-0x48]
    unsigned int v3; // [bp-0x44]
    unsigned int v4; // [bp-0x40]
    unsigned int v5; // [bp-0x3c]
    unsigned int v6; // [bp-0x38]
    char v7;         // [bp-0x28]

    if ((unsigned int)a0 != 7)
    {
        dprintf(2, "Usage: gm n1 n2 n3 n4 n5 bonus\n - (first pool) five different numbers from 1 to 75, followed by \n - (second pool) one number from 1 to 15\n");
        return 1;
    }
    v2 = atoi(a1[1]);
    v3 = atoi(a1[2]);
    v4 = atoi(a1[3]);
    v5 = atoi(a1[4]);
    v6 = atoi(a1[5]);
    v1 = atoi(a1[6]);
    if (!check_input(&v2, v1, 5))
    {
        dprintf(2, "Usage: gm n1 n2 n3 n4 n5 bonus\n - (first pool) five different numbers from 1 to 75, followed by \n - (second pool) one number from 1 to 15\n");
        return 1;
    }
    pick_numbers(&v7, &v0);
    print_numbers(&v7, *((int *)&v0));
    check_result(&v7, *((int *)&v0), &v2, v1);
    return 0;
}

long long __libc_csu_init(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    void *v2; // rbx

    if (false)
        return (unsigned long long)_init();
    v2 = 0;
    do
    {
        v2 += 1;
    } while (v2 != 1);
    return *((long long *)(6299152 + rbx<8> * 8))(a0, a1, a2);
}

long long __libc_csu_fini()
{
    unsigned long v1; // rax

    return v1;
}

long long _fini()
{
    unsigned long v1; // rax

    return v1;
}
