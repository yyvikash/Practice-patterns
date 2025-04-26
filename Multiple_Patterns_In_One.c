#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("-------------------------\n");
    // 1 2 3 4 5 
    // 2 3 4 5 6 
    // 3 4 5 6 7 
    // 4 5 6 7 8 
    // 5 6 7 8 9 
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            printf("%d ",j+i-1);
        }
        printf("\n");
    }
    printf("-------------------------\n");
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * * 
    // * * * * * *
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("-------------------------\n");
    // 1 
    // 0 1 
    // 1 0 1 
    // 0 1 0 1 
    // 1 0 1 0 1 
    int start=1;
    for(int i=1;i<=n;i++) {
        int curr=start;
        for(int j=1;j<=i;j++) {
            if(start) {
                if(curr) {
                    printf("%d ",curr);
                    curr=0;
                }
                else {
                    printf("%d ",curr);
                    curr=1;
                }
            }
            else {
                if(curr) {
                    printf("%d ",curr);
                    curr=0;
                }
                else {
                    printf("%d ",curr);
                    curr=1;
                }
            }
        }
        if(start) {
            start=0;

        }
        else {
            start=1;
        }
        printf("\n");
    }
    printf("-------------------------\n");
    
    //           * 
    //         * * 
    //       * * * 
    //     * * * * 
    //   * * * * * 
    // * * * * * * 
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(j>=n-i+1) {
                printf("* ");
            }
            else {
                printf(" ");
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("-------------------------\n");
    //         * 
    //       * * 
    //     *   * 
    //   *     * 
    // * * * * *
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(j==n-i+1 || j==n || i==n) {
                printf("* ");
            }
            else {
                printf(" ");
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("-------------------------\n");
    //     * 
    //    * * 
    //   * * * 
    //  * * * * 
    // * * * * * 
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(j>=n-i+1) {
                printf("* ");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("-------------------------\n");
    //     *     
    //    * *    
    //   *   *   
    //  *     *  
    // * * * * *   
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n*2;j++) {
            if(j==n-i+1 || (j==n+i-1 && i!=n)) {
                printf("*");
            }
            else if(i==n && j<=n) {
                printf(" *");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("-------------------------\n");
    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // *
    for(int i=1;i<=n;i++) {
        for(int j=n;j>=i;j--) {
            printf("* ");
        }
        printf("\n");
    }
    printf("-------------------------\n");
    //Same patter of above code can be made from below code
    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // *
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(j<=n-i+1) {
                printf("* ");
            }
        }
        printf("\n");
    }
    printf("-------------------------\n");
    // * * * * * 
    // *     *   
    // *   *     
    // * *       
    // * 
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==1 || j==1 || j==n-i+1) {
                printf("* ");
            }
            else {
                printf(" ");
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("-------------------------\n");
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(j>=n-i+1) {
                printf("* ");
            }
            else printf(" ");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(j>=i) {
                printf("* ");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("-------------------------\n");
    
    //      *       
    //     *  *      
    //    *    *     
    //   *      *    
    //  *        *   
    // *          *  
    // *          *  
    //  *        *   
    //   *      *    
    //    *    *     
    //     *  *      
    //      *  
    
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n*2;j++) {
            if(j==n-i+1 || j==n+i-1) {
                printf("* ");
            }
            else printf(" ");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n*2;j++) {
            if(j==i || j==2*n-i) {
                printf("* ");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("-------------------------\n");
    //Pyramid
    //           *             
    //         * * *           
    //       * * * * *         
    //     * * * * * * *       
    //   * * * * * * * * *     
    // * * * * * * * * * * *   
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n*2;j++) {
            if(j>=n-i+1 && j<=n+i-1) {
                printf("* ");
            }
            else {
                printf(" ");
                printf(" ");
            }
        }
        printf("\n");
    }
    
    //Reverse pyramid
    printf("-------------------------\n");
    // * * * * * * * * * * *   
    //   * * * * * * * * *     
    //     * * * * * * *       
    //       * * * * *         
    //         * * *           
    //           *             
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n*2;j++) {
            if(j>=i && j<=2*n-i) {
                printf("* ");
            }
            else {
                printf(" ");
                printf(" ");
            }
        }
        printf("\n");
    }
    
    printf("-------------------------\n");
    //
    //             *               
    //           * * *             
    //         * * * * *           
    //       * * * * * * *         
    //     * * * * * * * * *       
    //   * * * * * * * * * * *     
    // * * * * * * * * * * * * *   
    //   * * * * * * * * * * *     
    //     * * * * * * * * *       
    //       * * * * * * *         
    //         * * * * *           
    //           * * *             
    //             *               

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n*2;j++) {
            if(j>=n-i+1 && j<=n+i-1) {
                printf("* ");
            }
            else {
                printf(" ");
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n*2;j++) {
            if(j>i && j<=2*n-i-1) {
                printf("* ");
            }
            else {
                printf(" ");
                printf(" ");
            }
        }
        printf("\n");
    }
    
    printf("-------------------------\n");
    return 0;
}
