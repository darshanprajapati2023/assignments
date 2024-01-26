int main() 
{ 
    int i=0,j=0,rows = 4; 
    int n = 1; 
  
    for (i = 0; i < rows; i++) { 
  
        for (j = 0; j <= i; j++) { 
            printf("%d ", n++); 
        } 
        printf("\n"); 
    }
}
