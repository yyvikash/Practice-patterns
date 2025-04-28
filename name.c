#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
void set(int x,int y) {
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int x1,y1;
void printA(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if ((j == 0 || j == n - 1) || (i == n / 2 && j > 0 && j < n - 1) || (i == 0 && j > 0 && j < n - 1))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printB(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || 
                (j == n - 1 && (i != 0 && i != n / 2 && i != n - 1)) || 
                (i == 0 && j < n - 1) || 
                (i == n / 2 && j < n - 1) || 
                (i == n - 1 && j < n - 1))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printC(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || (i == 0 && j > 0) || (i == n - 1 && j > 0))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}

void printD(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || (j == n - 1 && i != 0 && i != n - 1) || (i == 0 && j < n - 1) || (i == n - 1 && j < n - 1))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printE(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || i == 0 || i == n / 2 || i == n - 1)
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printF(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || i == 0 || i == n / 2)
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printG(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || (i == 0 && j < n - 1) || (i == n - 1 && j < n - 1) || (j == n - 1 && i >= n / 2) || (i == n / 2 && j >= n / 2))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printH(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == n / 2)
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printI(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == n / 2)
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printJ(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for (i = 0; i < n; i++) {
        set(x1,y1);
        for (j = 0; j < n; j++) {
            if (i == 0 || 
                (j == n - 1 && i != 0 && i < n - 1) || 
                (i == n - 1 && j < n - 1) || 
                (j == 0 && i >= n / 2))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}

void printK(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || (i + j == n / 2) || (i - j == n / 2))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printL(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || i == n - 1)
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printM(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || (i == j && i <= n / 2) || (i + j == n - 1 && i <= n / 2))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printN(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == j)
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printO(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printP(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || (i == 0 && j < n - 1) || (i == n / 2 && j < n - 1) || (j == n - 1 && i < n / 2 && i > 0))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printQ(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || (i == j && i > n / 2))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printR(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || (i == 0 && j < n - 1) || (i == n / 2 && j < n - 1) || (j == n - 1 && i < n / 2 && i > 0) || (i > n / 2 && i - j == n / 2))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printS(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || i == n / 2 || (j == 0 && i < n / 2) || (j == n - 1 && i > n / 2))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}

void printT(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (i == 0 || j == n / 2)
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printU(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if ((j == 0 || j == n - 1) && (i != n - 1) || (i == n - 1 && j > 0 && j < n - 1))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printV(int num) {
    int n = (num*2)-1;
    y1=1,x1+=n-2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == i && i <= n / 2 || j + i == n - 1 && i <= n / 2)
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
    x1+=n/2;
}
void printW(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || (i >= n / 2 && (i == j || i + j == n - 1)))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printX(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (i == j || i + j == n - 1)
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printY(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if ((i == j || i + j == n - 1) && i <= n / 2 || (j == n / 2 && i > n / 2))
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void printZ(int n) {
    y1=1,x1+=n+2;
    int i, j;
    for(i = 0; i < n; i++) {
        set(x1,y1);
        for(j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || i + j == n - 1)
                printf("*");
            else
                printf(" ");
        }
        y1++;
        printf("\n");
    }
}
void space(int n) {
    x1+=n;
} 
int main() {
    system("color B");
    int repeat = 0;
    while(repeat!=32) {
    fflush(stdin);
    system("cls");
    x1=2,y1=1;
    int n;
    printf("Enter  name : ");
    char name[20];
    gets(name);
    
    printf("Enter size : ");
    scanf("%d",&n);
    if(n%2==0) {
        n++;
    }
    x1-=n,y1=1;
    system("cls");
    for(int i=0;i<strlen(name);i++) {
        char ch = name[i];
        ch = toupper(ch);
        switch(ch) {
        case 'A' : printA(n);
        break;
        case 'B' : printB(n);
        break;
        case 'C' : printC(n);
        break;
        case 'D' : printD(n);
        break;
        case 'E' : printE(n);
        break;
        case 'F' : printF(n);
        break;
        case 'G' : printG(n);
        break;
        case 'H' : printH(n);
        break;
        case 'I' : printI(n);
        break;
        case 'J' : printJ(n);
        break;
        case 'K' : printK(n);
        break;
        case 'L' : printL(n);
        break;
        case 'M' : printM(n);
        break;
        case 'N' : printN(n);
        break;
        case 'O' : printO(n);
        break;
        case 'P' : printP(n);
        break;
        case 'Q' : printQ(n);
        break;
        case 'R' : printR(n);
        break;
        case 'S' : printS(n);
        break;
        case 'T' : printT(n);
        break;
        case 'U' : printU(n);
        break;
        case 'V' : printV(n);
        break;
        case 'W' : printW(n);
        break;
        case 'X' : printX(n);
        break;
        case 'Y' : printY(n);
        break;
        case 'Z' : printZ(n);
        break;
        case ' ' : space(n);
        break;
        default : printf("Invalid input!");
        break;
    }
    }
    
    char again[] = "\n\tPress any key for again(for exit press spacebar) : ";
    for(int i=0;i<strlen(again);i++) {
        printf("%c",again[i]);
        Sleep(10);
    }
    repeat = getch();
    }
    set(x1,y1+2);
    return 0;
}